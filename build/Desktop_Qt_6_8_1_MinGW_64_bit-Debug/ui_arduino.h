/********************************************************************************
** Form generated from reading UI file 'arduino.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ARDUINO_H
#define UI_ARDUINO_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_arduino
{
public:
    QLabel *label;
    QLabel *label_3;
    QTableView *tableView;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *arduino)
    {
        if (arduino->objectName().isEmpty())
            arduino->setObjectName("arduino");
        arduino->resize(960, 807);
        arduino->setStyleSheet(QString::fromUtf8("border:2px solid green;\n"
"border-radius: 20px;\n"
""));
        label = new QLabel(arduino);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 120, 191, 51));
        label_3 = new QLabel(arduino);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(80, 220, 781, 61));
        tableView = new QTableView(arduino);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(80, 320, 411, 311));
        tableView->setStyleSheet(QString::fromUtf8("background-color: rgb(133, 144, 121);\n"
"background-color: rgb(255, 241, 226);\n"
"border:1px solid ;\n"
"border-color: rgb(121, 170, 147);"));
        label_4 = new QLabel(arduino);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(490, 120, 211, 51));
        label_4->setStyleSheet(QString::fromUtf8("QLabel{background-color: rgb(255, 255, 255);\n"
"border_radius:15px;}"));
        lineEdit = new QLineEdit(arduino);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(280, 120, 191, 51));
        pushButton = new QPushButton(arduino);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(720, 120, 131, 51));
        pushButton_2 = new QPushButton(arduino);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(520, 320, 351, 311));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/home page/image (1).png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_2->setIcon(icon);
        pushButton_2->setIconSize(QSize(250, 1330));

        retranslateUi(arduino);

        QMetaObject::connectSlotsByName(arduino);
    } // setupUi

    void retranslateUi(QDialog *arduino)
    {
        arduino->setWindowTitle(QCoreApplication::translate("arduino", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("arduino", "    voici l 'id saisi", nullptr));
        label_3->setText(QCoreApplication::translate("arduino", "                          voici tous les informations du l'equipement ", nullptr));
        label_4->setText(QString());
        pushButton->setText(QCoreApplication::translate("arduino", "pc fixed", nullptr));
        pushButton_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class arduino: public Ui_arduino {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ARDUINO_H
