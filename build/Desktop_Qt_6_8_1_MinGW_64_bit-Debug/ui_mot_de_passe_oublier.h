/********************************************************************************
** Form generated from reading UI file 'mot_de_passe_oublier.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOT_DE_PASSE_OUBLIER_H
#define UI_MOT_DE_PASSE_OUBLIER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_mot_de_passe_oublier
{
public:
    QFrame *recover_password_frame;
    QLineEdit *Id_Recover;
    QLineEdit *Password_Recover;
    QLabel *label_5;
    QLineEdit *lineEdit_6;
    QPushButton *Recover_Button;
    QLineEdit *lineEdit_8;
    QLineEdit *lineEdit_9;

    void setupUi(QDialog *mot_de_passe_oublier)
    {
        if (mot_de_passe_oublier->objectName().isEmpty())
            mot_de_passe_oublier->setObjectName("mot_de_passe_oublier");
        mot_de_passe_oublier->resize(1302, 853);
        recover_password_frame = new QFrame(mot_de_passe_oublier);
        recover_password_frame->setObjectName("recover_password_frame");
        recover_password_frame->setGeometry(QRect(430, 90, 531, 631));
        recover_password_frame->setStyleSheet(QString::fromUtf8("background-color: rgba(255,255,255, 0.5);\n"
"border:2px solid green;\n"
"border-radius: 30px;"));
        recover_password_frame->setFrameShape(QFrame::Shape::StyledPanel);
        recover_password_frame->setFrameShadow(QFrame::Shadow::Raised);
        Id_Recover = new QLineEdit(recover_password_frame);
        Id_Recover->setObjectName("Id_Recover");
        Id_Recover->setGeometry(QRect(80, 180, 371, 71));
        Id_Recover->setStyleSheet(QString::fromUtf8("color: rgb(118, 118, 118);\n"
"background-color: rgb(250, 255, 230);\n"
"background-color: rgb(245, 255, 235);\n"
"border-radius:15px;"));
        Password_Recover = new QLineEdit(recover_password_frame);
        Password_Recover->setObjectName("Password_Recover");
        Password_Recover->setGeometry(QRect(80, 340, 371, 71));
        Password_Recover->setStyleSheet(QString::fromUtf8("color: rgb(118, 118, 118);\n"
"background-color: rgb(250, 255, 230);\n"
"background-color: rgb(245, 255, 235);\n"
"border-radius:15px;"));
        label_5 = new QLabel(recover_password_frame);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(430, 50, 61, 61));
        label_5->setStyleSheet(QString::fromUtf8("border:none;"));
        label_5->setPixmap(QPixmap(QString::fromUtf8("C:/Users/user/Downloads/password.png")));
        label_5->setScaledContents(true);
        lineEdit_6 = new QLineEdit(recover_password_frame);
        lineEdit_6->setObjectName("lineEdit_6");
        lineEdit_6->setGeometry(QRect(60, 40, 351, 81));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe Print")});
        font.setPointSize(16);
        font.setBold(true);
        font.setItalic(false);
        lineEdit_6->setFont(font);
        lineEdit_6->setStyleSheet(QString::fromUtf8("border:none;\n"
"\n"
"font: 700 16pt \"Segoe Print\";\n"
"color: rgb(5, 104, 57);\n"
"background-color: rgba(255,255,255, 0);\n"
"\n"
""));
        lineEdit_6->setCursorPosition(21);
        lineEdit_6->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Recover_Button = new QPushButton(recover_password_frame);
        Recover_Button->setObjectName("Recover_Button");
        Recover_Button->setGeometry(QRect(170, 480, 201, 71));
        Recover_Button->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"font: 10pt \"Segoe Print\";\n"
"\n"
"background-color: rgb(97, 0, 0);\n"
"\n"
"color: rgb(255, 255, 255);\n"
"\n"
"background-color: rgb(171, 168, 111);\n"
"background-color: rgb(97, 0, 0);\n"
"background-color: rgb(231, 77, 71);\n"
"\n"
"\n"
"\n"
"border-radius:30px;\n"
""));
        lineEdit_8 = new QLineEdit(recover_password_frame);
        lineEdit_8->setObjectName("lineEdit_8");
        lineEdit_8->setGeometry(QRect(90, 150, 241, 28));
        lineEdit_8->setStyleSheet(QString::fromUtf8("border:none;\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgba(255,255,255, 0);"));
        lineEdit_9 = new QLineEdit(recover_password_frame);
        lineEdit_9->setObjectName("lineEdit_9");
        lineEdit_9->setGeometry(QRect(90, 300, 241, 28));
        lineEdit_9->setStyleSheet(QString::fromUtf8("border:none;\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgba(255,255,255, 0);"));

        retranslateUi(mot_de_passe_oublier);

        QMetaObject::connectSlotsByName(mot_de_passe_oublier);
    } // setupUi

    void retranslateUi(QDialog *mot_de_passe_oublier)
    {
        mot_de_passe_oublier->setWindowTitle(QCoreApplication::translate("mot_de_passe_oublier", "Dialog", nullptr));
        Id_Recover->setText(QString());
        Password_Recover->setText(QString());
        label_5->setText(QString());
        lineEdit_6->setText(QCoreApplication::translate("mot_de_passe_oublier", "Recover your password", nullptr));
        Recover_Button->setText(QCoreApplication::translate("mot_de_passe_oublier", "Send Recovery Email", nullptr));
        lineEdit_8->setText(QCoreApplication::translate("mot_de_passe_oublier", "Re-Enter your ID:", nullptr));
        lineEdit_9->setText(QCoreApplication::translate("mot_de_passe_oublier", "Enter your Email-Address:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mot_de_passe_oublier: public Ui_mot_de_passe_oublier {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOT_DE_PASSE_OUBLIER_H
