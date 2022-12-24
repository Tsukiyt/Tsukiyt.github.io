#ifndef DELETEPAGE_H
#define DELETEPAGE_H
#include <QDialog>
#include "stusqldialog.h"

namespace Ui {
class DeletePage;
}

class DeletePage : public QDialog
{
    Q_OBJECT

public:
    explicit DeletePage(QWidget *parent = nullptr);
    ~DeletePage();

private slots:
    void on_pushButton_released();
    void on_pushButton_2_released();//打开子界面函数sql
    void dealslot1();//子界面信号处理函数sql
private:
    Ui::DeletePage *ui;

    stuSqlDialog sqldialog;
signals:
    void ChangeUiSlot();//delete:打开lookpage界面信号

};
#endif // DELETEPAGE_H
