/********************************************************************************
** Form generated from reading UI file 'searchpage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHPAGE_H
#define UI_SEARCHPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SearchPage
{
public:
    QFrame *frame;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *backbtn;
    QLabel *label;
    QLabel *label_3;

    void setupUi(QWidget *SearchPage)
    {
        if (SearchPage->objectName().isEmpty())
            SearchPage->setObjectName(QString::fromUtf8("SearchPage"));
        SearchPage->resize(800, 700);
        SearchPage->setMinimumSize(QSize(500, 400));
        SearchPage->setSizeIncrement(QSize(500, 400));
        SearchPage->setStyleSheet(QString::fromUtf8(""));
        frame = new QFrame(SearchPage);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 800, 700));
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
        horizontalLayoutWidget = new QWidget(frame);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(130, 480, 561, 131));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(horizontalLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        backbtn = new QPushButton(horizontalLayoutWidget);
        backbtn->setObjectName(QString::fromUtf8("backbtn"));

        horizontalLayout->addWidget(backbtn);

        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(150, 30, 481, 59));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 330, 760, 70));
        label_3->setLayoutDirection(Qt::LeftToRight);
        label_3->setAlignment(Qt::AlignCenter);

        retranslateUi(SearchPage);

        QMetaObject::connectSlotsByName(SearchPage);
    } // setupUi

    void retranslateUi(QWidget *SearchPage)
    {
        SearchPage->setWindowTitle(QCoreApplication::translate("SearchPage", "Form", nullptr));
        pushButton_2->setText(QCoreApplication::translate("SearchPage", "\347\241\256\345\256\232\346\237\245\346\211\276", nullptr));
        backbtn->setText(QCoreApplication::translate("SearchPage", "\345\217\226\346\266\210", nullptr));
        label->setText(QCoreApplication::translate("SearchPage", "\346\254\242\350\277\216\346\235\245\345\210\260\345\255\246\347\224\237\346\210\220\347\273\251\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        label_3->setText(QCoreApplication::translate("SearchPage", "\350\277\231\351\207\214\345\217\257\344\273\245\346\240\271\346\215\256\345\255\246\347\224\237\347\232\204\345\255\246\345\217\267\350\277\233\350\241\214\347\233\270\345\205\263\344\277\241\346\201\257\347\232\204\346\237\245\346\211\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SearchPage: public Ui_SearchPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHPAGE_H
