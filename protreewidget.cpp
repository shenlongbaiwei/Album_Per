#include "protreewidget.h"
#include <QDir>
#include "protreeitem.h"
#include "const.h"
#include <QHeaderView>
#include<QGuiApplication>
#include <QMenu>
#include <QAction>
#include<QFileDialog>
#include<qDebug>
#include"protreethread.h"
ProTreeWidget::ProTreeWidget(QWidget *parent) {
    this->header()->hide();
    connect(this,&ProTreeWidget::itemPressed,this,&ProTreeWidget::SlotItemPressed);
    _action_import=new QAction(QIcon(":/icon/import.png"),tr("导入文件"),this);
    _action_setstart = new QAction(QIcon(":/icon/core.png"),tr("设置活动目录"),this);
    _action_closepro = new QAction(QIcon(":/icon/close.png"),tr("关闭项目"),this);
    _action_slideshow = new QAction(QIcon(":/icon/slideshow.png"),tr("轮播图播放"),this);
    connect(_action_import,&QAction::triggered,this,&ProTreeWidget::SlotImport);
    connect(this,&ProTreeWidget::itemDoubleClicked,this,&ProTreeWidget::slotDoubleClickedItem);
    _action_setstart = new QAction(QIcon(":/icon/core.png"), tr("设置活动项目"),this);
    _action_closepro = new QAction(QIcon(":/icon/close.png"), tr("关闭项目"), this);
    //connect(_action_closepro, &QAction::triggered, this, &ProTreeWidget::SlotClosePro);
    //connect(_action_setstart, &QAction::triggered, this, &ProTreeWidget::SlotSetActive);

}

void ProTreeWidget::AddProToTree(const QString &name, const QString &path)
{
    //打开路径
    QDir dir(path);
    QString file_path=dir.absoluteFilePath(name);
    if(_set_path.find(file_path)!=_set_path.end()){
        return;
    }

    QDir pro_dir(file_path);
    if(!pro_dir.exists()){
        bool enable=pro_dir.mkpath(file_path);
        if(!enable){
            return;
        }
    }
    _set_path.insert(file_path);
    auto * item=new ProTreeItem(this,name,file_path,TreeItemPro);
    item->setData(0,Qt::DisplayRole,name);
    item->setData(0,Qt::DecorationRole,QIcon(":/icon/dir.png"));
    item->setData(0,Qt::ToolTipRole,file_path);

    this->addTopLevelItem(item);
}

void ProTreeWidget::SlotItemPressed(QTreeWidgetItem *pressedItem, int column)
{
    if(QGuiApplication::mouseButtons()==Qt::RightButton){
        QMenu menu(this);
        int itemtype=pressedItem->type();
        if(itemtype==TreeItemPro){
            //创建一个右键菜单
            _right_btn_item = pressedItem;
            menu.addAction(_action_import);
            menu.addAction(_action_setstart);
            menu.addAction(_action_closepro);
            menu.addAction(_action_slideshow);
            menu.exec(QCursor::pos());
        }
    }
}

void ProTreeWidget::SlotImport()
{
    QFileDialog file_dialog;
    file_dialog.setFileMode(QFileDialog::Directory);
    file_dialog.setWindowTitle(tr("选择导入的文件夹"));
    QString path="";
    if(!_right_btn_item){
        qDebug()<<"right_btn_item is empty";
        //path=QDir::currentPath();
        return;
    }

    path =dynamic_cast<ProTreeItem*>(_right_btn_item)->GetPath();
    file_dialog.setDirectory(path);
    file_dialog.setViewMode((QFileDialog::Detail));
    QStringList fileNames;
    if(file_dialog.exec()){
        fileNames=file_dialog.selectedFiles();
    }
    if(fileNames.length()<=0){
        return ;
    }
    QString import_path=fileNames.at(0);
    qDebug()<<"import_path is "<<import_path <<endl;
    int file_count =0;
    //创建模态对话框
    _dialog_progress = new QProgressDialog(this);
    //耗时操作放在线程中操作
    _thread_create_pro = std::make_shared<ProTreeThread>(std::ref(import_path), std::ref(path),
                                                         _right_btn_item,
                                                         std::ref(file_count), this,_right_btn_item,nullptr);
    //连接更新进度框操作
    connect(_thread_create_pro.get(), &ProTreeThread::SigUpdateProgress,
            this, &ProTreeWidget::SlotUpdateProgress);

    connect(_thread_create_pro.get(), &ProTreeThread::SigFinishProgress, this,
            &ProTreeWidget::SlotFinishProgress);

    connect(_dialog_progress, &QProgressDialog::canceled, this, &ProTreeWidget::SlotCancelProgress);
    connect(this, &ProTreeWidget::SigCancelProgress, _thread_create_pro.get(),
            &ProTreeThread::SlotCancelProgress);
    _thread_create_pro->start();

    //连接信号和槽
    _dialog_progress->setWindowTitle("Please wait...");
    _dialog_progress->setFixedWidth(PROGRESS_WIDTH);
    _dialog_progress->setRange(0, PROGRESS_MAX);
    _dialog_progress->exec();
}
void ProTreeWidget::SlotUpdateProgress(int count)
{
    qDebug() << "count is " << count;
    if(!_dialog_progress){
        qDebug() << "dialog_progress is empty!!!" << endl;
        return;
    }

    if(count >= PROGRESS_MAX){
        _dialog_progress->setValue(count%PROGRESS_MAX);
    }else{
        _dialog_progress->setValue(count%PROGRESS_MAX);
    }

}
void ProTreeWidget::SlotCancelProgress()
{
    //  _thread_create_pro->terminate();
    emit SigCancelProgress();
    delete _dialog_progress;
    _dialog_progress =nullptr;
}

void ProTreeWidget::SlotFinishProgress()
{
    _dialog_progress->setValue(PROGRESS_MAX);
    _dialog_progress->deleteLater();
}

void ProTreeWidget::slotDoubleClickedItem(QTreeWidgetItem *doubleItem, int col)
{
    qDebug() << "ProTreeWidget::SlotDoubleClickItem" ;
    if(QGuiApplication::mouseButtons()==Qt::LeftButton){
        auto *tree_doubleitem=dynamic_cast<ProTreeItem*>(doubleItem);
        if(!tree_doubleitem){
            return;
        }
        qDebug() << "daozheli" ;
        int itemType=(int) (tree_doubleitem->type());
        if(itemType==TreeItemPic){
            emit SigUpdateSelected(tree_doubleitem->GetPath());
            _selected_item = doubleItem;
        }
    }
}
void ProTreeWidget::SlotPreShow(){
    if(!_selected_item){
        return;
    }

    auto * curItem = dynamic_cast<ProTreeItem*>(_selected_item)->GetPreItem();
    if(!curItem){
        return;
    }
    emit SigUpdatePic(curItem->GetPath());
    _selected_item = curItem;
    this->setCurrentItem(curItem);
}
void ProTreeWidget::SlotNextShow(){

    if(!_selected_item){
        return;
    }

    auto * curItem = dynamic_cast<ProTreeItem*>(_selected_item)->GetNextItem();
    if(!curItem){
        return;
    }
    emit SigUpdatePic(curItem->GetPath());
    _selected_item = curItem;
    this->setCurrentItem(curItem);
}
