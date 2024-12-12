#ifndef MOT_DE_PASSE_OUBLIER_H
#define MOT_DE_PASSE_OUBLIER_H

#include <QDialog>

namespace Ui {
class mot_de_passe_oublier;
}

class mot_de_passe_oublier : public QDialog
{
    Q_OBJECT

public:
    explicit mot_de_passe_oublier(QWidget *parent = nullptr);
    ~mot_de_passe_oublier();

private:
    Ui::mot_de_passe_oublier *ui;
};

#endif // MOT_DE_PASSE_OUBLIER_H
