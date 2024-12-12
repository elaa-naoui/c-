#include "mainwindow.h"
#include "login.h"
#include <QApplication>
#include <QMessageBox>
#include "connection.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    
    if (Connection::getInstance()->createconnection()) {
        QMessageBox::information(nullptr, QObject::tr("Database Connection"),
                    QObject::tr("Connection successful.\n"
                              "Click OK to continue."), QMessageBox::Ok);
        
        login loginWindow;
        loginWindow.show();
        return a.exec();
    } else {
        QMessageBox::critical(nullptr, QObject::tr("Database Connection"),
                    QObject::tr("Connection failed.\n"
                              "Click OK to exit."), QMessageBox::Ok);
        return 1;
    }
}
