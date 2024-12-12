#include "connection.h"
#include <QDebug>

Connection* Connection::instance = nullptr;

Connection::Connection()
{
}

Connection* Connection::getInstance()
{
    if (instance == nullptr) {
        instance = new Connection();
    }
    return instance;
}

bool Connection::createconnect()
{
    bool test = false;
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("Projet2A38");
    db.setUserName("ela");
    db.setPassword("1234");

    if (db.open()) {
        qDebug() << "Database connected successfully";
        test = true;
    } else {
        qDebug() << "Database Error:" << db.lastError().text();
        qDebug() << "Driver Error:" << db.lastError().driverText();
        qDebug() << "Database Error Text:" << db.lastError().databaseText();
    }

    return test;
}

bool Connection::createconnection()
{
    return createconnect(); // For backward compatibility
}

void Connection::closeConnection()
{
    if (db.isOpen()) {
        db.close();
    }
}
