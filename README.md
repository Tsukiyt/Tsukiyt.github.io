#   Title
基于QT和SQLITE的"学生成绩管理系统"


## 一、具体要求

###  实验平台

> QT5.15.2 + VS2019 + MYSQL

### 功能介绍

> 利用数据库实现了学生信息的增删改查，排序操作

## 二、系统界面设计

### 1、系统界面介绍

>包括”菜单窗口、查询信息窗口、增删改查排序窗口、数据库界面信息显示窗口“

### 2、相关代码介绍

(1)GUI界面设计

lookpage

<img src = "https://github.com/Tsukiyt/blog/blob/master/%E4%BF%AE%E6%94%B9.png"/>

menupage

<img src = "https://github.com/Tsukiyt/blog/blob/master/%E7%95%8C%E9%9D%A22.png"/>

addpage

<img src = "https://github.com/Tsukiyt/blog/blob/master/%E7%95%8C%E9%9D%A23%E6%B7%BB%E5%8A%A0.png"/>

deletepage

<img src = "https://github.com/Tsukiyt/blog/blob/master/%E5%88%A0%E9%99%A4.png"/>

modifypage


searchpage

> 界面我们没有再设置一个新的界面进行显示，而是直接在数据表中就可以查看所有数据

![修改2](https://github.com/Tsukiyt/blog/blob/master/%E6%9F%A5%E8%AF%A2.png)
![Uploading 修改2.png…](https://github.com/Tsukiyt/blog/blob/master/%E6%9F%A5%E8%AF%A2.png)

sortpage

<img src = "https://github.com/Tsukiyt/blog/blob/master/%E6%8E%92%E5%90%8D.png"/>

stuSqlDialog

<img src = "https://github.com/Tsukiyt/blog/blob/master/sql.png"/>

---

（2）样式表\
如下图所示，我们点击布局**widget，在里面可以添加相关代码，实现关于字体颜色、大小、风格、背景图片等相关内容的设计
![image](https://user-images.githubusercontent.com/102013791/211126700-d30b4b78-463d-4d1f-a995-179239ff9d4d.png)

![image](https://user-images.githubusercontent.com/102013791/211126603-4fbd1210-48ea-4c60-8d5e-f0b1616aa540.png)

相关代码如下：
> 1、设置背景图片
```
QStackedWidget#stackedWidget{
	background-image: url(:/image/2.jpg);
}
```

> 2、设置控件（按钮）大小、风格模式、字体
```
QStackedWidget#stackedWidget QPushButton{
  border:none;
  border-radius:10px;
  background-color: rgb(255, 255, 255);
  color: rgb(0, 0, 0);
  font: 14pt "Microsoft YaHei UI";   
}
QPushButton{
font: 14pt "Microsoft YaHei UI";   
}
QStackedWidget#stackedWidget QPushButton:hover{ 
	background-color: rgb(177, 255, 255);
}
```

> 3、设置控件（label）大小、字体
```
QStackedWidget#stackedWidget QLabel{
	color: rgb(0, 0, 0);
	font: 14pt "Microsoft YaHei UI";
	background-color: rgb(255, 255, 255);
}
```
> 4、设置控件（lineEdit）大小、风格
```
QStackedWidget#stackedWidget QLineEdit{
  border:none;
  border-radius:10px;
  background-color: rgb(255, 255, 255);
  color: rgb(0, 0, 0);
  font: 14pt "Microsoft YaHei UI"; 
  color: rgb(0, 0, 0);  
}
```

其余页面中也需要如此设置他的样式表，方法同上
 
---

（3）窗口代码块

 1、lookpage、menupage、addpage

> 这三个界面使用了一个布局模式，即包含在了用一个容器"QStackedWidget"中，这个容器可以提供给我们多页切换的布局，且一次只可以看到一个界面。在第一个界面里我们配置了相关的控件制作了lookpage界面；在第二个界面中我们设置了相关的menu菜单控件；在第三个界面里我们添加了addpage界面相关控件（其实本来是想将addpag单独放到一个文件里的，但是由于修改代码太麻烦就一起设置在此容器中了，想要单独设置的可以根据删除deletepage，修改modifypage等界面的相关代码进行修改）
![image](https://user-images.githubusercontent.com/102013791/211127100-40955cd7-c063-4780-98be-6d1cf14e080e.png)



 2、deletepage 使用了“QDialog”类 
 
> Qt中使用QDialog来实现对话框，QDialog继承自QWidget，对话框分为两种，一种是模态对话框、 另一种是非模态对话框。即阻塞和非阻塞对话框\
 而模态对话框又有两种：应用程序级别的和窗口级别的，分别指完成对话框之前阻塞整个应用和阻塞关联窗口。exec（） 和  open（） 分别为应用程序级别和窗口级别的模态对话框，show（）则为非模态对话框。
> - 模态对话框，就是会阻塞同一应用程序中其它窗口的输入,模态对话框很常见，比如“打开文件”功能。你可以尝试一下记事本的打开文件，当打开文件对话框出现时，我们是不能对除此对话框之外的窗口部分进行操作的
> - 非模态对话框，与此相反的是非模态对话框，例如查找对话框，我们可以在显示着查找对话框的同时，继续对记事本的内容进行编辑


![image](https://user-images.githubusercontent.com/102013791/211127224-8056ebd3-e346-478d-bd5c-f0baad489eec.png)

 3、modifypage 、sortpage 和 searchpage
 
>这三个界面全部使用了“QWidget”类，布局模式则是选择了“QFrame”
 QWidget 类代表一般的窗口，其他窗口类都是从 QWidget 类继承出来的。而 QWidget 类则同时继承了 QObject 类 和 QPaintDevice 类，也就是说，窗口类都是 Qt 对象类。这里的 QPaintDevice 类则是所有可绘制的对象的基类。
>![image](https://user-images.githubusercontent.com/102013791/211127875-dc3978b7-c847-456c-ad95-96ee705d447a.png)

>![image](https://user-images.githubusercontent.com/102013791/211128020-8624d2ce-8a8f-4260-8949-b15a78644623.png)

>![image](https://user-images.githubusercontent.com/102013791/211127952-4657eaae-a101-4fec-bd66-99ab09580029.png)

（其实这些页面可以全部采用一个容器和布局模式，但是这里我为了可以尝试多种容器和布局模式，每个页面就采取了不一样的容器和布局模式，大家可以根据自己的想法选择）

 4、sql 采用了“QDialog”类
 
> 数据库显示的界面我们使用了“QDialog”，其中最重要的就是和数据可之间的连接，我采用的是“SQLITE”数据库，具体内容后面会有相关讲解

---



（4）界面之间的切换\
（这里只举一个例子说明--------deletepage和sqlpage界面之间的切换，其他界面间切换原理一致）

1、首先我们需要将子界面.h文件添加到主界面的.h中

2、在主界面的.h中，添加子界面的变量以及打开子界面和处理子界面信号的函数（在主ui中创建按钮）
>![image](https://user-images.githubusercontent.com/102013791/211128709-db3df307-4a15-4ee1-87d7-4fdca27b04c5.png)
>![image](https://user-images.githubusercontent.com/102013791/211128838-dc2fe600-c5f0-475d-b865-6ffd9eb4bbe6.png)

3、在子界面.h中添加打开主界面函数和信号（在子ui中创建按钮）
>![image](https://user-images.githubusercontent.com/102013791/211128883-59634da2-b0d4-49b8-96b1-a1918326c5d7.png)
>![image](https://user-images.githubusercontent.com/102013791/211128926-b283d4b2-e0f0-4e6c-b9e7-048ecb7df8fc.png)

4、在主界面.cpp中连接信号和槽，以及其对应的函数

```
#include "deletepage.h"
#include "ui_deletepage.h"
DeletePage::DeletePage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DeletePage)
{
    ui->setupUi(this);
     setWindowTitle("删除学生成绩");
    setFixedSize(800,700);
     connect(&sqldialog,&stuSqlDialog::ChangeUiSlot1,this,&DeletePage::dealslot1);
}
DeletePage::~DeletePage()
{
    delete ui;
}
//关闭子界面sqldia和打开主界面deletepage
void DeletePage::dealslot1()
{
    this->show();
    sqldialog.hide();
}
//进行删除：打开子界面sqldialog和关闭主界面ddeletapage
void DeletePage::on_pushButton_2_released()
{
    this->close();
    sqldialog.show();

}
```

5、在子界面.cpp中写相关的函数和信号

```
 void stuSqlDialog::on_BackBtn_released()
 {
   this->ChangeUiSlot1();//返回界面，关闭子界面，显示父界面deletepage
    this->close();//直接关闭
 }
 //删除
 void stuSqlDialog::on_DelBtn_released()
 {
 //删除操作代码
 }
```

## 三、SQLite连接QT

### 1、数据库SQLite简介
>SQ Lite 是一种无需服务器、无需进行任何配置的数据库，所有的数据表、索引等数据库元素\
全都存储在文件里，在应用程序里使用 SQLite 数据库就完全可以当作文件来使用。SQLite可以\
跨平台使用的数据库，在不同平台之间可以随意复制数据库\
SQLite 是开源免费使用的数据库，可以从其官网下载最新版本的数据库驱动安装文件\
SQLite Expert 是他的数据库可视化管理工具

### 2、SQLite与QT之间的连接
以下过程实现需要下载好SQLite和QT \
QT中提供给类我们一些类
![image](https://user-images.githubusercontent.com/102013791/211130069-34e97694-5cf3-46b3-8425-d75923cc904a.png)

(1)在.pro文件中添加以下代码
```
QT += sql
```

(2)查看当前qt支持的数据库驱动
```
qDebug()<<QSqlDatabase::drivers();
```
这里需要添加相关的头文件* #include <QDebug> 和 #include <QSqlDatabase>//打开链接数据库 *

(3)连接和打开数据库

```
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
    void on_DelBtn_released();//删除成绩
    void on_BackBtn_released();//返回
signals:
    void ChangeUiSlot1();//打开主界面信号
private:
    Ui::stuSqlDialog *ui;
    QSqlTableModel *model;//保存结果集
    QSqlDatabase db;//建立QT和数据库链接

};

#endif // STUSQLDIALOG_H
```
---
```
//设置数据库名字（文件名）
   QString file = "student.db";
   if(file.isEmpty())
   {
       qDebug()<<" fail to load database " ;
       return ;
   }
   db = QSqlDatabase::addDatabase("QSQLITE");//创建QSQLITE数据库连接 //数据库名字 
   db = QSqlDatabase::addDatabase("QSQLITE");//创建QSQLITE数据库连接 
   db.setDatabaseName(file);
  //打开数据库
   if(!db.open()){
       //没有数据库文件则创建文件
      qDebug()<<"failed to open database file"<<db.lastError().text();//输出错误信息
       }
   else
   qDebug()<< " successed to open database file " ;
   ```
    
(4) 显示数据库创建的表格内容
```
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
 ```
 
对应的内容如下图所示:
![屏幕截图 2023-01-07 122428](https://user-images.githubusercontent.com/102013791/211130868-39bfe0ab-86c2-4c9c-8ec0-97f85b163969.png)

(5)连接数据库实现相关数据的插入,删除,排序(升序,降序),修改,查询操作
- 插入 add
```
void stuSqlDialog::on_AddBtn_released()
 {
        QSqlQuery query;
      //获得QLineEdit中输入字符串的int型
   //从控件中获得信息
        int number = ui->numberLE->text().toInt();
	//如果输入的学号为0,则弹出消息对话框进行提示"学号输入错误"
        if(number == 0){
             QMessageBox::critical(this,"ERROR","学号输入错误");
             return; 
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
       * QString str1 = QString("insert into student('学号','姓名','操作系统','算法设计与分析','大学英语','高等数学','平均分','名次')values('%1','%2','%3','%4','%5','%6','%7','%8')") 
                .arg(number)
                .arg(name)
                .arg(czxt)
                .arg(suanfa)
                .arg(math)
                .arg(english)
                .arg(average)
                .arg(mingci);*
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
```


- 删除 delete
```
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
```

- 修改  modify
修改是直接设置在"在表格当中进行数据的修改"\
```
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
```


- 查询  search
```
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
  ```

- 排序
降序排序
```
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
```
升序排序和降序排序相似,在此不作详细说明

