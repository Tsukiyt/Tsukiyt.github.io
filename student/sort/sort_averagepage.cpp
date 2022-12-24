#include "sort_averagepage.h"
#include "ui_sort_averagepage.h"

sort_averagePage::sort_averagePage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::sort_averagePage)
{
    ui->setupUi(this);
     setWindowTitle("根据平均分数显示学生的排名");
      setFixedSize(800,700);
     connect(&sqldialog,&stuSqlDialog::ChangeUiSlot1,this,&sort_averagePage::dealslot4);
    }

sort_averagePage::~sort_averagePage()
{
    delete ui;
}
//关闭子界面sqldia和打开主界面deletepage
void sort_averagePage::dealslot4()
{
    this->show();
    sqldialog.hide();
}

void sort_averagePage::on_backbtn_released()
{
     emit ChangeUiSlot();
    this->close();
}


//打开子界面sqldialog和关闭主界面ddeletapage
void sort_averagePage::on_okbtn_released()
{
    this->close();
    sqldialog.show();
}

