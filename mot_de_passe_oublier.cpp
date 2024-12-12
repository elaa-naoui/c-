#include "mot_de_passe_oublier.h"
#include "ui_mot_de_passe_oublier.h"

mot_de_passe_oublier::mot_de_passe_oublier(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::mot_de_passe_oublier)
{
    ui->setupUi(this);
}

mot_de_passe_oublier::~mot_de_passe_oublier()
{
    delete ui;
}
