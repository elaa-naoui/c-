#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_confirm_clicked();

    void on_cancel_clicked();

private:
    Ui::Dialog *ui;
    bool validateInput();  // Helper method to validate input
};

#endif // DIALOG_H
