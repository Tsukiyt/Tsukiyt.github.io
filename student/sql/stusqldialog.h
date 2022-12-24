#ifndef STUSQLDIALOG_H
#define STUSQLDIALOG_H

#include <QDialog>
#include <QSqlDatabase>//打开链接数据库
#include <QSqlQuery>//真正操纵数据库的类
#include <QSqlQueryModel>
#include <QSqlError>
#include <QDebug>
#include <QMessageBox>
#include <QTableView>
#include <QSqlTableModel>
#include <QInputDialog>

namespace Ui {
class stuSqlDialog;
}

class stuSqlDialog : public QDialog
{
    Q_OBJECT
private:
    void initDB();//初始化数据库
    void queryTable();//修改（直接在表格中修改

public:
    explicit stuSqlDialog(QWidget *parent = nullptr);
    ~stuSqlDialog();

private slots:

    void on_UpSortBtn_released();//升序排序按键
    void on_DownSortBtn_released();//降序排序按键
    void on_AddBtn_released();//添加成绩
    void on_DelBtn_released();//删除成绩
    void on_BackBtn_released();//返回
    void on_tableView_doubleClicked(const QModelIndex &index);//修改成绩
    void on_SearchBtn_released();//查询学生信息按键

signals:
    void ChangeUiSlot1();//打开主界面deletepage信号
private:
    Ui::stuSqlDialog *ui;
    QSqlTableModel *model;//保存结果集
    QSqlDatabase db;//建立QT和数据库链接

};

#endif // STUSQLDIALOG_H
