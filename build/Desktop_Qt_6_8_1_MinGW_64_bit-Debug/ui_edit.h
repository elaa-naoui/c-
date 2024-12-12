/********************************************************************************
** Form generated from reading UI file 'edit.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDIT_H
#define UI_EDIT_H

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

class Ui_edit
{
public:
    QWidget *widget;
    QLineEdit *id_edit;
    QLineEdit *lineEdit_10;
    QLineEdit *lineEdit_14;
    QLineEdit *lineEdit_25;
    QLineEdit *lineEdit_28;
    QComboBox *type_edit;
    QDateEdit *dateEdit;
    QPushButton *edit_cancel;
    QPushButton *confirm_edit;
    QComboBox *etat_edit;
    QPushButton *confirm_2;
    QLabel *label_30;
    QLabel *label_29;

    void setupUi(QDialog *edit)
    {
        if (edit->objectName().isEmpty())
            edit->setObjectName("edit");
        edit->resize(1120, 708);
        widget = new QWidget(edit);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(100, 50, 881, 591));
        widget->setStyleSheet(QString::fromUtf8("border:2px solid green;\n"
"border-radius: 20px;\n"
""));
        id_edit = new QLineEdit(widget);
        id_edit->setObjectName("id_edit");
        id_edit->setGeometry(QRect(470, 110, 241, 61));
        id_edit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
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
        type_edit = new QComboBox(widget);
        type_edit->addItem(QString());
        type_edit->addItem(QString());
        type_edit->addItem(QString());
        type_edit->addItem(QString());
        type_edit->addItem(QString());
        type_edit->addItem(QString());
        type_edit->addItem(QString());
        type_edit->addItem(QString());
        type_edit->addItem(QString());
        type_edit->setObjectName("type_edit");
        type_edit->setGeometry(QRect(470, 190, 241, 61));
        type_edit->setStyleSheet(QString::fromUtf8("QComboBox {\n"
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
        edit_cancel = new QPushButton(widget);
        edit_cancel->setObjectName("edit_cancel");
        edit_cancel->setGeometry(QRect(420, 450, 131, 71));
        edit_cancel->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"color: rgb(255, 255, 255);\n"
"font: 10pt ;\n"
"background-color: rgb(171, 168, 111);\n"
"background-color: rgb(97, 0, 0);\n"
"border-radius:30px;\n"
""));
        edit_cancel->setIconSize(QSize(36, 36));
        confirm_edit = new QPushButton(widget);
        confirm_edit->setObjectName("confirm_edit");
        confirm_edit->setGeometry(QRect(260, 450, 131, 71));
        confirm_edit->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"color: rgb(255, 255, 255);\n"
"font: 10pt ;\n"
"background-color: rgb(171, 168, 111);\n"
"background-color: rgb(70, 148, 119);\n"
"border-radius:30px;\n"
""));
        confirm_edit->setIconSize(QSize(36, 36));
        etat_edit = new QComboBox(widget);
        etat_edit->addItem(QString());
        etat_edit->addItem(QString());
        etat_edit->addItem(QString());
        etat_edit->addItem(QString());
        etat_edit->setObjectName("etat_edit");
        etat_edit->setGeometry(QRect(470, 350, 241, 61));
        etat_edit->setStyleSheet(QString::fromUtf8("QComboBox {\n"
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
        confirm_edit->raise();
        edit_cancel->raise();
        id_edit->raise();
        lineEdit_10->raise();
        lineEdit_14->raise();
        lineEdit_25->raise();
        lineEdit_28->raise();
        type_edit->raise();
        dateEdit->raise();
        etat_edit->raise();
        confirm_2->raise();
        label_30->raise();
        label_29->raise();

        retranslateUi(edit);

        QMetaObject::connectSlotsByName(edit);
    } // setupUi

    void retranslateUi(QDialog *edit)
    {
        edit->setWindowTitle(QCoreApplication::translate("edit", "Dialog", nullptr));
        lineEdit_10->setText(QCoreApplication::translate("edit", "      Equipment id", nullptr));
        lineEdit_14->setText(QCoreApplication::translate("edit", " Suppervision date", nullptr));
        lineEdit_25->setText(QCoreApplication::translate("edit", "     Type", nullptr));
        lineEdit_28->setText(QCoreApplication::translate("edit", "         Statement", nullptr));
        type_edit->setItemText(0, QCoreApplication::translate("edit", "pc", nullptr));
        type_edit->setItemText(1, QCoreApplication::translate("edit", "machine", nullptr));
        type_edit->setItemText(2, QCoreApplication::translate("edit", "cann", nullptr));
        type_edit->setItemText(3, QCoreApplication::translate("edit", "printer", nullptr));
        type_edit->setItemText(4, QCoreApplication::translate("edit", "mouse", nullptr));
        type_edit->setItemText(5, QCoreApplication::translate("edit", "screen", nullptr));
        type_edit->setItemText(6, QCoreApplication::translate("edit", "keyboard", nullptr));
        type_edit->setItemText(7, QCoreApplication::translate("edit", "swicher", nullptr));
        type_edit->setItemText(8, QCoreApplication::translate("edit", "router", nullptr));

        edit_cancel->setText(QCoreApplication::translate("edit", "Exit", nullptr));
        confirm_edit->setText(QCoreApplication::translate("edit", "Confirm", nullptr));
        etat_edit->setItemText(0, QCoreApplication::translate("edit", "fonctional", nullptr));
        etat_edit->setItemText(1, QCoreApplication::translate("edit", "broken", nullptr));
        etat_edit->setItemText(2, QCoreApplication::translate("edit", "available", nullptr));
        etat_edit->setItemText(3, QCoreApplication::translate("edit", "out of stock", nullptr));

        confirm_2->setText(QCoreApplication::translate("edit", "Edit  Equipment", nullptr));
        label_30->setText(QString());
        label_29->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class edit: public Ui_edit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDIT_H
