#include "dialog_emp.h"
#include "ui_dialog_emp.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>
#include "employees.h"


Dialog_emp::Dialog_emp(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog_emp)
{
    ui->setupUi(this);
}

Dialog_emp::~Dialog_emp()
{
    delete ui;
}

void Dialog_emp::on_confirm_add_clicked()
{
    // Get values from UI elements
    bool ok;
    int id = ui->id_add->text().toInt(&ok);
    if (!ok) {
        QMessageBox::warning(this, "Error", "ID must be a valid number");
        return;
    }

    QString nom = ui->nom_add->text();
    QString prenom = ui->prenom_add->text();
    QString sexe = ui->gender_add->currentText();
    QDate dateNais = ui->birthdate_add->date();
    QString adresse = ui->adr_add->text();
    QString email = ui->email_add->text();
    
    // Phone number validation and conversion to integer
    QString telStr = ui->tel_add->text();
    // Remove any spaces or special characters
    telStr = telStr.remove(" ").remove("-").remove("+");
    // Convert to integer
    int tel = telStr.toInt(&ok);
    if (!ok) {
        QMessageBox::warning(this, "Error", "Phone number must contain only digits");
        return;
    }

    QString poste = ui->poste_add->text();
    QString mdp = ui->mdp_add->text();

    // Basic validation
    if (nom.isEmpty() || prenom.isEmpty() || adresse.isEmpty() || 
        email.isEmpty() || telStr.isEmpty() || poste.isEmpty() || mdp.isEmpty()) {
        QMessageBox::warning(this, "Error", "Please fill in all fields");
        return;
    }

    // Validate email format
    if (!email.contains("@") || !email.contains(".")) {
        QMessageBox::warning(this, "Error", "Please enter a valid email address");
        return;
    }

    // Create employee object
    Employees E(id, nom, prenom, sexe, dateNais, adresse, email, QString::number(tel), poste, mdp);
    E.ajouter();
    // Add employee using the Employees class method
    if (E.ajouter()) {
        QMessageBox::information(this, "Success", "Employee added successfully!");
        // Clear the input fields
        ui->id_add->clear();
        ui->nom_add->clear();
        ui->prenom_add->clear();
        // Don't clear gender combobox
        // Don't clear birthdate
        ui->adr_add->clear();
        ui->email_add->clear();
        ui->tel_add->clear();
        ui->poste_add->clear();
        ui->mdp_add->clear();
    } else {
        // Get the specific SQL error
        QSqlDatabase db = QSqlDatabase::database();
        QString errorMsg = db.lastError().text();
        QMessageBox::critical(this, "Error", "Failed to add employee: " + errorMsg);
    }
}

void Dialog_emp::on_cancel_add_clicked()
{
    reject();
}

