#include "stusqldialog.h"
#include "ui_stusqldialog.h"
#include "qinputdialog.h"     //QInputDialog用于接收用户的输入
stuSqlDialog::stuSqlDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::stuSqlDialog)
{
    ui->setupUi(this);
    setWindowTitle("数据库管理");
    setFixedSize(700,700);

    initDB();//初始化数据库
    queryTable();//修改（直接从控件中修改）

}

stuSqlDialog::~stuSqlDialog()
{
    delete ui;
}

//初始化数据库---------赵越彤
void stuSqlDialog::initDB()
{
    qDebug()<<QSqlDatabase::drivers();//显示驱动类型
   //设置数据库名字（文件名）
   QString file = "student.db";
   if(file.isEmpty())
   {
       qDebug()<<" fail to load database " ;
       return ;
   }
   db = QSqlDatabase::addDatabase("QSQLITE");//创建QSQLITE数据库连接
   //数据库名字
   db.setDatabaseName(file);
  //打开数据库
   if(!db.open()){
       //没有数据库文件则创建文件
      qDebug()<<"failed to open database file"<<db.lastError().text();//输出错误信息
       }
   else
   qDebug()<< " successed to open database file " ;

}

//显示--------温博燃
void stuSqlDialog::queryTable()
{
        model = new QSqlTableModel(this);
        model->setTable("student");
        model->setEditStrategy(QSqlTableModel::OnManualSubmit);
        model->select();
        QStringList tables;
        tables<< "学号" << "姓名" << "操作系统"<<"算法"<<"综合英语"<<"高等数学"<<"平均分"<<"名次";
        ui->tableView->setModel(model);
        for(int i = 0 ; i < tables.count(); i++)
        model->setHeaderData(i,Qt::Horizontal,tables[i]);//设置显示框
        ui->tableView->horizontalHeader()->setStretchLastSection(true);//设置最后一列
        ui->tableView->setColumnWidth(1,80);//设置列宽
        ui->tableView->setColumnWidth(2,100);//设置列宽
        for(int i = 3 ; i < tables.count(); i++)
        {
            ui->tableView->setColumnWidth(i,70);//设置列宽
        }
        ui->tableView->setModel(model);
        ui->tableView->sortByColumn(8,Qt::DescendingOrder);
    }

//修改----温博燃(直接在tableview控件中修改）
void stuSqlDialog::on_tableView_doubleClicked(const QModelIndex &index)
{
    QSqlTableModel * model = new QSqlTableModel(this,db);//新建model
    model->setTable("student");//设置表
    bool isOK;//定义bool类型
    QString text = QInputDialog::getText(this,"Update","修改当前内容",QLineEdit::Normal,index.data().toString(),&isOK);//弹出修改框，默认显示当前内容，修改后点击按钮，是则isOK为true，否则isOK为false
    if(!isOK)//判断isOKbool类型
        return ;
    if(model->select())//判断是否空表
        model->setData(model->index(index.row(),index.column()),text);//重新设置当前单元格内容
    model->submitAll();//提交修改
    QMessageBox::information(this,"successed","成功修改信息");
    ui->tableView->setModel(model);
    model->select();//显示修改后的数据
    queryTable();
}

//升序排序---------温博燃
void stuSqlDialog::on_UpSortBtn_released()
{
    //按照平均分升序排列
       model = new QSqlTableModel(this);
       model->setTable("student");
       model->setEditStrategy(QSqlTableModel::OnManualSubmit);
       model->select();
       QStringList tables;
       tables << "学号" << "姓名" << "操作系统"<<"算法"<<"综合英语"<<"高等数学"<<"平均分"<<"名次";
      ui->tableView->setModel(model);
       for(int i = 0 ; i < tables.count(); i++)
           model->setHeaderData(i,Qt::Horizontal,tables[i]);//设置显示框
       //    model->setSort(8,Qt::DescendingOrder);//设置按照第0列升序排序，DescendingOrder降序AscendingOrder
      ui->tableView->horizontalHeader()->setStretchLastSection(true);//设置最后一列
      ui->tableView->setColumnWidth(1,80);//设置列宽
       ui->tableView->setColumnWidth(2,100);//设置列宽
      for(int i = 3 ; i < tables.count(); i++)
       {
           ui->tableView->setColumnWidth(i,70);//设置列宽
       }
       ui->tableView->setModel(model);
       ui->tableView->sortByColumn(7,Qt::AscendingOrder);
}

