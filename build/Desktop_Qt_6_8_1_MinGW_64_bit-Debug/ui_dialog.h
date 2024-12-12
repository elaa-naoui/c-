/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QWidget *widget;
    QLineEdit *id;
    QLineEdit *lineEdit_10;
    QLineEdit *lineEdit_14;
    QLineEdit *lineEdit_25;
    QLineEdit *lineEdit_28;
    QComboBox *type;
    QDateEdit *dateEdit;
    QPushButton *cancel;
    QPushButton *confirm;
    QComboBox *etat;
    QPushButton *confirm_2;
    QLabel *label_30;
    QLabel *label_29;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(950, 738);
        widget = new QWidget(Dialog);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(20, 30, 881, 591));
        widget->setStyleSheet(QString::fromUtf8("border:2px solid green;\n"
"border-radius: 20px;\n"
""));
        id = new QLineEdit(widget);
        id->setObjectName("id");
        id->setGeometry(QRect(470, 110, 241, 61));
        id->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border_radius:15px;"));
        lineEdit_10 = new QLineEdit(widget);
        lineEdit_10->setObjectName("lineEdit_10");
        lineEdit_10->setGeometry(QRect(170, 120, 191, 51));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        lineEdit_10->setFont(font);
        lineEdit_10->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border-color: rgb(255, 255, 255);"));
        lineEdit_14 = new QLineEdit(widget);
        lineEdit_14->setObjectName("lineEdit_14");
        lineEdit_14->setGeometry(QRect(170, 280, 191, 51));
        lineEdit_14->setFont(font);
        lineEdit_14->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"\n"
"border-color: rgb(255, 255, 255);"));
        lineEdit_25 = new QLineEdit(widget);
        lineEdit_25->setObjectName("lineEdit_25");
        lineEdit_25->setGeometry(QRect(170, 200, 191, 51));
        lineEdit_25->setFont(font);
        lineEdit_25->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"\n"
"border-color: rgb(255, 255, 255);"));
        lineEdit_28 = new QLineEdit(widget);
        lineEdit_28->setObjectName("lineEdit_28");
        lineEdit_28->setGeometry(QRect(170, 360, 191, 51));
        lineEdit_28->setFont(font);
        lineEdit_28->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border-color: rgb(255, 255, 255);"));
        type = new QComboBox(widget);
        type->addItem(QString());
        type->addItem(QString());
        type->addItem(QString());
        type->addItem(QString());
        type->addItem(QString());
        type->addItem(QString());
        type->addItem(QString());
        type->addItem(QString());
        type->addItem(QString());
        type->setObjectName("type");
        type->setGeometry(QRect(470, 190, 241, 61));
        type->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"	color: rgb(0, 0, 0);\n"
"	background-color: rgb(255, 255, 255);\n"
"    border: 3px solid green;   /* Bordure verte de 3px */\n"
"    border-radius: 20px;       /* Coins arrondis */\n"
"    background-color: white;   /* Fond blanc */\n"
"    padding: 10px 20px;        /* Ajout d'espace int\303\251rieur pour le texte */\n"
"}\n"
"\n"
""));
        dateEdit = new QDateEdit(widget);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setGeometry(QRect(470, 270, 241, 61));
        dateEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border_radius:10px;"));
        cancel = new QPushButton(widget);
        cancel->setObjectName("cancel");
        cancel->setGeometry(QRect(420, 450, 131, 71));
        cancel->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"color: rgb(255, 255, 255);\n"
"font: 10pt ;\n"
"background-color: rgb(171, 168, 111);\n"
"background-color: rgb(97, 0, 0);\n"
"border-radius:30px;\n"
""));
        cancel->setIconSize(QSize(36, 36));
        confirm = new QPushButton(widget);
        confirm->setObjectName("confirm");
        confirm->setGeometry(QRect(260, 450, 131, 71));
        confirm->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"color: rgb(255, 255, 255);\n"
