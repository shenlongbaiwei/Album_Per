#include "prosetpage.h"
#include "ui_prosetpage.h"
#include <QFileDialog>
#include<QDir>
#include<QDebug>
ProSetPage::ProSetPage(QWidget *parent)
    : QWizardPage(parent)
    , ui(new Ui::ProSetPage)
{
    ui->setupUi(this);
    registerField("proPath",ui->Path_lineEdit);
    registerField("proName",ui->name_lineEdit);
    connect(ui->name_lineEdit,&QLineEdit::textEdited,this,&ProSetPage::completeChanged);
    connect(ui->Path_lineEdit,&QLineEdit::textEdited,this,&ProSetPage::completeChanged);
    QString curpath=QDir::currentPath();
    ui->Path_lineEdit->setText(curpath);
    ui->Path_lineEdit->setCursorPosition(ui->Path_lineEdit->text().size());
    ui->Path_lineEdit->setClearButtonEnabled(true);
    ui->name_lineEdit->setClearButtonEnabled(true);

}

void ProSetPage::GetProSettings(QString &name, QString &path)
{
    name=ui->name_lineEdit->text();
    path=ui->Path_lineEdit->text();
    return;
}

ProSetPage::~ProSetPage()
{
    delete ui;
}

bool ProSetPage::isComplete() const
{
    if(ui->Path_lineEdit->text()==""||ui->name_lineEdit->text()==""){
        return false;
    }
    QDir dir(ui->Path_lineEdit->text());
    if(!dir.exists()){
        ui->tips_content->setText(tr("项目路径不存在"));
        return false;
    }

    //判断路径
    QString absFilePath = dir.absoluteFilePath(ui->name_lineEdit->text());
    QDir dist_dir(absFilePath);
    if(dist_dir.exists()){
        ui->tips_content->setText(tr("项目已经存在了，请换个名字或者路径"));
        return false;
    }
    ui->tips_content->setText("");
    return QWizardPage::isComplete();
}

void ProSetPage::on_pushButton_clicked()
{
    //点击borwser之后会打开文件夹选择窗口
    QFileDialog file_dialog;
    file_dialog.setFileMode(QFileDialog::Directory);
    file_dialog.setWindowTitle(tr("选择要导入的文件夹"));
    auto path=QDir::currentPath();
    file_dialog.setDirectory(path);
    file_dialog.setViewMode(QFileDialog::Detail);
    //获取选中的filename
    QStringList files;
    if(file_dialog.exec()){
        files=file_dialog.selectedFiles();
    }
    if(files.length()<=0){
        qDebug()<<"当前没有选择文件"<<endl;
        return;
    }
    QString import_path=files.at(0);
    qDebug() << "import_path is " << import_path << endl;
    ui->Path_lineEdit->setText(import_path);
}

