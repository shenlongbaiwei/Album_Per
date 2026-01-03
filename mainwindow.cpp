#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMenu>
#include<QAction>
#include <QDebug>
#include "wizard.h"
#include "protree.h"
#include "picshow.h"
#include"protreewidget.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //不设置这个地方的话，会触发QT的自适应尺寸调整，导致图片按照原尺寸重回，进一步导致对于图片宽度的限制失效
    this->setMinimumSize(1629,869);
    //创建一个菜单
    QMenu * menu_file = menuBar()->addMenu(tr("文件(&F)"));
    //menubar是那个目录那一层的，menu是menubar下面一级展开的东西。
    //创建项目动作
    QAction * action_create_pro= new QAction(QIcon(":/icon/createpro.png"),tr("创建项目"),this);
    action_create_pro->setShortcut(QKeySequence(Qt::CTRL+Qt::Key_N));
    menu_file->addAction(action_create_pro);

    //打开项目动作
    QAction * action_open_pro = new QAction(QIcon(":/icon/openpro.png"),tr("打开项目"),this);
    action_open_pro->setShortcut(QKeySequence(Qt::CTRL+Qt::Key_O));
    menu_file->addAction(action_open_pro);

    //创建设置菜单
    QMenu* menu_set =menuBar()->addMenu(tr("设置(&S)"));

    //设置背景音乐
    QAction*action_music=new QAction(QIcon(":/icon/music.png"),tr("设置音乐"),this);
    action_music->setShortcut(QKeySequence(Qt::CTRL+Qt::Key_M));
    menu_set->addAction(action_music);

    //连接信号和槽
    connect(action_create_pro,&QAction::triggered,this,&MainWindow::SlotCtreatePro);

    _protree=new ProTree();
    ui->ProLayout->addWidget(_protree,0);

    _picshow=new PicShow();
    ui->PicLayout->addWidget(_picshow);
    //connect(action_create_pro, &QAction::triggered, this, &MainWindow::SlotCreatePro);
    QTreeWidget* tree_widget = dynamic_cast <ProTree*>(_protree)->GetTreeWidget();
    auto * pro_tree_widget = dynamic_cast<ProTreeWidget*>(tree_widget);
    auto* pro_pic_show=dynamic_cast<PicShow*>(_picshow);
    connect(pro_tree_widget,&ProTreeWidget::SigUpdateSelected,pro_pic_show,
            &PicShow::SlotSelectItem);
    connect(pro_pic_show, &PicShow::SigPreClicked,pro_tree_widget,&ProTreeWidget::SlotPreShow);
    connect(pro_pic_show, &PicShow::SigNextClicked,pro_tree_widget,&ProTreeWidget::SlotNextShow);
    connect(pro_tree_widget,&ProTreeWidget::SigUpdatePic,pro_pic_show,&PicShow::SlotUpdatePic);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::SlotCtreatePro(bool)
{
    qDebug()<<"slot create pro";
    //把项目向导项加载出来
    Wizard wizard(this);
    wizard.setWindowTitle(tr("创建项目"));
    auto*page=wizard.page(0);
    page->setTitle(tr("设置项目配置"));
    wizard.adjustSize(); // 关键：自动调整到适合内容的大小
    //连接信号和槽,把项目的配置传回来 TODO..
    //链接done的信号
    connect(&wizard,&Wizard::SigProSettings,dynamic_cast<ProTree*>(_protree),&ProTree::AddProToTree);
    wizard.show();
    wizard.exec();
}


void MainWindow::resizeEvent(QResizeEvent *event)
{
    auto* pro_pic_show=dynamic_cast<PicShow*>(_picshow);
    pro_pic_show->ReloadPic();
    QMainWindow::resizeEvent(event);
}

