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

><img src = "https://github.com/Tsukiyt/blog/blob/master/%E4%BF%AE%E6%94%B9.png"/>

menupage

> <img src = "https://github.com/Tsukiyt/blog/blob/master/%E7%95%8C%E9%9D%A22.png"/>

addpage

> <img src = "https://github.com/Tsukiyt/blog/blob/master/%E7%95%8C%E9%9D%A23%E6%B7%BB%E5%8A%A0.png"/>

deletepage

> <img src = "https://github.com/Tsukiyt/blog/blob/master/%E5%88%A0%E9%99%A4.png"/>

modifypage

><img src = "https://github.com/Tsukiyt/blog/blob/master/%E4%BF%AE%E6%94%B9.png"/>

searchpage\

查询界面我们没有再设置一个新的界面进行显示，而是直接在数据表中就可以查看所有数据

<img src = "https://github.com/Tsukiyt/blog/blob/master/%E6%9F%A5%E8%AF%A2.png"/>

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
> 1、设置背景图片\
QStackedWidget#stackedWidget{\
	background-image: url(:/image/2.jpg);\
}\
> 2、设置控件（按钮）大小、风格模式、字体\
QStackedWidget#stackedWidget QPushButton{\
  border:none;\
  border-radius:10px;\
  background-color: rgb(255, 255, 255);\
  color: rgb(0, 0, 0);\
  font: 14pt "Microsoft YaHei UI";   
}\
QPushButton{\
font: 14pt "Microsoft YaHei UI";   \
}\
QStackedWidget#stackedWidget QPushButton:hover{ \
	background-color: rgb(177, 255, 255);\
}\
3、设置控件（label）大小、字体\
QStackedWidget#stackedWidget QLabel{\
	color: rgb(0, 0, 0);\
	font: 14pt "Microsoft YaHei UI";\
	background-color: rgb(255, 255, 255);\
}\
4、设置控件（lineEdit）大小、风格\
QStackedWidget#stackedWidget QLineEdit{\
  border:none;\
  border-radius:10px;\
  background-color: rgb(255, 255, 255);\
  color: rgb(0, 0, 0);\
  font: 14pt "Microsoft YaHei UI"; 
  color: rgb(0, 0, 0);  
}

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
数据库显示的界面我们使用了“QDialog”，其中最重要的就是和数据可之间的连接，我采用的是“SQLITE”数据库，具体内容后面会有相关讲解

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
![image](https://user-images.githubusercontent.com/102013791/211129160-3e4312c6-8e07-41cb-a327-fc32b9d40c2b.png)

5、在子界面.cpp中写相关的函数和信号
>
> //取消\
> void stuSqlDialog::on_BackBtn_released()\
> {\
>   this->ChangeUiSlot1();//返回界面，关闭子界面，显示父界面deletepage\
>    this->close();//直接关闭\
> }\
> //删除\
> void stuSqlDialog::on_DelBtn_released()\
> {\
> //删除操作代码
> }



