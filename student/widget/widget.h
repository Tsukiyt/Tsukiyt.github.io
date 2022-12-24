#ifndef WIDGET_H
#define WIDGET_H
#include <QWidget>
//子界面相关头文件
#include "deletepage.h"
#include "widget.h"
#include "modifypage.h"
#include "searchpage.h"
#include "sort_averagepage.h"
#include "stusqldialog.h"
//数据库相关头文件
#include <QStackedLayout>
#include <QStackedWidget>

#include "stusqldialog.h"
#include"ui_stusqldialog.h"
QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_pushButton_2_released();//打开子界面函数sql

    void dealslot1();//子界面信号处理函数sql

    void on_backbtn_clicked();

    void on_backbtn_2_clicked();

    void on_backbtn_3_clicked();

    void on_lookbtn_released();//打开lookpage界面函数

    void on_addbtn_released();//添加学生成绩按键->打开addpage

    void on_backbtn_2_released();

    void on_backbtn_3_released();

    void on_okbtn_released();

    void on_delbtn_released();//删除学生成绩按键-》打开deletepage

    void on_modifybtn_released();

    void on_searchbtn_released();

    void on_sortbtn_released();

    void dealslot();//子界面信号处理函数

private:
    Ui::Widget *ui;
    //子界面变量
    stuSqlDialog sqldialog;
    DeletePage del;
    ModifyPage modify;
    SearchPage search;
    sort_averagePage sort;
   // stuSqlDialog sqldialog;


};
#endif // WIDGET_H
