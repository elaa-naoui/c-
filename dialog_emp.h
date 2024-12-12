#ifndef DIALOG_EMP_H
#define DIALOG_EMP_H

#include <QDialog>

namespace Ui {
class Dialog_emp;
}

class Dialog_emp : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_emp(QWidget *parent = nullptr);
    ~Dialog_emp();

private slots:


    void on_confirm_add_clicked();

    void on_cancel_add_clicked();

private:
    Ui::Dialog_emp *ui;
};

#endif // DIALOG_EMP_H
