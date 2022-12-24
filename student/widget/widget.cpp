#include "widget.h"
#include "ui_widget.h"
#include"deletepage.h"
#include "modifypage.h"
#include "sort_averagepage.h"
#include "search.h"
#include "stusqldialog.h"
#include <QStackedLayout>//切换页面（除去addpage页面外）
#include <QStackedWidget>
#include <QDebug>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    setWindowTitle("学生成绩管理系统");
     setFixedSize(800,700);

    connect(&del,&DeletePage::ChangeUiSlot,this,&Widget::dealslot);
    connect(&modify,&ModifyPage::ChangeUiSlot,this,&Widget::dealslot);
    connect(&search,&SearchPage::ChangeUiSlot,this,&Widget::dealslot);
    connect(&sort,&sort_averagePage::ChangeUiSlot,this,&Widget::dealslot);
    connect(&sqldialog,&stuSqlDialog::ChangeUiSlot1,this,&Widget::dealslot1);



}

Widget::~Widget()
{
    delete ui;
}
void Widget::dealslot()
{
    this->show();
    del.hide();//关闭子页面打开主页面
}

//退出系统
void Widget::on_backbtn_clicked()
{
    close();
}



//lookpage里的返回
void Widget::on_backbtn_2_released()
{
    ui->stackedWidget->setCurrentWidget(ui->menupage);
}


//关闭子界面sqldia和打开主界面deletepage
void Widget::dealslot1()
{
    this->show();
    sqldialog.hide();
}


//查询学生信息
void Widget::on_lookbtn_released()
{
    ui->stackedWidget->setCurrentWidget(ui->lookpage);
}

//1、添加学生成绩
void Widget::on_addbtn_released()
{
    ui->stackedWidget->setCurrentWidget(ui->addpage);
}

//1-1 、addpage里的取消键
void Widget::on_backbtn_3_released()
{
     ui->stackedWidget->setCurrentWidget(ui->lookpage);
}


//1-2、 addpage-确定按键打开sql界面
void Widget::on_okbtn_released()
{
    this->hide();
    sqldialog.show();
}

//2、删除学生成绩
void Widget::on_delbtn_released()
{
   this->hide();//关闭主页面打开子页面
   del.show();
}



//3、修改学生成绩
void Widget::on_modifybtn_released()
{
        this->hide();//关闭主页面打开子页面
        modify.show();
}

//4、查看学生成绩
void Widget::on_searchbtn_released()
{
    this->hide();//关闭主页面打开子页面
    search.show();
}

//5、显示排名
void Widget::on_sortbtn_released()
{
    this->hide();//关闭主页面打开子页面
    sort.show();
}

