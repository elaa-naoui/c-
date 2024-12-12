#include "mainwindow.h"
#include "equipment.h"
#include "arduino.h"
#include <QMainWindow>
#include <QObject>
#include <QRegularExpressionValidator>
#include <QApplication>
#include <QTableView>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QDebug>
#include <QPushButton>
#include <QtCharts>
#include <QChartView>
#include <QPieSeries>
#include <QTextDocument>
#include <QtPrintSupport/QPrinter>
#include <QtPrintSupport/QPrintDialog>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>
#include "dialog_emp.h"
#include "ui_mainwindow.h"
#include "edit.h"
#include "delate.h"
#include "dialog.h"
#include "chatbot.h"
#include <QStandardItemModel>
#include <QStandardItem>
#include <QSqlError>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    buttonsVisible(false) // Initialize buttons as hidden
{

    ui->setupUi(this);
    ui->stackedWidget->setCurrentWidget(ui->listpage);
    ui->afficher_eq->setModel(Etm.afficher());
    ui->meu_button->setVisible(true);


    // Initially hide all buttons

    ui->home->setVisible(buttonsVisible);
    ui->pro->setVisible(buttonsVisible);
    ui->cli->setVisible(buttonsVisible);
    ui->eq->setVisible(buttonsVisible);
    ui->emp->setVisible(buttonsVisible);
    ui->deli->setVisible(buttonsVisible);
    ui->chat->setVisible(!buttonsVisible);


    // Initially hide equipment stack widget

    // ui->stackedWidget->setVisible(buttonsVisible);


    // Connect buttons to their respective slots

    connect(ui->deli, &QPushButton::clicked, this, &MainWindow::on_deli_clicked);
    connect(ui->home, &QPushButton::clicked, this, &MainWindow::on_home_clicked);
    connect(ui->pro, &QPushButton::clicked, this, &MainWindow::on_pro_clicked);
    connect(ui->cli, &QPushButton::clicked, this, &MainWindow::on_cli_clicked);
    connect(ui->eq, &QPushButton::clicked, this, &MainWindow::on_eq_clicked);
    connect(ui->emp, &QPushButton::clicked, this, &MainWindow::on_emp_clicked);


    connect(ui->eq, &QPushButton::clicked, this, &MainWindow::on_pushButton_7_clicked);
    connect(ui->eq, &QPushButton::clicked, this, &MainWindow::on_pushButton_18_clicked);
    connect(ui->pdf, &QPushButton::clicked, this, &MainWindow::on_pdf_clicked);  // Connect PDF button


}

MainWindow::~MainWindow()
{
    delete ui;
}

// Dialog handling functions
void MainWindow::showAddEmployeeDialog()
{
    QDialog empDialog(this);
    empDialog.setWindowTitle("Add Employee");
    empDialog.setModal(true);

    QFormLayout *layout = new QFormLayout(&empDialog);
    QLineEdit *nameEdit = new QLineEdit(&empDialog);
    QLineEdit *idEdit = new QLineEdit(&empDialog);
    QLineEdit *roleEdit = new QLineEdit(&empDialog);

    layout->addRow("Name:", nameEdit);
    layout->addRow("ID:", idEdit);
    layout->addRow("Role:", roleEdit);

    QDialogButtonBox *buttonBox = new QDialogButtonBox(
        QDialogButtonBox::Ok | QDialogButtonBox::Cancel,
        Qt::Horizontal, &empDialog);
    layout->addRow(buttonBox);

    connect(buttonBox, &QDialogButtonBox::accepted, &empDialog, &QDialog::accept);
    connect(buttonBox, &QDialogButtonBox::rejected, &empDialog, &QDialog::reject);

    if (empDialog.exec() == QDialog::Accepted) {
        QSqlQuery query;
        query.prepare("INSERT INTO employees (name, id, role) VALUES (:name, :id, :role)");
        query.bindValue(":name", nameEdit->text());
        query.bindValue(":id", idEdit->text());
        query.bindValue(":role", roleEdit->text());

        if (query.exec()) {
            QMessageBox::information(this, "Success", "Employee added successfully!");
            // Refresh employee table
            // Add code to refresh the table here
        } else {
            QMessageBox::critical(this, "Error", "Failed to add employee!");
        }
    }
}

