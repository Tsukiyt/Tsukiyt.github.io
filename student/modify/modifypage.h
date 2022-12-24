#ifndef MODIFYPAGE_H
#define MODIFYPAGE_H

#include <QWidget>
#include "stusqldialog.h"

namespace Ui {
class ModifyPage;
}

class ModifyPage : public QWidget
{
    Q_OBJECT

public:
    explicit ModifyPage(QWidget *parent = nullptr);
    ~ModifyPage();

private slots:
    void on_backbtn_released();
    void on_okbtn_released();

    void dealslot2();//子界面信号处理函数sql

signals:
   void ChangeUiSlot();//delete:打开lookpage界面信号

private:
    Ui::ModifyPage *ui;
    stuSqlDialog sqldialog;

};

#endif // MODIFYPAGE_H
