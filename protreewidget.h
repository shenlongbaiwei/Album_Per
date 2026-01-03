#ifndef PROTREEWIDGET_H
#define PROTREEWIDGET_H

#include <QTreeWidget>
#include <QAction>
#include<QProgressDialog>

#include <QTreeWidgetItem>
class ProTreeThread;
class ProTreeWidget : public QTreeWidget
{
    Q_OBJECT
public:
    ProTreeWidget(QWidget *parent = nullptr);
    void AddProToTree(const QString&name,const QString &path);
private:
    QSet<QString> _set_path;//判断重名
    QTreeWidgetItem*  _right_btn_item;
    QAction* _action_import;
    QAction* _action_setstart;
    QAction* _action_closepro;
    QAction* _action_slideshow;
    QProgressDialog*_dialog_progress;
    QTreeWidgetItem* _selected_item;
    //右键单击某个item之后弹出菜单
    //QTreeWidgetItem * _right_btn_item;
    //copy文件线程
    std::shared_ptr<ProTreeThread>  _thread_create_pro;


public slots:
    void SlotItemPressed(QTreeWidgetItem *item,int column);
    void SlotImport();
    void SlotUpdateProgress(int count);
    void SlotCancelProgress();
    void SlotFinishProgress();
    void slotDoubleClickedItem(QTreeWidgetItem* doubleItem, int col);
    void SlotPreShow();
    void SlotNextShow();


signals:
    void SigUpdateProgress(int);
    void SigUpdateSelected(const QString&);
    void SigClearSelected();
    void SigCancelProgress();
    void SigUpdatePic(const QString&);
    void SlotUpdatePic(const QString&path);

};

#endif // PROTREEWIDGET_H
