#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "equipment.h"
#include "arduino.h"
#include <QMainWindow>
#include <QObject>
#include "ui_mainwindow.h"
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

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    // Dialog functions
    void showAddEmployeeDialog();
    void showArduinoDialog();

    // Equipment functions
    void sortEquipmentTable(const QString &criteria);
    void updateEquipmentPieChart();
    void recherche_eq();
    void on_ad_clicked();
    void on_delete_clicked();
    void on_search_clicked();
    void on_edit_clicked();
    void on_delet_clicked();

    // Navigation buttons
    void on_home_clicked();
    void on_eq_clicked();
    void on_emp_clicked();
    void on_cli_clicked();
    void on_pro_clicked();
    void on_deli_clicked();
    void on_chat_clicked();
    void on_arduino_clicked();
    void on_meu_button_clicked();

    // Equipment page navigation
    void on_pushButton_7_clicked();
    void on_pushButton_18_clicked();
    void on_pushButton_16_clicked();
    void on_pushButton_11_clicked();
    void on_pushButton_10_clicked();
    void on_pushButton_12_clicked();


    // Other UI handlers
    void on_pdf_clicked();
    void on_delete_3_clicked();
    void on_sort_clicked();
    void on_search_by_textChanged(const QString &searchText);
    void on_comboBox_3_currentTextChanged(const QString &arg1);

    void on_emp_list_button_3_clicked();

    void on_emp_mange_button_3_clicked();

    void on_emp_statis_button_2_clicked();
    void on_ad_emp_clicked();

private:
    Ui::MainWindow *ui;
    Equipment Etm;
    bool buttonsVisible;

    void resetButtonStyles();
    void setButtonStyle(QPushButton* button);
    void toggleButtonsVisibility();
};

#endif // MAINWINDOW_H