"font: 10pt ;\n"
"background-color: rgb(171, 168, 111);\n"
"background-color: rgb(70, 148, 119);\n"
"border-radius:30px;\n"
""));
        confirm->setIconSize(QSize(36, 36));
        etat = new QComboBox(widget);
        etat->addItem(QString());
        etat->addItem(QString());
        etat->addItem(QString());
        etat->addItem(QString());
        etat->setObjectName("etat");
        etat->setGeometry(QRect(470, 350, 241, 61));
        etat->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"	color: rgb(0, 0, 0);\n"
"	background-color: rgb(255, 255, 255);\n"
"    border: 3px solid green;   /* Bordure verte de 3px */\n"
"    border-radius: 20px;       /* Coins arrondis */\n"
"    background-color: white;   /* Fond blanc */\n"
"    padding: 10px 20px;        /* Ajout d'espace int\303\251rieur pour le texte */\n"
"}\n"
"\n"
""));
        confirm_2 = new QPushButton(widget);
        confirm_2->setObjectName("confirm_2");
        confirm_2->setGeometry(QRect(130, 20, 601, 61));
        confirm_2->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"color: rgb(255, 255, 255);\n"
"font: 10pt ;\n"
"background-color: rgb(171, 168, 111);\n"
"background-color: rgb(70, 148, 119);\n"
"border-radius:30px;\n"
""));
        confirm_2->setIconSize(QSize(36, 36));
        label_30 = new QLabel(widget);
        label_30->setObjectName("label_30");
        label_30->setGeometry(QRect(530, 470, 41, 41));
        label_30->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);\n"
"background-color: rgb(0, 0, 0);"));
        label_30->setPixmap(QPixmap(QString::fromUtf8(":/home page/391247.png")));
        label_30->setScaledContents(true);
        label_29 = new QLabel(widget);
        label_29->setObjectName("label_29");
        label_29->setGeometry(QRect(240, 470, 41, 41));
        label_29->setPixmap(QPixmap(QString::fromUtf8(":/home page/4682662.png")));
        label_29->setScaledContents(true);
        confirm->raise();
        cancel->raise();
        id->raise();
        lineEdit_10->raise();
        lineEdit_14->raise();
        lineEdit_25->raise();
        lineEdit_28->raise();
        type->raise();
        dateEdit->raise();
        etat->raise();
        confirm_2->raise();
        label_30->raise();
        label_29->raise();

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        lineEdit_10->setText(QCoreApplication::translate("Dialog", "      Equipment id", nullptr));
        lineEdit_14->setText(QCoreApplication::translate("Dialog", " Suppervision date", nullptr));
        lineEdit_25->setText(QCoreApplication::translate("Dialog", "     Type", nullptr));
        lineEdit_28->setText(QCoreApplication::translate("Dialog", "         Statement", nullptr));
        type->setItemText(0, QCoreApplication::translate("Dialog", "pc", nullptr));
        type->setItemText(1, QCoreApplication::translate("Dialog", "machine", nullptr));
        type->setItemText(2, QCoreApplication::translate("Dialog", "cann", nullptr));
        type->setItemText(3, QCoreApplication::translate("Dialog", "printer", nullptr));
        type->setItemText(4, QCoreApplication::translate("Dialog", "mouse", nullptr));
        type->setItemText(5, QCoreApplication::translate("Dialog", "screen", nullptr));
        type->setItemText(6, QCoreApplication::translate("Dialog", "keyboard", nullptr));
        type->setItemText(7, QCoreApplication::translate("Dialog", "swicher", nullptr));
        type->setItemText(8, QCoreApplication::translate("Dialog", "router", nullptr));

        cancel->setText(QCoreApplication::translate("Dialog", " Cancel", nullptr));
        confirm->setText(QCoreApplication::translate("Dialog", "Confirm", nullptr));
        etat->setItemText(0, QCoreApplication::translate("Dialog", "fonctional", nullptr));
        etat->setItemText(1, QCoreApplication::translate("Dialog", "broken", nullptr));
        etat->setItemText(2, QCoreApplication::translate("Dialog", "available", nullptr));
        etat->setItemText(3, QCoreApplication::translate("Dialog", "out of stock", nullptr));

        confirm_2->setText(QCoreApplication::translate("Dialog", "Add New Equipment", nullptr));
        label_30->setText(QString());
        label_29->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
