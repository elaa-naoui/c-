#include "delate.h"
#include "ui_delate.h"
#include "mainwindow.h"
#include <QMessageBox>
#include "mainwindow.h"
#include <QApplication>

delate::delate(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::delate)
{
    ui->setupUi(this);
}

delate::~delate()
{
    delete ui;
}

void delate::on_del_clicked()
{
    int id_eq = ui -> id -> text().toInt();

    bool test = Etmp.supprimer(id_eq);

    if (test) // requete executee

    {
            QMessageBox ::information(nullptr , QObject::tr("ok"),
                        QObject::tr("Suppression effectue \n"
                                    "Click Canncel to exit . "),QMessageBox::Cancel);



    }

    else // requete non executee
    {
        {
                QMessageBox ::critical(nullptr , QObject::tr("Not ok"),
                            QObject::tr("Suppression non effectue \n"
                                        "Click Canncel to exit . "),QMessageBox::Cancel);
        }
    }



}


void delate::on_pushButton_clicked()
{
    reject();
}

