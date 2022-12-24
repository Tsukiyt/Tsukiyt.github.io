/********************************************************************************
** Form generated from reading UI file 'stusqldialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUSQLDIALOG_H
#define UI_STUSQLDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_stuSqlDialog
{
public:
    QTableView *tableView;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label_7;
    QLabel *label_3;
    QLabel *label_8;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *BackBtn;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *numberLE;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *nameLE;
    QLineEdit *suanfaLE;
    QLineEdit *czxtLE;
    QLineEdit *englishLE;
    QLineEdit *mathLE;
    QLineEdit *mingcile;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *UpSortBtn;
    QPushButton *DownSortBtn;
    QPushButton *AddBtn;
    QPushButton *SearchBtn;
    QPushButton *DelBtn;
    QLabel *label;

    void setupUi(QDialog *stuSqlDialog)
    {
        if (stuSqlDialog->objectName().isEmpty())
            stuSqlDialog->setObjectName(QString::fromUtf8("stuSqlDialog"));
        stuSqlDialog->resize(700, 700);
        stuSqlDialog->setMaximumSize(QSize(700, 700));
        stuSqlDialog->setStyleSheet(QString::fromUtf8("QDialog#stuSqlDialog{\n"
"background-image: url(:/image/2.jpg);}\n"
"\n"
"QDialog#stuSqlDialog QPushButton{\n"
"  border:none;\n"
"  border-radius:10px;\n"
"  background-color: rgb(255, 255, 255);\n"
"  color: rgb(0, 0, 0);\n"
"  font: 8pt \"Microsoft YaHei UI\";   \n"
"\n"
"}\n"
" QDialog#stuSqlDialog  QPushButton:hover{\n"
"  \n"
"	background-color: rgb(177, 255, 255);\n"
"}\n"
" QDialog#stuSqlDialog QLabel{\n"
"	color: rgb(0, 0, 0);\n"
"	font: 8pt \"Microsoft YaHei UI\";\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"QDialog#stuSqlDialog QLineEdit{\n"
"	color: rgb(0, 0, 0);\n"
"	font: 10pt \"Microsoft YaHei UI\";\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
""));
        tableView = new QTableView(stuSqlDialog);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 140, 681, 301));
        verticalLayoutWidget = new QWidget(stuSqlDialog);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(120, 450, 181, 241));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(verticalLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout->addWidget(label_6);

        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout->addWidget(label_5);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        label_7 = new QLabel(verticalLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout->addWidget(label_7);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        label_8 = new QLabel(verticalLayoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout->addWidget(label_8);

        horizontalLayoutWidget = new QWidget(stuSqlDialog);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 10, 71, 111));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(4);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 9);
        BackBtn = new QPushButton(horizontalLayoutWidget);
        BackBtn->setObjectName(QString::fromUtf8("BackBtn"));

        horizontalLayout->addWidget(BackBtn);

        horizontalLayoutWidget_2 = new QWidget(stuSqlDialog);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(340, 40, 231, 41));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        numberLE = new QLineEdit(horizontalLayoutWidget_2);
        numberLE->setObjectName(QString::fromUtf8("numberLE"));

        horizontalLayout_2->addWidget(numberLE);

        verticalLayoutWidget_2 = new QWidget(stuSqlDialog);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(370, 450, 231, 241));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        nameLE = new QLineEdit(verticalLayoutWidget_2);
        nameLE->setObjectName(QString::fromUtf8("nameLE"));

        verticalLayout_2->addWidget(nameLE);

        suanfaLE = new QLineEdit(verticalLayoutWidget_2);
        suanfaLE->setObjectName(QString::fromUtf8("suanfaLE"));

        verticalLayout_2->addWidget(suanfaLE);

        czxtLE = new QLineEdit(verticalLayoutWidget_2);
        czxtLE->setObjectName(QString::fromUtf8("czxtLE"));

        verticalLayout_2->addWidget(czxtLE);

        englishLE = new QLineEdit(verticalLayoutWidget_2);
        englishLE->setObjectName(QString::fromUtf8("englishLE"));

        verticalLayout_2->addWidget(englishLE);

        mathLE = new QLineEdit(verticalLayoutWidget_2);
        mathLE->setObjectName(QString::fromUtf8("mathLE"));

        verticalLayout_2->addWidget(mathLE);

        mingcile = new QLineEdit(verticalLayoutWidget_2);
        mingcile->setObjectName(QString::fromUtf8("mingcile"));

        verticalLayout_2->addWidget(mingcile);

        horizontalLayoutWidget_3 = new QWidget(stuSqlDialog);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(20, 80, 651, 81));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        UpSortBtn = new QPushButton(horizontalLayoutWidget_3);
        UpSortBtn->setObjectName(QString::fromUtf8("UpSortBtn"));

        horizontalLayout_3->addWidget(UpSortBtn);

        DownSortBtn = new QPushButton(horizontalLayoutWidget_3);
        DownSortBtn->setObjectName(QString::fromUtf8("DownSortBtn"));

        horizontalLayout_3->addWidget(DownSortBtn);

        AddBtn = new QPushButton(horizontalLayoutWidget_3);
        AddBtn->setObjectName(QString::fromUtf8("AddBtn"));

        horizontalLayout_3->addWidget(AddBtn);

        SearchBtn = new QPushButton(horizontalLayoutWidget_3);
        SearchBtn->setObjectName(QString::fromUtf8("SearchBtn"));

        horizontalLayout_3->addWidget(SearchBtn);

        DelBtn = new QPushButton(horizontalLayoutWidget_3);
        DelBtn->setObjectName(QString::fromUtf8("DelBtn"));

        horizontalLayout_3->addWidget(DelBtn);

        label = new QLabel(stuSqlDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(170, 40, 91, 39));
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(stuSqlDialog);

        QMetaObject::connectSlotsByName(stuSqlDialog);
    } // setupUi

    void retranslateUi(QDialog *stuSqlDialog)
    {
        stuSqlDialog->setWindowTitle(QCoreApplication::translate("stuSqlDialog", "Dialog", nullptr));
        label_6->setText(QCoreApplication::translate("stuSqlDialog", "\345\247\223\345\220\215", nullptr));
        label_5->setText(QCoreApplication::translate("stuSqlDialog", "\347\256\227\346\263\225\350\256\276\350\256\241\344\270\216\345\210\206\346\236\220", nullptr));
        label_4->setText(QCoreApplication::translate("stuSqlDialog", "\346\223\215\344\275\234\347\263\273\347\273\237", nullptr));
        label_7->setText(QCoreApplication::translate("stuSqlDialog", "\345\244\247\345\255\246\350\213\261\350\257\255", nullptr));
        label_3->setText(QCoreApplication::translate("stuSqlDialog", "\351\253\230\347\255\211\346\225\260\345\255\246", nullptr));
        label_8->setText(QCoreApplication::translate("stuSqlDialog", "\345\220\215\346\254\241", nullptr));
        BackBtn->setText(QCoreApplication::translate("stuSqlDialog", "\350\277\224\345\233\236", nullptr));
        UpSortBtn->setText(QCoreApplication::translate("stuSqlDialog", "\345\215\207\345\272\217", nullptr));
        DownSortBtn->setText(QCoreApplication::translate("stuSqlDialog", "\351\231\215\345\272\217", nullptr));
        AddBtn->setText(QCoreApplication::translate("stuSqlDialog", "\346\267\273\345\212\240", nullptr));
        SearchBtn->setText(QCoreApplication::translate("stuSqlDialog", "\346\237\245\350\257\242", nullptr));
        DelBtn->setText(QCoreApplication::translate("stuSqlDialog", "\345\210\240\351\231\244", nullptr));
        label->setText(QCoreApplication::translate("stuSqlDialog", "\345\255\246\345\217\267", nullptr));
    } // retranslateUi

};

namespace Ui {
    class stuSqlDialog: public Ui_stuSqlDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUSQLDIALOG_H