void MainWindow::showArduinoDialog()
{
    QDialog arduinoDialog(this);
    arduinoDialog.setWindowTitle("Arduino Configuration");
    arduinoDialog.setModal(true);

    QVBoxLayout *layout = new QVBoxLayout(&arduinoDialog);
    QPushButton *connectButton = new QPushButton("Connect to Arduino", &arduinoDialog);
    layout->addWidget(connectButton);

    connect(connectButton, &QPushButton::clicked, this, [&]() {
        // Add Arduino connection logic here
        QMessageBox::information(&arduinoDialog, "Arduino", "Connecting to Arduino...");
    });

    arduinoDialog.exec();
}

// Equipment page functions
void MainWindow::sortEquipmentTable(const QString &criteria)
{
    QSqlQueryModel* model = Etm.afficher();
    QString orderBy;

    if (criteria == "id") {
        orderBy = "id_eq ASC";
    } else if (criteria == "id DESC") {
        orderBy = "id_eq DESC";
    } else if (criteria == "etat") {
        orderBy = "etat_eq ASC";
    }

    if (!orderBy.isEmpty()) {
        QSqlQuery query;
        query.prepare("SELECT * FROM equipment ORDER BY " + orderBy);
        if (query.exec()) {
            model->setQuery(query);
            ui->afficher_eq->setModel(model);
        }
    }
}

void MainWindow::updateEquipmentPieChart()
{
    QMap<QString, int> stateCounts;
    int totalCount = 0;

    QSqlQuery query("SELECT etat_eq FROM equipment");
    while (query.next()) {
        QString state = query.value(0).toString();
        stateCounts[state]++;
        totalCount++;
    }

    QPieSeries *series = new QPieSeries();

    for (auto it = stateCounts.constBegin(); it != stateCounts.constEnd(); ++it) {
        QString label = QString("%1: %2%")
            .arg(it.key())
            .arg(QString::number((it.value() * 100.0) / totalCount, 'f', 1));
        QPieSlice *slice = series->append(label, it.value());

        // Set different colors for different states
        if (it.key() == "Good") {
            slice->setBrush(Qt::green);
        } else if (it.key() == "Bad") {
            slice->setBrush(Qt::red);
        } else if (it.key() == "Medium") {
            slice->setBrush(Qt::yellow);
        }
    }

    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Equipment State Distribution");
    chart->legend()->setVisible(true);
    chart->legend()->setAlignment(Qt::AlignRight);

    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    QFrame* frame = ui->frame_4;
    if (frame->layout()) {
        QLayoutItem* item;
        while ((item = frame->layout()->takeAt(0)) != nullptr) {
            delete item->widget();
            delete item;
        }
        delete frame->layout();
    }

    QVBoxLayout *layout = new QVBoxLayout(frame);
    layout->addWidget(chartView);
    frame->setLayout(layout);
}

// Button click handlers
void MainWindow::on_ad_emp_clicked()
{
    showAddEmployeeDialog();
}

void MainWindow::on_arduino_clicked()
{
    showArduinoDialog();
}

void MainWindow::on_comboBox_3_currentTextChanged(const QString &arg1)
{
    if (arg1 == "id") {        arduino arduino;
        arduino.setModal(true);
        arduino.exec();
    }
}

void MainWindow::on_search_by_textChanged(const QString &searchText)
{
    QSqlQueryModel* model = Etm.afficher();

    for(int row = 0; row < model->rowCount(); row++) {
        bool match = false;
        for(int col = 0; col < model->columnCount(); col++) {
            QString value = model->data(model->index(row, col)).toString();
            if (value.contains(searchText, Qt::CaseInsensitive)) {
                match = true;
                break;
            }
        }
        ui->afficher_eq->setRowHidden(row, !match);
    }
}

// generale functions



