#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include <QString>

class MainWindow;
class Employees;

namespace Ui { class login; }

class login : public QDialog
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = nullptr);
    ~login();

private slots:
    void on_Login_Button_clicked();

private:
    Ui::login *ui;
    MainWindow* mainWindow;
};

#endif // LOGIN_H
