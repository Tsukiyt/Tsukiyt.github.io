#   Title
基于QT和SQLITE的"学生成绩管理系统"---


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

searchpage
查询界面我们没有再设置一个新的界面进行显示，而是直接在数据表中就可以查看所有数据

<img src = "https://github.com/Tsukiyt/blog/blob/master/%E6%9F%A5%E8%AF%A2.png"/>

sortpage

 <img src = "https://github.com/Tsukiyt/blog/blob/master/%E6%8E%92%E5%90%8D.png"/>

stuSqlDialog

<img src = "https://github.com/Tsukiyt/blog/blob/master/sql.png"/>



（2）样式表
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

（3）窗口代码块

> 1、lookpage、menupage、addpage，这三个界面使用了一个布局模式，即包含在了用一个容器"QStackedWidget"中，这个容器可以提供给我们多页切换的布局，且一次只可以看到一个界面。在第一个界面里我们配置了相关的控件制作了lookpage界面；在第二个界面中我们设置了相关的menu菜单控件；在第三个界面里我们添加了addpage界面相关控件（其实本来是想将addpag单独放到一个文件里的，但是由于修改代码太麻烦就一起设置在此容器中了，想要单独设置的可以根据删除deletepage，修改modifypage等界面的相关代码进行修改）
![image](https://user-images.githubusercontent.com/102013791/211127100-40955cd7-c063-4780-98be-6d1cf14e080e.png)



> 2、deletepage 采用了“QDialog” 模式

![image](https://user-images.githubusercontent.com/102013791/211127224-8056ebd3-e346-478d-bd5c-f0baad489eec.png)

（4）界面之间的切换

（这里只举一个例子说明，其他截面间切换原理一致）


