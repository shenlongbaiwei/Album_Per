#include "protreeitem.h"

ProTreeItem::ProTreeItem(QTreeWidget *view, const QString &name, const QString&path,int type ):
    QTreeWidgetItem(view,type),_path(path),_root(this),_pre_item(nullptr),_next_item(nullptr),_name(name)

{

}
ProTreeItem::ProTreeItem(QTreeWidgetItem*parent,const QString &name,const QString&path,
                         QTreeWidgetItem*root,int type):

    QTreeWidgetItem(parent,type),_root(root),_path(path),_name(name),_pre_item(nullptr),_next_item(nullptr)
{

}

const QString &ProTreeItem::GetPath()
{
    return _path;
}

QTreeWidgetItem *ProTreeItem::GetRoot()
{
    return _root;
}

void ProTreeItem::SetPreItem(QTreeWidgetItem *item)
{
    _pre_item=item;
}

void ProTreeItem::SetNextItem(QTreeWidgetItem *item)
{
    _next_item=item;
}

ProTreeItem *ProTreeItem::GetPreItem()
{
    //安全的进行转换
    return dynamic_cast<ProTreeItem*>(_pre_item);
}

ProTreeItem *ProTreeItem::GetNextItem()
{
    //安全的进行父类往子类进行转换
    return dynamic_cast<ProTreeItem*>(_next_item);
}
