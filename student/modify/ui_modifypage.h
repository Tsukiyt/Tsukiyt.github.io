/********************************************************************************
** Form generated from reading UI file 'modifypage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYPAGE_H
#define UI_MODIFYPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ModifyPage
{
public:
    QFrame *frame;
    QLabel *label_2;
    QPushButton *okbtn;
    QPushButton *backbtn;
    QLabel *label_3;

    void setupUi(QWidget *ModifyPage)
    {
        if (ModifyPage->objectName().isEmpty())
            ModifyPage->setObjectName(QString::fromUtf8("ModifyPage"));
        ModifyPage->resize(800, 700);
        ModifyPage->setMaximumSize(QSize(800, 700));
        ModifyPage->setSizeIncrement(QSize(800, 700));
        ModifyPage->setStyleSheet(QString::fromUtf8("QWidget#ModifyPage QPushButton{\n"
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
"QWidget#ModifyPage QLabel{\n"
"	color: rgb(0, 0, 0);\n"
"	font: 14pt \"Microsoft YaHei UI\";\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"QWidget#ModifyPage QLineEdit{\n"
"	color: rgb(0, 0, 0);\n"
"	font: 14pt \"Microsoft YaHei UI\";\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"\n"
""));
        frame = new QFrame(ModifyPage);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 800, 700));
        frame->setSizeIncrement(QSize(800, 700));
        frame->setStyleSheet(QString::fromUtf8("QFrame#frame{\n"
"	background-image: url(:/image/2.jpg);\n"
"\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 330, 760, 70));
        label_2->setAlignment(Qt::AlignCenter);
        okbtn = new QPushButton(frame);
        okbtn->setObjectName(QString::fromUtf8("okbtn"));
        okbtn->setGeometry(QRect(150, 510, 170, 50));
        backbtn = new QPushButton(frame);
        backbtn->setObjectName(QString::fromUtf8("backbtn"));
        backbtn->setGeometry(QRect(460, 510, 170, 50));
        backbtn->setSizeIncrement(QSize(500, 400));
        backbtn->setLayoutDirection(Qt::LeftToRight);
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(150, 130, 481, 59));
        label_3->setLayoutDirection(Qt::LeftToRight);
        label_3->setAlignment(Qt::AlignCenter);

        retranslateUi(ModifyPage);

        QMetaObject::connectSlotsByName(ModifyPage);
    } // setupUi

    void retranslateUi(QWidget *ModifyPage)
    {
        ModifyPage->setWindowTitle(QCoreApplication::translate("ModifyPage", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("ModifyPage", "\350\277\231\351\207\214\345\217\257\344\273\245\346\240\271\346\215\256\345\255\246\347\224\237\347\232\204\345\255\246\345\217\267\350\277\233\350\241\214\347\233\270\345\205\263\344\277\241\346\201\257\347\232\204\344\277\256\346\224\271", nullptr));
        okbtn->setText(QCoreApplication::translate("ModifyPage", "\350\277\233\350\241\214\344\277\256\346\224\271", nullptr));
        backbtn->setText(QCoreApplication::translate("ModifyPage", "\345\217\226\346\266\210\350\277\224\345\233\236", nullptr));
        label_3->setText(QCoreApplication::translate("ModifyPage", "\346\254\242\350\277\216\346\235\245\345\210\260\342\200\234\345\255\246\347\224\237\346\210\220\347\273\251\347\256\241\347\220\206\347\263\273\347\273\237\342\200\235", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ModifyPage: public Ui_ModifyPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYPAGE_H
