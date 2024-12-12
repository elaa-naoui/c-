/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QFrame *login_frame;
    QLineEdit *Id_login;
    QLineEdit *Password_login;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QPushButton *Login_Button;
    QPushButton *forgotpassword_Button;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_4;

    void setupUi(QDialog *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName("login");
        login->resize(1230, 815);
        login_frame = new QFrame(login);
        login_frame->setObjectName("login_frame");
        login_frame->setGeometry(QRect(330, 60, 531, 631));
        login_frame->setStyleSheet(QString::fromUtf8("background-color: rgba(255,255,255, 0.5);\n"
"border:2px solid green;\n"
"border-radius: 30px;"));
        login_frame->setFrameShape(QFrame::Shape::StyledPanel);
        login_frame->setFrameShadow(QFrame::Shadow::Raised);
        Id_login = new QLineEdit(login_frame);
        Id_login->setObjectName("Id_login");
        Id_login->setGeometry(QRect(80, 180, 371, 71));
        Id_login->setStyleSheet(QString::fromUtf8("color: rgb(118, 118, 118);\n"
"background-color: rgb(250, 255, 230);\n"
"background-color: rgb(245, 255, 235);\n"
"border-radius:15px;"));
        Password_login = new QLineEdit(login_frame);
        Password_login->setObjectName("Password_login");
        Password_login->setGeometry(QRect(80, 300, 371, 71));
        Password_login->setStyleSheet(QString::fromUtf8("color: rgb(118, 118, 118);\n"
"background-color: rgb(250, 255, 230);\n"
"background-color: rgb(245, 255, 235);\n"
"border-radius:15px;"));
        label_3 = new QLabel(login_frame);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(430, 50, 61, 61));
        label_3->setStyleSheet(QString::fromUtf8("border:none;"));
        label_3->setPixmap(QPixmap(QString::fromUtf8("C:/Users/user/Downloads/key.png")));
        label_3->setScaledContents(true);
        lineEdit = new QLineEdit(login_frame);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(60, 40, 351, 81));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe Print")});
        font.setPointSize(30);
        lineEdit->setFont(font);
        lineEdit->setStyleSheet(QString::fromUtf8("border:none;\n"
"color: rgb(5, 104, 57);\n"
"background-color: rgba(255,255,255, 0);\n"
"\n"
""));
        lineEdit->setCursorPosition(8);
        lineEdit->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Login_Button = new QPushButton(login_frame);
        Login_Button->setObjectName("Login_Button");
        Login_Button->setGeometry(QRect(160, 410, 201, 71));
        Login_Button->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
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
        forgotpassword_Button = new QPushButton(login_frame);
        forgotpassword_Button->setObjectName("forgotpassword_Button");
        forgotpassword_Button->setGeometry(QRect(80, 520, 371, 61));
        forgotpassword_Button->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"color: rgb(231, 77, 71);\n"
"background-color: rgb(97, 0, 0);\n"
"\n"
"color: rgb(255, 255, 255);\n"
"font: 10pt ;\n"
"\n"
"background-color: rgb(171, 168, 111);\n"
"background-color: rgb(97, 0, 0);\n"
"background-color: rgb(231, 77, 71);\n"
"\n"
"border-radius:10px;\n"
"border-color: rgb(231, 77, 71);\n"
"background-color: rgba(255,255,255, 0.5);\n"
"color: rgb(231, 77, 71);\n"
"color: rgb(0, 0, 0);"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("C:/Users/user/Downloads/right-arrow.png"), QSize(), QIcon::Mode::Normal, QIcon::State::On);
        forgotpassword_Button->setIcon(icon);
        lineEdit_2 = new QLineEdit(login_frame);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(90, 150, 241, 28));
        lineEdit_2->setStyleSheet(QString::fromUtf8("border:none;\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgba(255,255,255, 0);"));
        lineEdit_4 = new QLineEdit(login_frame);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(90, 270, 241, 28));
        lineEdit_4->setStyleSheet(QString::fromUtf8("border:none;\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgba(255,255,255, 0);"));

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QDialog *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "Dialog", nullptr));
        Id_login->setText(QString());
        Password_login->setText(QString());
        label_3->setText(QString());
        lineEdit->setText(QCoreApplication::translate("login", "Welcome!", nullptr));
        Login_Button->setText(QCoreApplication::translate("login", "LOGIN IN ", nullptr));
        forgotpassword_Button->setText(QCoreApplication::translate("login", "Forgot Password", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("login", "Enter your ID:", nullptr));
        lineEdit_4->setText(QCoreApplication::translate("login", "Enter your password:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
