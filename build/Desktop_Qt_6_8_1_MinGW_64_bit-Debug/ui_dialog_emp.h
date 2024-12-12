/********************************************************************************
** Form generated from reading UI file 'dialog_emp.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_EMP_H
#define UI_DIALOG_EMP_H

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

class Ui_Dialog_emp
{
public:
    QWidget *widget_edit;
    QLineEdit *id_add;
    QLineEdit *lineEdit_59;
    QLineEdit *lineEdit_60;
    QLineEdit *lineEdit_61;
    QLineEdit *lineEdit_62;
    QLineEdit *lineEdit_63;
    QLineEdit *lineEdit_64;
    QLineEdit *lineEdit_65;
    QLineEdit *lineEdit_66;
    QLineEdit *lineEdit_67;
    QLineEdit *lineEdit_68;
    QLineEdit *nom_add;
    QLineEdit *prenom_add;
    QLineEdit *email_add;
    QLineEdit *poste_add;
    QLineEdit *mdp_add;
    QLineEdit *tel_add;
    QDateEdit *birthdate_add;
    QComboBox *gender_add;
    QPushButton *confirm_add;
    QLabel *label_29;
    QPushButton *cancel_add;
    QLabel *label_30;
    QLineEdit *adr_add;

    void setupUi(QDialog *Dialog_emp)
    {
        if (Dialog_emp->objectName().isEmpty())
            Dialog_emp->setObjectName("Dialog_emp");
        Dialog_emp->resize(1211, 911);
        widget_edit = new QWidget(Dialog_emp);
        widget_edit->setObjectName("widget_edit");
        widget_edit->setGeometry(QRect(200, 110, 811, 551));
        widget_edit->setStyleSheet(QString::fromUtf8("border:2px solid green;\n"
"border-radius: 20px;\n"
""));
        id_add = new QLineEdit(widget_edit);
        id_add->setObjectName("id_add");
        id_add->setGeometry(QRect(210, 70, 151, 51));
        id_add->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border_radius:10px;"));
        lineEdit_59 = new QLineEdit(widget_edit);
        lineEdit_59->setObjectName("lineEdit_59");
        lineEdit_59->setGeometry(QRect(70, 80, 121, 28));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        lineEdit_59->setFont(font);
        lineEdit_59->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"\n"
"border-color: rgb(255, 255, 255);"));
        lineEdit_60 = new QLineEdit(widget_edit);
        lineEdit_60->setObjectName("lineEdit_60");
        lineEdit_60->setGeometry(QRect(70, 290, 121, 28));
        lineEdit_60->setFont(font);
        lineEdit_60->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"\n"
"border-color: rgb(255, 255, 255);"));
        lineEdit_61 = new QLineEdit(widget_edit);
        lineEdit_61->setObjectName("lineEdit_61");
        lineEdit_61->setGeometry(QRect(70, 214, 121, 28));
        lineEdit_61->setFont(font);
        lineEdit_61->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"\n"
"border-color: rgb(255, 255, 255);"));
        lineEdit_62 = new QLineEdit(widget_edit);
        lineEdit_62->setObjectName("lineEdit_62");
        lineEdit_62->setGeometry(QRect(70, 360, 121, 28));
        lineEdit_62->setFont(font);
        lineEdit_62->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"\n"
"border-color: rgb(255, 255, 255);"));
        lineEdit_63 = new QLineEdit(widget_edit);
        lineEdit_63->setObjectName("lineEdit_63");
        lineEdit_63->setGeometry(QRect(70, 150, 121, 28));
        lineEdit_63->setFont(font);
        lineEdit_63->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"\n"
"border-color: rgb(255, 255, 255);"));
        lineEdit_64 = new QLineEdit(widget_edit);
        lineEdit_64->setObjectName("lineEdit_64");
        lineEdit_64->setGeometry(QRect(430, 80, 131, 28));
        lineEdit_64->setFont(font);
        lineEdit_64->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"\n"
"border-color: rgb(255, 255, 255);"));
        lineEdit_65 = new QLineEdit(widget_edit);
        lineEdit_65->setObjectName("lineEdit_65");
        lineEdit_65->setGeometry(QRect(430, 280, 141, 41));
        lineEdit_65->setFont(font);
        lineEdit_65->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"\n"
"border-color: rgb(255, 255, 255);"));
        lineEdit_66 = new QLineEdit(widget_edit);
        lineEdit_66->setObjectName("lineEdit_66");
        lineEdit_66->setGeometry(QRect(430, 220, 131, 28));
        lineEdit_66->setFont(font);
        lineEdit_66->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"\n"
"border-color: rgb(255, 255, 255);"));
        lineEdit_67 = new QLineEdit(widget_edit);
        lineEdit_67->setObjectName("lineEdit_67");
        lineEdit_67->setGeometry(QRect(430, 150, 131, 28));
        lineEdit_67->setFont(font);
        lineEdit_67->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"\n"
"border-color: rgb(255, 255, 255);"));
        lineEdit_68 = new QLineEdit(widget_edit);
        lineEdit_68->setObjectName("lineEdit_68");
        lineEdit_68->setGeometry(QRect(430, 360, 131, 28));
        lineEdit_68->setFont(font);
        lineEdit_68->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"\n"
"border-color: rgb(255, 255, 255);"));
        nom_add = new QLineEdit(widget_edit);
        nom_add->setObjectName("nom_add");
        nom_add->setGeometry(QRect(210, 140, 151, 51));
        nom_add->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border_radius:10px;"));
        prenom_add = new QLineEdit(widget_edit);
        prenom_add->setObjectName("prenom_add");
        prenom_add->setGeometry(QRect(210, 210, 151, 51));
        prenom_add->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border_radius:10px;"));
        email_add = new QLineEdit(widget_edit);
        email_add->setObjectName("email_add");
        email_add->setGeometry(QRect(590, 70, 151, 51));
        email_add->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border_radius:10px;"));
        poste_add = new QLineEdit(widget_edit);
        poste_add->setObjectName("poste_add");
        poste_add->setGeometry(QRect(590, 280, 151, 51));
        poste_add->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border_radius:10px;"));
        mdp_add = new QLineEdit(widget_edit);
        mdp_add->setObjectName("mdp_add");
        mdp_add->setGeometry(QRect(590, 350, 151, 51));
        mdp_add->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border_radius:10px;"));
        tel_add = new QLineEdit(widget_edit);
        tel_add->setObjectName("tel_add");
        tel_add->setGeometry(QRect(590, 140, 151, 51));
        tel_add->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border_radius:10px;"));
        birthdate_add = new QDateEdit(widget_edit);
        birthdate_add->setObjectName("birthdate_add");
        birthdate_add->setGeometry(QRect(210, 350, 151, 51));
        birthdate_add->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border_radius:10px;"));
        gender_add = new QComboBox(widget_edit);
        gender_add->addItem(QString());
        gender_add->addItem(QString());
        gender_add->setObjectName("gender_add");
        gender_add->setGeometry(QRect(210, 280, 151, 51));
        gender_add->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        confirm_add = new QPushButton(widget_edit);
        confirm_add->setObjectName("confirm_add");
        confirm_add->setGeometry(QRect(260, 440, 151, 71));
        confirm_add->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"\n"
"\n"
"color: rgb(255, 255, 255);\n"
"font: 10pt ;\n"
"\n"
"background-color: rgb(171, 168, 111);\n"
"background-color: rgb(70, 148, 119);\n"
"\n"
"\n"
"\n"
"\n"
"border-radius:30px;\n"
""));
        label_29 = new QLabel(widget_edit);
        label_29->setObjectName("label_29");
        label_29->setGeometry(QRect(232, 457, 41, 41));
        label_29->setPixmap(QPixmap(QString::fromUtf8(":/home page/4682662.png")));
        label_29->setScaledContents(true);
        cancel_add = new QPushButton(widget_edit);
        cancel_add->setObjectName("cancel_add");
        cancel_add->setGeometry(QRect(490, 440, 151, 71));
        cancel_add->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"\n"
"\n"
"color: rgb(255, 255, 255);\n"
"font: 10pt ;\n"
"\n"
"background-color: rgb(171, 168, 111);\n"
"background-color: rgb(97, 0, 0);\n"
"\n"
"\n"
"\n"
"border-radius:30px;\n"
""));
        label_30 = new QLabel(widget_edit);
        label_30->setObjectName("label_30");
        label_30->setGeometry(QRect(463, 457, 41, 41));
        label_30->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);\n"
"background-color: rgb(0, 0, 0);"));
        label_30->setPixmap(QPixmap(QString::fromUtf8(":/home page/391247.png")));
        label_30->setScaledContents(true);
        adr_add = new QLineEdit(widget_edit);
        adr_add->setObjectName("adr_add");
        adr_add->setGeometry(QRect(590, 210, 151, 51));
        adr_add->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border_radius:10px;"));

        retranslateUi(Dialog_emp);

        QMetaObject::connectSlotsByName(Dialog_emp);
    } // setupUi

    void retranslateUi(QDialog *Dialog_emp)
    {
        Dialog_emp->setWindowTitle(QCoreApplication::translate("Dialog_emp", "Dialog", nullptr));
        id_add->setText(QString());
        lineEdit_59->setText(QCoreApplication::translate("Dialog_emp", "ID", nullptr));
        lineEdit_60->setText(QCoreApplication::translate("Dialog_emp", "Gender", nullptr));
        lineEdit_61->setText(QCoreApplication::translate("Dialog_emp", "First Name", nullptr));
        lineEdit_62->setText(QCoreApplication::translate("Dialog_emp", "Birth Date", nullptr));
        lineEdit_63->setText(QCoreApplication::translate("Dialog_emp", "Last Name", nullptr));
        lineEdit_64->setText(QCoreApplication::translate("Dialog_emp", "Email Address", nullptr));
        lineEdit_65->setText(QCoreApplication::translate("Dialog_emp", "Work Position", nullptr));
        lineEdit_66->setText(QCoreApplication::translate("Dialog_emp", "Adresse", nullptr));
        lineEdit_67->setText(QCoreApplication::translate("Dialog_emp", "Phone Number", nullptr));
        lineEdit_68->setText(QCoreApplication::translate("Dialog_emp", "Mot de passe", nullptr));
        nom_add->setText(QString());
        prenom_add->setText(QString());
        email_add->setText(QString());
        poste_add->setText(QString());
        mdp_add->setText(QString());
        tel_add->setText(QString());
        gender_add->setItemText(0, QCoreApplication::translate("Dialog_emp", "Male", nullptr));
        gender_add->setItemText(1, QCoreApplication::translate("Dialog_emp", "Female", nullptr));

        confirm_add->setText(QCoreApplication::translate("Dialog_emp", "Confirm", nullptr));
        label_29->setText(QString());
        cancel_add->setText(QCoreApplication::translate("Dialog_emp", "Cancel", nullptr));
        label_30->setText(QString());
        adr_add->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dialog_emp: public Ui_Dialog_emp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_EMP_H
