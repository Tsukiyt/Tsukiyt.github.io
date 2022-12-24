/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *menupage;
    QLabel *label;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *backbtn;
    QPushButton *lookbtn;
    QWidget *lookpage;
    QPushButton *backbtn_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *addbtn;
    QPushButton *delbtn;
    QPushButton *modifybtn;
    QPushButton *searchbtn;
    QPushButton *sortbtn;
    QWidget *addpage;
    QStackedWidget *stackedWidget_2;
    QWidget *addpage1;
    QPushButton *okbtn;
    QPushButton *backbtn_3;
    QLabel *label_3;
    QLabel *label_2;
    QWidget *page_3;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);
        Widget->setLayoutDirection(Qt::LeftToRight);
        gridLayout = new QGridLayout(Widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        stackedWidget = new QStackedWidget(Widget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setStyleSheet(QString::fromUtf8("QStackedWidget#stackedWidget{\n"
"	background-image: url(:/image/2.jpg);\n"
"\n"
"}\n"
"\n"
"QStackedWidget#stackedWidget QPushButton{\n"
"  border:none;\n"
"  border-radius:10px;\n"
"  background-color: rgb(255, 255, 255);\n"
"  color: rgb(0, 0, 0);\n"
"  font: 14pt \"Microsoft YaHei UI\";   \n"
"\n"
"}\n"
"QPushButton{\n"
"font: 14pt \"Microsoft YaHei UI\";   \n"
"}\n"
"QStackedWidget#stackedWidget QPushButton:hover{\n"
"  \n"
"	background-color: rgb(177, 255, 255);\n"
"}\n"
"QStackedWidget#stackedWidget QLabel{\n"
"	color: rgb(0, 0, 0);\n"
"	font: 14pt \"Microsoft YaHei UI\";\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"QStackedWidget#stackedWidget QLineEdit{\n"
"  border:none;\n"
"  border-radius:10px;\n"
"  background-color: rgb(255, 255, 255);\n"
"  color: rgb(0, 0, 0);\n"
"  font: 14pt \"Microsoft YaHei UI\";   \n"
"  color: rgb(0, 0, 0);\n"
"  \n"
"}"));
        menupage = new QWidget();
        menupage->setObjectName(QString::fromUtf8("menupage"));
        label = new QLabel(menupage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 160, 501, 61));
        horizontalLayoutWidget = new QWidget(menupage);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(100, 330, 551, 151));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        backbtn = new QPushButton(horizontalLayoutWidget);
        backbtn->setObjectName(QString::fromUtf8("backbtn"));
        backbtn->setMinimumSize(QSize(180, 60));
        backbtn->setMaximumSize(QSize(180, 60));

        horizontalLayout->addWidget(backbtn);

        lookbtn = new QPushButton(horizontalLayoutWidget);
        lookbtn->setObjectName(QString::fromUtf8("lookbtn"));
        lookbtn->setMinimumSize(QSize(230, 60));
        lookbtn->setMaximumSize(QSize(250, 60));

        horizontalLayout->addWidget(lookbtn);

        stackedWidget->addWidget(menupage);
        lookpage = new QWidget();
        lookpage->setObjectName(QString::fromUtf8("lookpage"));
        backbtn_2 = new QPushButton(lookpage);
        backbtn_2->setObjectName(QString::fromUtf8("backbtn_2"));
        backbtn_2->setGeometry(QRect(30, 40, 101, 41));
        verticalLayoutWidget = new QWidget(lookpage);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(140, 60, 461, 481));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        addbtn = new QPushButton(verticalLayoutWidget);
        addbtn->setObjectName(QString::fromUtf8("addbtn"));

        verticalLayout->addWidget(addbtn);

        delbtn = new QPushButton(verticalLayoutWidget);
        delbtn->setObjectName(QString::fromUtf8("delbtn"));

        verticalLayout->addWidget(delbtn);

        modifybtn = new QPushButton(verticalLayoutWidget);
        modifybtn->setObjectName(QString::fromUtf8("modifybtn"));

        verticalLayout->addWidget(modifybtn);

        searchbtn = new QPushButton(verticalLayoutWidget);
        searchbtn->setObjectName(QString::fromUtf8("searchbtn"));

        verticalLayout->addWidget(searchbtn);

        sortbtn = new QPushButton(verticalLayoutWidget);
        sortbtn->setObjectName(QString::fromUtf8("sortbtn"));

        verticalLayout->addWidget(sortbtn);

        stackedWidget->addWidget(lookpage);
        addpage = new QWidget();
        addpage->setObjectName(QString::fromUtf8("addpage"));
        addpage->setSizeIncrement(QSize(800, 700));
        addpage->setStyleSheet(QString::fromUtf8("QWidget#addpage  QPushButton{\n"
"  border:none;\n"
"  border-radius:10px;\n"
"  background-color: rgb(255, 255, 255);\n"
"  color: rgb(0, 0, 0);\n"
"  font: 14pt \"Microsoft YaHei UI\";   \n"
"\n"
"}\n"
" QPushButton:hover{\n"
"  \n"
"	background-color: rgb(177, 255, 255);\n"
"}\n"
"QWidget#addpage e  QLabel{\n"
"	color: rgb(0, 0, 0);\n"
"	font: 14pt \"Microsoft YaHei UI\";\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"QWidget#addpage  QLineEdit{\n"
"	color: rgb(0, 0, 0);\n"
"	font: 14pt \"Microsoft YaHei UI\";\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QWidget#addpage {\n"
"	background-image: url(:/image/2.jpg);\n"
"}\n"
""));
        stackedWidget_2 = new QStackedWidget(addpage);
        stackedWidget_2->setObjectName(QString::fromUtf8("stackedWidget_2"));
        stackedWidget_2->setGeometry(QRect(50, 20, 691, 541));
        stackedWidget_2->setStyleSheet(QString::fromUtf8("QStackedWidget#stackedWidget{\n"
"	background-image: url(:/image/2.jpg);\n"
"}\n"
"\n"
"QStackedWidget#stackedWidget QPushButton{\n"
"  border:none;\n"
"  border-radius:10px;\n"
"	background-color: rgb(255, 255, 255);\n"
"  color: rgb(0, 0, 0);\n"
"  font: 14pt \"Microsoft YaHei UI\";    \n"
"\n"
"}\n"
"QStackedWidget#stackedWidget QPushButton:hover{\n"
"	background-color: rgb(170, 255, 255);\n"
"}\n"
"QStackedWidget#stackedWidget QLabel{\n"
"	color: rgb(0, 0, 0);\n"
" font: 14pt \"Microsoft YaHei UI\";   \n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"\n"
""));
        addpage1 = new QWidget();
        addpage1->setObjectName(QString::fromUtf8("addpage1"));
        okbtn = new QPushButton(addpage1);
        okbtn->setObjectName(QString::fromUtf8("okbtn"));
        okbtn->setGeometry(QRect(120, 440, 171, 51));
        backbtn_3 = new QPushButton(addpage1);
        backbtn_3->setObjectName(QString::fromUtf8("backbtn_3"));
        backbtn_3->setGeometry(QRect(390, 440, 161, 51));
        backbtn_3->setAutoRepeatDelay(306);
        label_3 = new QLabel(addpage1);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 250, 651, 91));
        label_2 = new QLabel(addpage1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(120, 80, 451, 81));
        stackedWidget_2->addWidget(addpage1);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        stackedWidget_2->addWidget(page_3);
        stackedWidget->addWidget(addpage);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 1);


        retranslateUi(Widget);

        stackedWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\346\254\242\350\277\216\346\235\245\345\210\260\342\200\235\345\255\246\347\224\237\346\210\220\347\273\251\347\256\241\347\220\206\347\263\273\347\273\237\342\200\234", nullptr));
        backbtn->setText(QCoreApplication::translate("Widget", "\351\200\200\345\207\272\347\263\273\347\273\237", nullptr));
        lookbtn->setText(QCoreApplication::translate("Widget", "\346\237\245\350\257\242\345\255\246\347\224\237\344\277\241\346\201\257", nullptr));
        backbtn_2->setText(QCoreApplication::translate("Widget", "\350\277\224\345\233\236", nullptr));
        addbtn->setText(QCoreApplication::translate("Widget", "\346\267\273\345\212\240\345\255\246\347\224\237\346\210\220\347\273\251", nullptr));
        delbtn->setText(QCoreApplication::translate("Widget", "\345\210\240\351\231\244\345\255\246\347\224\237\346\210\220\347\273\251", nullptr));
        modifybtn->setText(QCoreApplication::translate("Widget", "\344\277\256\346\224\271\345\255\246\347\224\237\346\210\220\347\273\251", nullptr));
        searchbtn->setText(QCoreApplication::translate("Widget", "\346\237\245\347\234\213\345\255\246\347\224\237\346\210\220\347\273\251", nullptr));
        sortbtn->setText(QCoreApplication::translate("Widget", "\346\240\271\346\215\256\345\271\263\345\235\207\345\210\206\346\230\276\347\244\272\346\216\222\345\220\215", nullptr));
        okbtn->setText(QCoreApplication::translate("Widget", "\350\277\233\350\241\214\346\267\273\345\212\240", nullptr));
        backbtn_3->setText(QCoreApplication::translate("Widget", "\345\217\226\346\266\210\350\277\224\345\233\236", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "\350\277\231\351\207\214\345\217\257\344\273\245\346\240\271\346\215\256\345\255\246\345\217\267\350\277\233\350\241\214\345\255\246\347\224\237\344\277\241\346\201\257\347\232\204\346\267\273\345\212\240", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\346\254\242\350\277\216\346\235\245\345\210\260\345\255\246\347\224\237\346\210\220\347\273\251\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
