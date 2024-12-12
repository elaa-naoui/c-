#include "employees.h"
#include "connection.h"
#include <QSqlError>
#include <QMessageBox>
#include <QString>
#include <QSqlQueryModel>
#include <QDebug>

using namespace std;

Employees::Employees(int id, QString nom, QString prenom, QString gender, QDate date, QString adresse, QString email, QString tel, QString poste, QString mdp)
{
    Id_E = id;
    Nom_E = nom;
    Prenom_E = prenom;
    Sexe_E = gender;
    Date_Nais_E = date;
    Adresse_E = adresse;
    Email_E = email;
    Tel_E = tel;
    Poste_E = poste;
    Mdp_E = mdp;
}

bool Employees::ajouter()
{
    QSqlQuery query;

    // Prepare the query with explicit data types for Oracle
    QString queryStr = 
        "INSERT INTO EMPLOYEES "
        "(ID_E, NOM_E, PRENOM_E, DATE_NAIS_E, ADRESSE_E, EMAIL_E, TEL_E, POSTE_E, MDP_E, SEXE_E) "
        "VALUES "
        "(:id_emp, :nom_emp, :prenom_emp, TO_DATE(:date_nais, 'YYYY-MM-DD'), "
        ":add_emp, :email_emp, :tel_emp, :poste_emp, :mdp_emp, :sexe_emp)";
    
    if (!query.prepare(queryStr)) {
        qDebug() << "Query preparation failed:" << query.lastError().text();
        return false;
    }

    // Bind values with explicit types
    query.bindValue(":id_emp", Id_E);
    query.bindValue(":nom_emp", Nom_E);
    query.bindValue(":prenom_emp", Prenom_E);
    query.bindValue(":date_nais", Date_Nais_E.toString("yyyy-MM-dd"));
    query.bindValue(":add_emp", Adresse_E);
    query.bindValue(":email_emp", Email_E);
    query.bindValue(":tel_emp", Tel_E);  // Now TEL_E is VARCHAR2
    query.bindValue(":poste_emp", Poste_E);
    query.bindValue(":mdp_emp", Mdp_E);
    query.bindValue(":sexe_emp", Sexe_E);

    // Debug output
    qDebug() << "Query:" << queryStr;
    qDebug() << "Values:";
    qDebug() << "  ID:" << Id_E;
    qDebug() << "  Nom:" << Nom_E;
    qDebug() << "  Prenom:" << Prenom_E;
    qDebug() << "  Date:" << Date_Nais_E.toString("yyyy-MM-dd");
    qDebug() << "  Adresse:" << Adresse_E;
    qDebug() << "  Email:" << Email_E;
    qDebug() << "  Tel:" << Tel_E;
    qDebug() << "  Poste:" << Poste_E;
    qDebug() << "  Sexe:" << Sexe_E;

    bool res = query.exec();
    if (!res) {
        qDebug() << "Error adding employee:" << query.lastError().text();
        qDebug() << "Database error:" << query.lastError().databaseText();
        qDebug() << "Driver error:" << query.lastError().driverText();
    }

    return res;
}

QSqlQueryModel* Employees::afficher()
{
    QSqlQueryModel* model = new QSqlQueryModel();
    model->setQuery("select * from EMPLOYEES");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID_E"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM_E"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("PRENOM_E"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("DATE NAISSANCE"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("ADRESSE_E"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("EMAIL_E"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("TEL_E"));
    model->setHeaderData(7, Qt::Horizontal, QObject::tr("POSTE_E"));
    model->setHeaderData(8, Qt::Horizontal, QObject::tr("MDP_E"));
    model->setHeaderData(9, Qt::Horizontal, QObject::tr("SEXE_E"));
    return model;
}

bool Employees::modifier()
{
    QSqlDatabase db = Connection::getInstance()->getDatabase();
    QSqlQuery query(db);

    query.prepare("UPDATE EMPLOYEES SET ID_E=:id_emp, NOM_E=:nom_emp, PRENOM_E=:prenom_emp, DATE_NAIS_E=:date_nais, ADRESSE_E=:add_emp, EMAIL_E=:email_emp, TEL_E=:tel_emp, POSTE_E=:poste_emp, MDP_E=:mdp_emp, SEXE_E=:sexe_emp where ID_E= :id_emp");
    query.bindValue(":id_emp", Id_E);
    query.bindValue(":nom_emp", Nom_E);
    query.bindValue(":prenom_emp", Prenom_E);
    query.bindValue(":sexe_emp", Sexe_E);
    query.bindValue(":date_nais", Date_Nais_E);
    query.bindValue(":add_emp", Adresse_E);
    query.bindValue(":email_emp", Email_E);
    query.bindValue(":tel_emp", Tel_E);
    query.bindValue(":poste_emp", Poste_E);
    query.bindValue(":mdp_emp", Mdp_E);
    qDebug() << "Query: " << query.lastQuery();
    bool res = query.exec();
    if (!res) {
        qDebug() << "Error EDITING employee:" << query.lastError().text();
    }

    return res;
}

bool Employees::supprimer(int Id_E)
{
    QSqlDatabase db = Connection::getInstance()->getDatabase();
    QSqlQuery query(db);
    query.prepare("Delete from EMPLOYEES where ID_E= :id_emp ");
    query.bindValue(":id_emp", Id_E);
    return query.exec();
}

QSqlQueryModel* Employees::search(int id)
{
    QSqlDatabase db = Connection::getInstance()->getDatabase();
    QSqlQuery query(db);
    QSqlQueryModel* model = new QSqlQueryModel();

    query.prepare("SELECT * FROM EMPLOYEES WHERE ID_E = :id_emp");
    query.bindValue(":id_emp", id);

    if (query.exec()) {
        if (query.next()) {
            model->setQuery(std::move(query));
        } else {
            QMessageBox::warning(nullptr, "No Result", "No employee found with the entered ID.");
        }
    } else {
        QMessageBox::critical(nullptr, "Database Error", "Failed to execute query.");
    }

    return model;
}

bool Employees::authenticate(int id, const QString& password, QString& poste)
{
    QSqlDatabase db = Connection::getInstance()->getDatabase();
    QSqlQuery query(db);

    query.prepare("SELECT POSTE_E FROM EMPLOYEES WHERE ID_E = :id AND MDP_E = :password");
    query.bindValue(":id", id);
    query.bindValue(":password", password);

    if (query.exec()) {
        if (query.next()) {
            poste = query.value(0).toString();
            return true;
        }
    } else {
        qDebug() << "Erreur SQL : " << query.lastError().text();
    }

    return false;
}
