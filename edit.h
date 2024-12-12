#ifndef EDIT_H
#define EDIT_H

#include <QDialog>

namespace Ui {
class edit;
}

class edit : public QDialog
{
    Q_OBJECT

public:
    explicit edit(QWidget *parent = nullptr);
    ~edit();

    void setId(int id);
    void setEtat(const QString &etat);
    void setType(const QString &type);

    // Public methods to get values from the UI
    int getId() const;
    QString getEtat() const;
    QString getType() const;

private slots:
    //void on_confirm_edit_clicked();

    void on_confirm_edit_clicked();

    void on_edit_cancel_clicked();

private:
    Ui::edit *ui;
};

#endif // EDIT_H
