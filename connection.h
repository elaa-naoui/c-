#ifndef CONNECTION_H
#define CONNECTION_H

#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>

class Connection
{
private:
    QSqlDatabase db;
    static Connection* instance;
    Connection(); // Private constructor

public:
    static Connection* getInstance();
    bool createconnection();
    bool createconnect();
    void closeConnection();
    QSqlDatabase& getDatabase() { return db; }
};

#endif // CONNECTION_H
