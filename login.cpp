#include "login.h"
#include "ui_login.h"
#include "mainwindow.h"
#include "employees.h"
#include <QApplication>
#include <QMessageBox>

login::login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login),
    mainWindow(nullptr)
{
    ui->setupUi(this);
    ui->Password_login->setEchoMode(QLineEdit::Password);
}

login::~login()
{
    delete ui;
}

void login::on_Login_Button_clicked()
{
    int id = ui->Id_login->text().toInt();
    QString password = ui->Password_login->text();
    QString poste;
    
    Employees emp;
    if(emp.authenticate(id, password, poste)) {
        // Create or show MainWindow
        if (!mainWindow) {
            mainWindow = new MainWindow();
        }
        mainWindow->show();
        this->close();
    } else {
        QMessageBox::warning(this, "Login Failed", "Invalid ID or password. Please try again.");
    }
}
