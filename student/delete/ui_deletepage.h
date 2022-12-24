/********************************************************************************
** Form generated from reading UI file 'deletepage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEPAGE_H
#define UI_DELETEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DeletePage
{
public:
    QLabel *label_2;
    QLabel *label;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QDialog *DeletePage)
    {
        if (DeletePage->objectName().isEmpty())
            DeletePage->setObjectName(QString::fromUtf8("DeletePage"));
        DeletePage->resize(800, 700);
        DeletePage->setMinimumSize(QSize(0, 0));
        DeletePage->setMaximumSize(QSize(800, 700));
        DeletePage->setSizeIncrement(QSize(800, 700));
        QFont font;
        font.setPointSize(9);
        DeletePage->setFont(font);
        DeletePage->setLayoutDirection(Qt::LeftToRight);
        DeletePage->setStyleSheet(QString::fromUtf8("QDialog#DeletePage  QPushButton{\n"
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
"QDialog#DeletePage  QLabel{\n"
"	color: rgb(0, 0, 0);\n"
"	 font: 14pt \"Microsoft YaHei UI\";   \n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"QDialog#DeletePage QLineEdit{\n"
"	color: rgb(0, 0, 0);\n"
" font: 14pt \"Microsoft YaHei UI\";   \n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QDialog{\n"
"	background-image: url(:/image/2.jpg);\n"
"}\n"
""));
        label_2 = new QLabel(DeletePage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 330, 760, 70));
        label_2->setLayoutDirection(Qt::LeftToRight);
        label_2->setAlignment(Qt::AlignCenter);
        label = new QLabel(DeletePage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(150, 130, 481, 59));
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAlignment(Qt::AlignCenter);
        pushButton_2 = new QPushButton(DeletePage);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(150, 510, 170, 50));
        pushButton = new QPushButton(DeletePage);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(460, 510, 170, 50));

        retranslateUi(DeletePage);

        QMetaObject::connectSlotsByName(DeletePage);
    } // setupUi

    void retranslateUi(QDialog *DeletePage)
    {
        DeletePage->setWindowTitle(QCoreApplication::translate("DeletePage", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("DeletePage", "\350\277\231\351\207\214\345\217\257\344\273\245\346\240\271\346\215\256\345\255\246\347\224\237\347\232\204\345\255\246\345\217\267\350\277\233\350\241\214\347\233\270\345\205\263\344\277\241\346\201\257\347\232\204\345\210\240\351\231\244", nullptr));
        label->setText(QCoreApplication::translate("DeletePage", "\346\254\242\350\277\216\346\235\245\345\210\260\342\200\234\345\255\246\347\224\237\346\210\220\347\273\251\347\256\241\347\220\206\347\263\273\347\273\237\342\200\235", nullptr));
        pushButton_2->setText(QCoreApplication::translate("DeletePage", "\350\277\233\350\241\214\345\210\240\351\231\244", nullptr));
        pushButton->setText(QCoreApplication::translate("DeletePage", "\345\217\226\346\266\210\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DeletePage: public Ui_DeletePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEPAGE_H