void MainWindow::resetButtonStyles()
{
    // Reset styles for all buttons to their default state
    QList<QPushButton*> buttons = {ui->home, ui->chat ,ui->pro, ui->cli, ui->eq, ui->emp, ui->deli};

    for (QPushButton* button : buttons) {
        button->setStyleSheet(
            "color: rgb(0, 0, 0);"
            "color: rgb(255, 255, 255);"
            "background-color: rgb(139, 21, 21);"
            "background-color: rgb(97, 0, 0);"
            "border: 2px solid black;"
            "border-radius: 15px;"
            ); // Reset to default style
    }
}

void MainWindow::setButtonStyle(QPushButton* button)
{
    button->setStyleSheet(
        "color: rgb(0, 0, 0);"
        "background-color: rgb(171, 168, 111);"
        "border: 2px solid black;"
        "border-radius: 15px;"
        );
}


void MainWindow::toggleButtonsVisibility()
{
    // Toggle the visibility state
    buttonsVisible = !buttonsVisible;

    // Set the visibility of all buttons based on the new state
    ui->home->setVisible(buttonsVisible);
    ui->pro->setVisible(buttonsVisible);
    ui->cli->setVisible(buttonsVisible);
    ui->eq->setVisible(buttonsVisible);
    ui->emp->setVisible(buttonsVisible);
    ui->deli->setVisible(buttonsVisible);
    ui->chat->setVisible(!buttonsVisible);
}

// meu button
void MainWindow::on_meu_button_clicked()
{
    toggleButtonsVisibility();
}

// Main navigation buttons
void MainWindow::on_home_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);  // Home page
    resetButtonStyles();
    setButtonStyle(ui->home);
}

void MainWindow::on_eq_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_eq);  // Equipment page
    resetButtonStyles();
    setButtonStyle(ui->eq);
}

void MainWindow::on_emp_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_emp);  // Employee page
    resetButtonStyles();
    setButtonStyle(ui->emp);
}

void MainWindow::on_cli_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_cli);  // Client page
    resetButtonStyles();
    setButtonStyle(ui->cli);
}

void MainWindow::on_pro_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_product);  // Product page
    resetButtonStyles();
    setButtonStyle(ui->pro);
}

void MainWindow::on_deli_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_del);  // Delivery page
    resetButtonStyles();
    setButtonStyle(ui->deli);
}

// Equipment page navigation
void MainWindow::on_pushButton_7_clicked()
{
    ui->equipments->setCurrentWidget(ui->mangepage);
}

void MainWindow::on_pushButton_18_clicked()
{
    ui->equipments->setCurrentWidget(ui->mangepage);
}

void MainWindow::on_pushButton_12_clicked()
{
    ui->equipments->setCurrentWidget(ui->listpage);
}

void MainWindow::on_pushButton_16_clicked()
{
    ui->equipments->setCurrentWidget(ui->listpage);
}

void MainWindow::on_pushButton_11_clicked()
{
    ui->equipments->setCurrentWidget(ui->statisticspage);
    updateEquipmentPieChart();
}


void MainWindow::on_pushButton_10_clicked()
{
    ui->equipments->setCurrentWidget(ui->statisticspage);
    updateEquipmentPieChart();
}



void MainWindow::on_sort_clicked()
{
    QString criteria = ui->category->currentText();
    sortEquipmentTable(criteria);
}

void MainWindow::on_delete_3_clicked()
{
    delate delate ;
    delate.setModal(true);
    delate.exec();

}



void MainWindow::recherche_eq()
{
    // Get the search text from the line edit
    QString searchText = ui->search_by->text();

    // Get the equipment table view model
    QSqlQueryModel* model = Etm.afficher();

    // Apply filter to each row
    for(int row = 0; row < model->rowCount(); row++) {
        bool match = false;
        for(int col = 0; col < model->columnCount(); col++) {
            QString value = model->data(model->index(row, col)).toString();
            if(value.contains(searchText, Qt::CaseInsensitive)) {
                match = true;
                break;
            }
        }
        if(!match) {
            ui->afficher_eq->hideRow(row);
        } else {
            ui->afficher_eq->showRow(row);
        }
    }
}

void MainWindow::on_chat_clicked()
{
    Chatbot chatbot;
    chatbot.startChat();
    QWidget chatbotWindow;
    chatbotWindow.setWindowTitle("C.A.I Chatbot");
    chatbotWindow.resize(300, 200);
    chatbotWindow.show();
}

