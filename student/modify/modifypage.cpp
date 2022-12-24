#include "modifypage.h"
#include "ui_modifypage.h"

ModifyPage::ModifyPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ModifyPage)
{
    ui->setupUi(this);
     setWindowTitle("修改学生成绩");
     setFixedSize(800,700);

     connect(&sqldialog,&stuSqlDialog::ChangeUiSlot1,this,&ModifyPage::dealslot2);
}

ModifyPage::~ModifyPage()
{
    delete ui;
}
//关闭子界面sqldia和打开主界面deletepage
void ModifyPage::dealslot2()
{

    this->show();
    sqldialog.hide();
}

void ModifyPage::on_backbtn_released()
{
    //取消按键---->返回lookpage界面
     emit ChangeUiSlot();
     this->close();
}

//打开子界面sqldialog和关闭主界面ddeletapage
void ModifyPage::on_okbtn_released()
{
   this->hide();
   sqldialog.show();

}


