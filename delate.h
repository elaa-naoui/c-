#ifndef DELATE_H
#define DELATE_H

#include "equipment.h"

#include <QDialog>

namespace Ui {
class delate;
}

class delate : public QDialog
{
    Q_OBJECT

public:
    explicit delate(QWidget *parent = nullptr);
    ~delate();

private slots:
    void on_del_clicked();

    void on_pushButton_clicked();

private:
    Ui::delate *ui;
    Equipment Etmp;
};

#endif // DELATE_H
