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

><img src = "C:\Users\华为\Pictures\1.png"/>

menupage

> <img src = "C:\Users\华为\Pictures\2.png"/>

addpage

> <img src = "C:\Users\华为\Pictures\3.png"/>

deletepage

> <img src = "C:\Users\华为\Pictures\4.png"/>

modifypage

 <img src = "C:\Users\华为\Pictures\5.png"/>

searchpage

<img src = "C:\Users\华为\Pictures\6.png"/>

sortpage

 <img src = "C:\Users\华为\Pictures\8.png"/>

stuSqlDialog

<img src = "C:\Users\华为\Pictures\sql.png"/>



（2）窗口代码块

lookpage、menupage、addpage，这三个界面使用了一个布局模式，即包含在了用一个容器"QStackedWidget"中，这个容器可以提供给我们多页切换的布局，且一次只可以看到一个界面。在第一个界面里我们配置了相关的控件制作了lookpage界面；在第二个界面中我们设置了相关的menu菜单控件；在第三个界面里我们添加了addpage界面相关控件（其实本来是想将addpag单独放到一个文件里的，但是由于修改代码太麻烦就一起设置在此容器中了，想要单独设置的可以根据删除deletepage，修改modifypage等界面的相关代码进行修改）



（3）界面之间的切换

（这里只举一个例子说明，其他截面间切换原理一致）

（4）样式表



