/********************************************************************************
** Form generated from reading UI file 'delate.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELATE_H
#define UI_DELATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_delate
{
public:
    QWidget *widget;
    QPushButton *del;
    QLineEdit *id;
    QLabel *label_20;
    QLineEdit *lineEdit_10;
    QPushButton *pushButton;

    void setupUi(QDialog *delate)
    {
        if (delate->objectName().isEmpty())
            delate->setObjectName("delate");
        delate->resize(513, 406);
        delate->setStyleSheet(QString::fromUtf8(""));
        widget = new QWidget(delate);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(20, 20, 471, 361));
        widget->setStyleSheet(QString::fromUtf8("border:2px solid green;\n"
"border-radius: 20px;\n"
""));
        del = new QPushButton(widget);
        del->setObjectName("del");
        del->setGeometry(QRect(60, 200, 141, 61));
        del->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"color: rgb(255, 255, 255);\n"
"font: 10pt ;\n"
"background-color: rgb(171, 168, 111);\n"
"background-color: rgb(126, 61, 64);\n"
"background-color: rgb(230, 57, 70);\n"
"border-radius:30px;\n"
""));
        id = new QLineEdit(widget);
        id->setObjectName("id");
        id->setGeometry(QRect(240, 100, 191, 61));
        id->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border_radius:15px;"));
        label_20 = new QLabel(widget);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(50, 200, 51, 51));
        label_20->setStyleSheet(QString::fromUtf8("border-color: none;"));
        label_20->setPixmap(QPixmap(QString::fromUtf8("../home page/bin.png")));
        label_20->setScaledContents(true);
        lineEdit_10 = new QLineEdit(widget);
        lineEdit_10->setObjectName("lineEdit_10");
        lineEdit_10->setGeometry(QRect(30, 100, 171, 61));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        lineEdit_10->setFont(font);
        lineEdit_10->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border-color: rgb(255, 255, 255);"));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(260, 200, 151, 71));
        pushButton->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"color: rgb(255, 255, 255);\n"
"font: 10pt ;\n"
"background-color: rgb(171, 168, 111);\n"
"background-color: rgb(97, 0, 0);\n"
"border-radius:30px;\n"
""));
        del->raise();
        id->raise();
        lineEdit_10->raise();
        pushButton->raise();
        label_20->raise();

        retranslateUi(delate);

        QMetaObject::connectSlotsByName(delate);
    } // setupUi

    void retranslateUi(QDialog *delate)
    {
        delate->setWindowTitle(QCoreApplication::translate("delate", "Dialog", nullptr));
        del->setText(QCoreApplication::translate("delate", "Delete", nullptr));
        label_20->setText(QString());
        lineEdit_10->setText(QCoreApplication::translate("delate", "      Equipment id", nullptr));
        pushButton->setText(QCoreApplication::translate("delate", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class delate: public Ui_delate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELATE_H
