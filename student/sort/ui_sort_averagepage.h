/********************************************************************************
** Form generated from reading UI file 'sort_averagepage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SORT_AVERAGEPAGE_H
#define UI_SORT_AVERAGEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sort_averagePage
{
public:
    QFrame *frame;
    QWidget *horizontalWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *okbtn;
    QSpacerItem *horizontalSpacer;
    QPushButton *backbtn;
    QLabel *label;
    QLabel *label_3;

    void setupUi(QWidget *sort_averagePage)
    {
        if (sort_averagePage->objectName().isEmpty())
            sort_averagePage->setObjectName(QString::fromUtf8("sort_averagePage"));
        sort_averagePage->resize(788, 700);
        sort_averagePage->setMaximumSize(QSize(788, 16777215));
        sort_averagePage->setSizeIncrement(QSize(493, 400));
        sort_averagePage->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QWidget#sort_averagePage QPushButton{\n"
"  border:none;\n"
"  border-radius:10px;\n"
"  background-color: rgb(255, 255, 255);\n"
" \n"
"	color: rgb(0, 0, 0);\n"
"  font: 10pt \"Microsoft YaHei UI\";   \n"
"\n"
"}\n"
"QWidget#sort_averagePageQPushButton:hover{\n"
"  \n"
"	background-color: rgb(177, 255, 255);\n"
"}\n"
"QWidget#sort_averagePage QLabel{\n"
"	color: rgb(0, 0, 0);\n"
"	font: 10pt \"Microsoft YaHei UI\";\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
""));
        frame = new QFrame(sort_averagePage);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 811, 700));
        frame->setSizeIncrement(QSize(500, 400));
        frame->setStyleSheet(QString::fromUtf8("QFrame#frame{\n"
"	background-image: url(:/image/2.jpg);\n"
"}\n"
"QPushButton{\n"
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
" QLabel{\n"
"	color: rgb(0, 0, 0);\n"
"	font: 14pt \"Microsoft YaHei UI\";\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"QWidget#SearchPage QLineEdit{\n"
"	color: rgb(0, 0, 0);\n"
"	font: 14pt \"Microsoft YaHei UI\";\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalWidget = new QWidget(frame);
        horizontalWidget->setObjectName(QString::fromUtf8("horizontalWidget"));
        horizontalWidget->setGeometry(QRect(100, 500, 611, 171));
        horizontalWidget->setLayoutDirection(Qt::LeftToRight);
        horizontalLayout = new QHBoxLayout(horizontalWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        okbtn = new QPushButton(horizontalWidget);
        okbtn->setObjectName(QString::fromUtf8("okbtn"));

        horizontalLayout->addWidget(okbtn);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        backbtn = new QPushButton(horizontalWidget);
        backbtn->setObjectName(QString::fromUtf8("backbtn"));

        horizontalLayout->addWidget(backbtn);

        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(150, 130, 481, 59));
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 330, 760, 70));
        label_3->setLayoutDirection(Qt::LeftToRight);
        label_3->setAlignment(Qt::AlignCenter);

        retranslateUi(sort_averagePage);

        QMetaObject::connectSlotsByName(sort_averagePage);
    } // setupUi

    void retranslateUi(QWidget *sort_averagePage)
    {
        sort_averagePage->setWindowTitle(QCoreApplication::translate("sort_averagePage", "Form", nullptr));
        okbtn->setText(QCoreApplication::translate("sort_averagePage", "\347\241\256\345\256\232\346\230\276\347\244\272\346\216\222\345\220\215", nullptr));
        backbtn->setText(QCoreApplication::translate("sort_averagePage", "\345\217\226\346\266\210", nullptr));
        label->setText(QCoreApplication::translate("sort_averagePage", "\346\254\242\350\277\216\346\235\245\345\210\260\345\255\246\347\224\237\346\210\220\347\273\251\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        label_3->setText(QCoreApplication::translate("sort_averagePage", "\350\277\231\351\207\214\345\217\257\344\273\245\346\240\271\346\215\256\345\255\246\347\224\237\347\232\204\345\271\263\345\235\207\345\210\206\346\230\276\347\244\272\345\255\246\347\224\237\347\232\204\346\216\222\345\220\215", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sort_averagePage: public Ui_sort_averagePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SORT_AVERAGEPAGE_H
