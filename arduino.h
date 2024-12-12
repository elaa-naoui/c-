#ifndef ARDUINO_H
#define ARDUINO_H

#include <QDialog>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QDebug>
#include <QDateTime>
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlError>
#include <QRegularExpression>
#include <QThread>
#include <QTimer>

namespace Ui {
class arduino; // Ensure this matches the class name in your UI file
}

class arduino : public QDialog
{
    Q_OBJECT

public:
    explicit arduino(QWidget *parent = nullptr);
    ~arduino();
    void setupSerialPort();
    void searchInTables(const QString &id);

private slots:
    void handleSerialData();
    void on_cleanButton_clicked();
    //void toggleBuzzer();

    void on_pushButton_clicked();

private:
    void appendToInput(const QString &digit);
    void clearAll();
    void sendBuzzerCommand(bool isOn);

    Ui::arduino *ui; // Pointer to the UI
    QSerialPort *serial; // Serial port object
    QTimer *buzzerTimer; // Timer for buzzer control
    QString currentInput; // Current input from the keypad
    long lastInputTime; // Last input time
    QString lastInputDigit; // Last input digit

    bool buzzerState; // State of the buzzer
};

#endif // ARDUINO_H
