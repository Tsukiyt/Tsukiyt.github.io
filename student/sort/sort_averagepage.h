#ifndef SORT_AVERAGEPAGE_H
#define SORT_AVERAGEPAGE_H

#include <QWidget>
#include "stusqldialog.h"
namespace Ui {
class sort_averagePage;
}

class sort_averagePage : public QWidget
{
    Q_OBJECT

public:
    explicit sort_averagePage(QWidget *parent = nullptr);
    ~sort_averagePage();

private slots:
    void dealslot4();//子界面信号处理函数sql
    void on_backbtn_released();
    void on_okbtn_released();

signals:
    void ChangeUiSlot();//delete:打开lookpage界面信号
private:
    Ui::sort_averagePage *ui;
    stuSqlDialog sqldialog;//子界面变量
};

#endif // SORT_AVERAGEPAGE_H
