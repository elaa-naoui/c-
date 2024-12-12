#ifndef EQUIPMENT_H
#define EQUIPMENT_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
class Equipment
{
    int id_eq ;
    QString type_eq , etat_eq ;
public:
    //Constructeurs
    Equipment(){};
    Equipment(int , QString , QString);

    //getters
    QString getType_eq(){return type_eq ;}
    QString getEtat_eq(){return etat_eq ;}
    int getId_eq(){return id_eq ;}

    //setters
    void setId(int id) { id_eq = id; }
    void setType(const QString& type) { type_eq = type; }
    void setEtat(const QString& etat) { etat_eq = etat; }
    void setType_eq(QString t ){type_eq = t ;}
    void setEtat_eq(QString etat ){ etat_eq = etat ;}
    void setId_eq(int id){this -> id_eq = id ;}

    //fonctionalites de base
    bool ajouter();
    bool modifier();
    QSqlQueryModel * afficher();
    bool supprimer(int);


    QSqlQueryModel *search(int);
    QSqlQueryModel* searchByEtat(const QString &etat); // Function to search by state
    QSqlQueryModel* searchByType(const QString &type); // Function to search by type


};

#endif // EQUIPMENT_H