void MainWindow::on_pdf_clicked()
{
    QString strStream;
    QTextStream out(&strStream);

    const int rowCount = ui->afficher_eq->model()->rowCount();
    const int columnCount = ui->afficher_eq->model()->columnCount();

    out << "<html>\n"
        << "<head>\n"
        << "<meta Content=\"Text/html; charset=Windows-1251\">\n"
        << QString("<title>%1</title>\n").arg("Equipment List")
        << "</head>\n"
        << "<body bgcolor=#ffffff link=#5000A0>\n"
        << "<h1>Equipment List</h1>\n"
        << "<table border=1 cellspacing=0 cellpadding=2>\n";

    // Headers
    out << "<thead><tr bgcolor=#f0f0f0>";
    for (int column = 0; column < columnCount; column++) {
        out << QString("<th>%1</th>").arg(ui->afficher_eq->model()->headerData(column, Qt::Horizontal).toString());
    }
    out << "</tr></thead>\n";

    // Data
    for (int row = 0; row < rowCount; row++) {
        out << "<tr>";
        for (int column = 0; column < columnCount; column++) {
            QString data = ui->afficher_eq->model()->data(ui->afficher_eq->model()->index(row, column)).toString().simplified();
            out << QString("<td>%1</td>").arg((!data.isEmpty()) ? data : QString("&nbsp;"));
        }
        out << "</tr>\n";
    }
    out << "</table>\n"
        << "</body>\n"
        << "</html>\n";

    QTextDocument *document = new QTextDocument();
    document->setHtml(strStream);

    QString fileName = QFileDialog::getSaveFileName(this, "Export PDF", QString(), "*.pdf");
    if (!fileName.isEmpty()) {
        if (QFileInfo(fileName).suffix().isEmpty()) {
            fileName.append(".pdf");
        }

        QPrinter printer(QPrinter::PrinterResolution);
        printer.setOutputFormat(QPrinter::PdfFormat);
        printer.setOutputFileName(fileName);
        document->print(&printer);
    }

    delete document;
    QMessageBox::information(this, "Success", "PDF has been generated successfully!");
}

void MainWindow::on_ad_clicked()
{
    Dialog dialog(this);
    dialog.setModal(true);
    if (dialog.exec() == QDialog::Accepted) {
        ui->afficher_eq->setModel(Etm.afficher());
    }
}

void MainWindow::on_delete_clicked()
{
    delate delate;
    delate.setModal(true);
    if (delate.exec() == QDialog::Accepted) {
        ui->afficher_eq->setModel(Etm.afficher());
    }
}

void MainWindow::on_search_clicked()
{
    recherche_eq();
}

void MainWindow::on_edit_clicked()
{
    edit edit;
    edit.setModal(true);
    edit.exec();
    ui->afficher_eq->setModel(Etm.afficher());
}

void MainWindow::on_delet_clicked()
{
    QModelIndexList selectedRows = ui->afficher_eq->selectionModel()->selectedRows();
    if (selectedRows.isEmpty()) {
        QMessageBox::warning(this, "No Selection", "Please select a row to delete.");
        return;
    }

    int row = selectedRows.first().row();
    int id_eq = ui->afficher_eq->model()->index(row, 0).data().toInt();

    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Delete", "Are you sure you want to delete this equipment?",
                                  QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        Equipment Eq;
        if (Eq.supprimer(id_eq)) {
            QMessageBox::information(this, "Success", "Equipment deleted successfully.");
            ui->afficher_eq->setModel(Etm.afficher());
        } else {
            QMessageBox::warning(this, "Error", "Failed to delete equipment.");
        }
    }
}






//employees

void MainWindow::on_emp_list_button_3_clicked()
{
  ui->employees->setCurrentWidget(ui->listpage_emp);
}


void MainWindow::on_emp_mange_button_3_clicked()
{
    ui->employees->setCurrentWidget(ui->mangepage_emp);
}


void MainWindow::on_emp_statis_button_2_clicked()
{
    ui->employees->setCurrentWidget(ui->statisticspage_emp);

}

