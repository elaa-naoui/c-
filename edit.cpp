#include "edit.h"
#include "ui_edit.h"
#include "equipment.h"
#include "mainwindow.h"
#include <QMessageBox>
#include <QTableView>
#include <QDebug>

edit::edit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::edit)
{
    ui->setupUi(this);
}

edit::~edit()
{
    delete ui;
}

// Setters
void edit::setId(int id)
{
    ui->id_edit->setText(QString::number(id));
}

void edit::setEtat(const QString &etat)
{
    ui->etat_edit->setCurrentText(etat);
}

void edit::setType(const QString &type)
{
    ui->type_edit->setCurrentText(type);
}

// Getters
int edit::getId() const
{
    return ui->id_edit->text().toInt();
}

QString edit::getEtat() const
{
    return ui->etat_edit->currentText();
}

QString edit::getType() const
{
    return ui->type_edit->currentText();
}

void edit::on_confirm_edit_clicked()
{
    //Recuperer les données encore une fois des line_edits
    int Id_EQ = ui->id_edit->text().toInt();
    QString TYPE_EQ = ui->type_edit->currentText();
    QString ETAT_EQ = ui->etat_edit->currentText();

    // Vérifier si les champs ne sont pas vides
    if (Id_EQ == 0 || TYPE_EQ.isEmpty() || ETAT_EQ.isEmpty()) {
        QMessageBox::warning(this, "Champs manquants", "Veuillez remplir tous les champs.");
        return;
    }

    Equipment E(Id_EQ, TYPE_EQ, ETAT_EQ);
    bool success = E.modifier();
    
    if (success) {
        QMessageBox::information(this, "Succès", "L'équipement a été modifié avec succès.");
        
        // Update the table view
        QTableView* tableView = this->parentWidget()->findChild<QTableView*>("afficher_eq");
        if (tableView) {
            QSqlQueryModel* model = E.afficher();
            if (model) {
                tableView->setModel(model);
                tableView->viewport()->update();
            }
        }
        
        this->close();
    } else {
        QMessageBox::critical(this, "Erreur", "La modification de l'équipement a échoué.");
    }
}

void edit::on_edit_cancel_clicked()
{
    // Update the table view before closing
    QTableView* tableView = this->parentWidget()->findChild<QTableView*>("afficher_eq");
    if (tableView) {
        Equipment E;  // Temporary Equipment object for refresh
        QSqlQueryModel* model = E.afficher();
        if (model) {
            tableView->setModel(model);
            tableView->viewport()->update();
        }
    }
    
    this->close();
}
