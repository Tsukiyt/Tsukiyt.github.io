#include "deletepage.h"
#include "ui_deletepage.h"

DeletePage::DeletePage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DeletePage)
{
    ui->setupUi(this);
     setWindowTitle("删除学生成绩");
    setFixedSize(800,700);
     connect(&sqldialog,&stuSqlDialog::ChangeUiSlot1,this,&DeletePage::dealslot1);
}

DeletePage::~DeletePage()
{
    delete ui;
}

//关闭子界面sqldia和打开主界面deletepage
void DeletePage::dealslot1()
{
    this->show();
    sqldialog.hide();
}

//取消按键---返回lookpage界面
void DeletePage::on_pushButton_released()
{
    emit ChangeUiSlot();
    this->close();
}

//进行删除：打开子界面sqldialog和关闭主界面ddeletapage
void DeletePage::on_pushButton_2_released()
{
    this->close();
    sqldialog.show();

}

