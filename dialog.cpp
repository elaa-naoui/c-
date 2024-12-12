#include "dialog.h"
#include "equipment.h"
#include "ui_dialog.h"
#include "mainwindow.h"
#include <QMessageBox>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    setWindowTitle("Add Equipment");
    
    // Set validators
    ui->id->setValidator(new QIntValidator(0, 999999, this));
}

Dialog::~Dialog()
{
    delete ui;
}

bool Dialog::validateInput()
{
    if (ui->id->text().isEmpty()) {
        QMessageBox::warning(this, "Validation Error", "Please enter an equipment ID");
        return false;
    }

    if (ui->type->currentText().isEmpty()) {
        QMessageBox::warning(this, "Validation Error", "Please select an equipment type");
        return false;
    }

    if (ui->etat->currentText().isEmpty()) {
        QMessageBox::warning(this, "Validation Error", "Please select an equipment state");
        return false;
    }

    return true;
}

void Dialog::on_confirm_clicked()
{
   Equipment equipment;
    equipment.setId(ui->id->text().toInt());
    equipment.setType(ui->type->currentText());
    equipment.setEtat(ui->etat->currentText());
    //equipment.setDate(ui->dateEdit->date());

    if (equipment.ajouter()) {
        QMessageBox::information(this, "Success", "Equipment added successfully!");
        accept();  // Close dialog with Accept result
    } else {
        QMessageBox::critical(this, "Error", "Failed to add equipment. Please try again.");
    }
}



void Dialog::on_cancel_clicked()
{
    close();
}

