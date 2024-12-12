#include "equipment.h"
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDebug>
#include <QSqlError>

Equipment::Equipment(int id_eq , QString type_eq , QString etat_eq )
{
    this -> id_eq = id_eq ;
    this -> type_eq = type_eq ;
    this -> etat_eq = etat_eq ;

}

bool Equipment::ajouter()
{
    QSqlQuery query;
    QString res = QString :: number(id_eq);
    query.prepare ("insert into EQUIPMENT (id_eq ,type_eq ,etat_eq )" "values ( :id_eq , :type_eq , :etat_eq)");  // prepare la requete a l execution

    //creation des variables liees
    query.bindValue(":id_eq",res);
    query.bindValue(":type_eq",type_eq);
    query.bindValue(":etat_eq",etat_eq);

    return query.exec(); // exec() envoi la requete pour l execution

}

bool Equipment::supprimer(int id_eq)
{
    QSqlQuery query;
    QString res = QString :: number(id_eq);
    query.prepare ("Delete from EQUIPMENT where ID_EQ = :id_eq");
    query.bindValue(":id_eq",res);
     return query.exec();
}


QSqlQueryModel * Equipment::afficher()
{
    QSqlQueryModel * model = new QSqlQueryModel();
    
    // Create a new query and force it to refresh
    QSqlQuery query;
    query.exec("select * from EQUIPMENT");
    
    // Set the refreshed query to the model
    model->setQuery(std::move(query));
    
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID_EQ"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("ETAT_EQ"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("TYPE_EQ"));

    return model;
}

QSqlQueryModel* Equipment::searchByEtat(const QString& etat) {
    QSqlQueryModel *model = new QSqlQueryModel();

    QSqlQuery query;
    query.prepare("SELECT * FROM EQUIPMENT WHERE etat_eq = :etat"); // Use your actual table name
    query.bindValue(":etat", etat);

    if (query.exec()) {
        model->setQuery(std::move(query)); // Use move semantics for setQuery
    } else {
        qDebug() << "Search by etat query failed: " << query.lastError().text();
    }

    return model;
}

// Search by type implementation
QSqlQueryModel* Equipment::searchByType(const QString& type) {
    QSqlQueryModel *model = new QSqlQueryModel();

    QSqlQuery query;
    query.prepare("SELECT * FROM EQUIPMENT WHERE type_eq = :type"); // Use your actual table name
    query.bindValue(":type", type);

    if (query.exec()) {
        model->setQuery(std::move(query)); // Use move semantics for setQuery
    } else {
        qDebug() << "Search by type query failed: " << query.lastError().text();
    }

    return model;
}

bool Equipment::modifier()
{
    QSqlQuery query;
    QString id_str = QString::number(id_eq);
    
    query.prepare("UPDATE EQUIPMENT SET TYPE_EQ=:type_eq, ETAT_EQ=:etat_eq WHERE ID_EQ = :id_eq");
    query.bindValue(":id_eq", id_str);
    query.bindValue(":type_eq", type_eq);
    query.bindValue(":etat_eq", etat_eq);

    // Debug output
    qDebug() << "Modifying equipment with:";
    qDebug() << "  ID:" << id_str;
    qDebug() << "  Type:" << type_eq;
    qDebug() << "  Etat:" << etat_eq;
    qDebug() << "Query:" << query.lastQuery();
    
    bool res = query.exec();
    
    if (!res) {
        QSqlError error = query.lastError();
        qDebug() << "Error EDITING equipment:" << error.text();
        qDebug() << "Database error type:" << error.type();
        qDebug() << "Database error driver text:" << error.driverText();
        qDebug() << "Database error database text:" << error.databaseText();
    } else {
        qDebug() << "Equipment modified successfully. Rows affected:" << query.numRowsAffected();
    }
    return res;
}
