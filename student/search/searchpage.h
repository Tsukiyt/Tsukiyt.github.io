#ifndef SEARCHPAGE_H
#define SEARCHPAGE_H

#include <QWidget>
#include "stusqldialog.h"

namespace Ui {
class SearchPage;
}

class SearchPage : public QWidget
{
    Q_OBJECT

public:
    explicit SearchPage(QWidget *parent = nullptr);
    ~SearchPage();

private slots:
    void on_backbtn_released();
     void dealslot3();//子界面信号处理函数sql

     void on_pushButton_2_released();

private:
    Ui::SearchPage *ui;
    stuSqlDialog sqldialog;//子界面变量
signals:
    void ChangeUiSlot();//delete:打开lookpage界面信号

};

#endif // SEARCHPAGE_H
