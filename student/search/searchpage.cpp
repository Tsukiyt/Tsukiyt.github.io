#include "searchpage.h"
#include "ui_searchpage.h"

SearchPage::SearchPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SearchPage)
{
    ui->setupUi(this);
     setWindowTitle("查询学生成绩");
      setFixedSize(800,700);
     connect(&sqldialog,&stuSqlDialog::ChangeUiSlot1,this,&SearchPage::dealslot3);
    }


SearchPage::~SearchPage()
{
    delete ui;
}

void SearchPage::dealslot3()
{
    this->show();
    sqldialog.hide();
}

//取消
void SearchPage::on_backbtn_released()
{
    //取消按键---->返回lookpage界面
     emit ChangeUiSlot();
    this->close();
}


void SearchPage::on_pushButton_2_released()
{
    this->hide();
    sqldialog.show();
}