//降序排序-------温博燃
void stuSqlDialog::on_DownSortBtn_released()
{
    model = new QSqlTableModel(this);
      model->setTable("student");
      model->setEditStrategy(QSqlTableModel::OnManualSubmit);
      model->select();
      QStringList tables;
      model = new QSqlTableModel(this);
      tables << "学号" << "姓名" << "操作系统"<<"算法"<<"综合英语"<<"高等数学"<<"平均分"<<"名次";

      for(int i = 0 ; i < tables.count(); i++)
      model->setHeaderData(i,Qt::Horizontal,tables[i]);//设置显示框

      ui->tableView->horizontalHeader()->setStretchLastSection(true);//设置最后一列
      ui->tableView->setColumnWidth(1,80);//设置列宽
      ui->tableView->setColumnWidth(2,100);//设置列宽
        for(int i = 3 ; i < tables.count(); i++)
        {
            ui->tableView->setColumnWidth(i,70);//设置列宽
        }

        ui->tableView->sortByColumn(7,Qt::DescendingOrder);

}
//查询---温博燃
void stuSqlDialog::on_SearchBtn_released()
{
    model = new QSqlTableModel(this);
    model->setTable("student");
    //把表的内容加入到model
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->select();
    QStringList tables;
    tables  << "学号" << "姓名" << "操作系统"<<"算法"<<"综合英语"<<"高等数学"<<"平均分"<<"名次";
     ui->tableView->setModel(model);
    for(int i = 0 ; i < tables.count(); i++)
    model->setHeaderData(i,Qt::Horizontal,tables[i]);//设置显示框
   ui->tableView->horizontalHeader()->setStretchLastSection(true);//设置最后一列
   ui->tableView->setColumnWidth(1,80);//设置列宽
   ui->tableView->setColumnWidth(2,100);//设置列宽
   for(int i = 3 ; i < tables.count(); i++)
   {
        ui->tableView->setColumnWidth(i,70);//设置列宽
   }
   QSqlQuery query;
   int Seacrch =ui->numberLE->text().toInt();
   //查询语句
   QString str = QObject::tr("学号 like '%1%'").arg(Seacrch);
   model->setFilter(str);//model过滤表中符合的数据
   model->select();//显示修改后的数据
   ui->tableView->setModel(model);
  }

//添加------赵越彤
void stuSqlDialog::on_AddBtn_released()
{
        QSqlQuery query;
       //获得QLineEdit中输入字符串的int型
        int number = ui->numberLE->text().toInt();
        if(number == 0){
             QMessageBox::critical(this,"ERROR","学号输入错误");
             return; }

        QString name = ui->nameLE->text();
        if(name == ""){
            QMessageBox::critical(this,"ERROR","姓名输入错误");
            return; }

        int  czxt = ui->czxtLE->text().toInt();
        if(czxt < 0 || czxt > 100){
            QMessageBox::critical(this,"ERROR","操作系统成绩输入错误");
            return; }
        int  suanfa = ui->suanfaLE->text().toInt();
        if(suanfa< 0 || suanfa > 100){
            QMessageBox::critical(this,"ERROR","算法设计与分析成绩输入错误");
            return;   }
        int math = ui->mathLE->text().toInt();
        if(math< 0 || math > 100){
            QMessageBox::critical(this,"ERROR","高等数学成绩输入错误");
            return;   }

        int  english = ui->englishLE->text().toInt();
        if(english < 0 || english > 100){
            QMessageBox::critical(this,"ERROR","大学英语成绩输入错误");
            return; }
        int average = (suanfa+czxt+english+math)/4;
        if(average< 0 || average > 100){
            QMessageBox::critical(this,"ERROR","平均分计算错误");
          return;   }

        int mingci = ui->mingcile->text().toInt();
       //将数据插入到数据库创建的表格里
        QString str1 = QString("insert into student('学号','姓名','操作系统','算法设计与分析','大学英语','高等数学','平均分','名次')values('%1','%2','%3','%4','%5','%6','%7','%8')")
                .arg(number)
                .arg(name)
                .arg(czxt)
                .arg(suanfa)
                .arg(math)
                .arg(english)
                .arg(average)
                .arg(mingci);
        //弹出对话框
        if(QMessageBox::question(this,"添加","确定要添加吗",QMessageBox::Yes|QMessageBox::No) == QMessageBox::No){
            return;
        }


        if(query.exec(str1) ){//弹出对话框
            QMessageBox::information(this,"successed","成功添加信息");
            queryTable();   }


        else{
            QMessageBox::critical(this,"ERROR","添加信息失败");
            queryTable();
       }
}


//删除------------赵越彤
void stuSqlDialog::on_DelBtn_released()
{
    //通过学号删除相关信息
    QSqlQuery query;
        int number = ui->numberLE->text().toInt();
        QString str = QString("DELETE FROM student WHERE 学号 ='%1' ").arg(number);
        if(QMessageBox::question(this,"删除","确定要删除吗",QMessageBox::Yes|QMessageBox::No) == QMessageBox::No){
            return;
        }
        if(query.exec(str) == false){
            QMessageBox::critical(this,"error","删除学生信息失败");
        }
        else{
            QMessageBox::information(this,"successed","成功删除学生信息");
         queryTable();
        }

}


//取消--------赵越彤
void stuSqlDialog::on_BackBtn_released()
{
    this->ChangeUiSlot1();//返回界面，关闭子界面，显示父界面deletepage
     //this->close();//直接关闭
}


