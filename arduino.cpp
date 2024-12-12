#include "arduino.h"
#include "ui_arduino.h"
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlError>
#include <QDebug>
#include <QRegularExpression>
#include <QSerialPortInfo>
#include <QPushButton>
#include <QDateTime>

// Constructor for the arduino class
arduino::arduino(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::arduino),
    currentInput(""),
    lastInputTime(0),
    lastInputDigit("")
{
    ui->setupUi(this);
    serial = new QSerialPort(this);
    setupSerialPort();
}

// Destructor
arduino::~arduino()
{
    if (serial->isOpen()) {
        serial->close();
    }
    delete serial;
    delete ui;
}

// Handle incoming serial data (keypad input)
void arduino::handleSerialData()
{
    if (serial->canReadLine()) {
        QByteArray data = serial->readLine();
        QString digit = QString(data).trimmed();

        // Remove any non-numeric characters
        digit.remove(QRegularExpression("[^0-9]"));

        if (!digit.isEmpty()) {
            qint64 currentTime = QDateTime::currentMSecsSinceEpoch();

            // If too much time has passed, clear the input
            if ((currentTime - lastInputTime) > 3000) {
                currentInput.clear();
            }

            // Add the new digit
            currentInput += digit;
            ui->lineEdit->setText(currentInput);

            // Update timing
            lastInputTime = currentTime;
            lastInputDigit = digit;

            // Search when we have enough digits
            if (currentInput.length() >= 4) {
                searchInTables(currentInput);
            }
        }
    }
}

// Append new digit to input
void arduino::appendToInput(const QString &digit)
{
    currentInput += digit;
    ui->lineEdit->setText(currentInput);
    ui->lineEdit->repaint();
}

// Send buzzer command to Arduino
void arduino::sendBuzzerCommand(bool isOn)
{
    if (serial && serial->isOpen()) {
        QString cmd = isOn ? "BUZZER_ON\n" : "BUZZER_OFF\n";
        qDebug() << "Sending command:" << cmd;
        serial->write(cmd.toUtf8());
        serial->flush();
    }
}

// Search in database tables
void arduino::searchInTables(const QString &id)
{
    if (id.isEmpty()) return;

    QSqlQuery query;

    // First check EQUIPMENT table
    query.prepare("SELECT * FROM EQUIPMENT WHERE id_eq = :id");
    query.bindValue(":id", id);

    if (query.exec() && query.next()) {
        // Found in EQUIPMENT table
        QString etat = query.value("ETAT_EQ").toString().toLower();
        QString type = query.value("TYPE_EQ").toString().toLower();

        // Check if it's a PC and if it's broken
        if (type.contains("pc") && etat.contains("broken")) {
            ui->label_4->setText("WARNING: PC is broken!");
            ui->label_4->setStyleSheet("QLabel { background-color: red; color: white; }");
            sendBuzzerCommand(true);  // Activate buzzer
        } else {
            ui->label_4->setText("Equipment Status: " + etat);
            ui->label_4->setStyleSheet("QLabel { background-color: #79AA93; color: white; }");
            sendBuzzerCommand(false); // Deactivate buzzer
        }

        // Show equipment details
        QSqlQueryModel *model = new QSqlQueryModel;
        model->setQuery(std::move(query));
        ui->tableView->setModel(model);
        ui->tableView->resizeColumnsToContents();
        ui->label_3->setText("Found in EQUIPMENT table");
        return;
    }

    // Check other tables if not found in EQUIPMENT
    QStringList tables = {"EMPLOYE", "PRODUIT", "FOURNISSEUR", "CLIENT"};
    for (const QString &table : tables) {
        QString idColumn = QString("id_%1").arg(table.toLower());
        QString queryStr = QString("SELECT * FROM %1 WHERE %2 = :id")
                         .arg(table.toLower(), idColumn);

        query.prepare(queryStr);
        query.bindValue(":id", id);

        if (query.exec() && query.next()) {
            QSqlQueryModel *model = new QSqlQueryModel;
            model->setQuery(std::move(query));
            ui->tableView->setModel(model);
            ui->tableView->resizeColumnsToContents();
            ui->label_3->setText("Found in " + table + " table");
            ui->label_4->setText("");
            ui->label_4->setStyleSheet("");
            return;
        }
    }

    // Not found in any table
    ui->label_3->setText("ID not found in any table");
    ui->label_4->setText("");
    ui->label_4->setStyleSheet("");
    ui->tableView->setModel(nullptr);
}

// Setup the serial port communication
void arduino::setupSerialPort()
{
    if (serial->isOpen()) {
        serial->close();
    }

    const auto ports = QSerialPortInfo::availablePorts();
    for (const QSerialPortInfo &portInfo : ports) {
        serial->setPortName(portInfo.portName());
        serial->setBaudRate(QSerialPort::Baud9600);
        serial->setDataBits(QSerialPort::Data8);
        serial->setParity(QSerialPort::NoParity);
        serial->setStopBits(QSerialPort::OneStop);
        serial->setFlowControl(QSerialPort::NoFlowControl);

        if (serial->open(QIODevice::ReadWrite)) {
            connect(serial, &QSerialPort::readyRead, this, &arduino::handleSerialData);
            qDebug() << "Connected to" << portInfo.portName();
            ui->label_4->setText("Connected to " + portInfo.portName());
            return;
        }
    }

    ui->label_4->setText("Could not connect to Arduino");
}

// Clean button clicked
void arduino::on_cleanButton_clicked()
{
    clearAll();
}

// Clear all inputs and displays
void arduino::clearAll()
{
    currentInput.clear();
    ui->lineEdit->clear();
    ui->label_3->setText("");
    ui->label_4->setText("");
    ui->tableView->setModel(nullptr);
    ui->lineEdit->repaint();
    ui->label_3->repaint();
    ui->label_4->repaint();
}

void arduino::on_pushButton_clicked()
{
    sendBuzzerCommand(false); // Deactivate buzzer
}

