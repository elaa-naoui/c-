/********************************************************************************
** Form generated from reading UI file 'livraison.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIVRAISON_H
#define UI_LIVRAISON_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *livraison;
    QFrame *frame_2;
    QFrame *frame_deli;
    QLineEdit *lineEdit_3deli;
    QLabel *label_5deli;
    QLabel *label_19deli;
    QToolButton *ADDDELIVERY;
    QToolButton *DList;
    QLabel *label_15deli;
    QToolButton *histodeli;
    QToolButton *statdeliv;
    QStackedWidget *stackedWidgetdeli;
    QWidget *LISTdeli;
    QToolButton *Searchdeli;
    QLineEdit *SEARCHline;
    QToolButton *FILTERdeli;
    QToolButton *EDITdeli;
    QToolButton *DELETEdeli;
    QToolButton *PDFdeli;
    QLabel *labelpdfdeli;
    QLabel *label_20deli;
    QWidget *Adddeli;
    QWidget *ADDdeli;
    QLineEdit *IDdeliv;
    QLineEdit *IDLIVlineditdeli;
    QLineEdit *lineEdit_11deli;
    QLineEdit *lineEdit_12deli;
    QLineEdit *lineEdit_13deli;
    QLineEdit *LSlineditdeli;
    QLineEdit *lineEdit_25deli;
    QLineEdit *lineEdit_27deli;
    QLineEdit *lineEdit_28deli;
    QLineEdit *ADdeli;
    QLineEdit *lineEdit_22deli;
    QComboBox *ETdeli;
    QDateEdit *DATEdeli;
    QLineEdit *FNdeli;
    QLineEdit *LSdeli;
    QLineEdit *NUMdeli;
    QLineEdit *PRdeli;
    QToolButton *CONFIRMdeli;
    QToolButton *CANCELdeli;
    QLabel *idWarningIcondeli;
    QLineEdit *ID_2deliv;
    QLineEdit *IDClinedeli;
    QLabel *idWarningIcon_2deli;
    QWidget *STATwdeli;
    QWidget *historique;
    QLabel *label_17deli;
    QWidget *sms;
    QWidget *clients;
    QFrame *frame_2_client;
    QLabel *label_13_client;
    QLineEdit *lineEdit_3_client;
    QLineEdit *lineEdit_5_client;
    QPushButton *List_Button_client;
    QLabel *label_16_client;
    QPushButton *Add_Button_client;
    QPushButton *Stat_Button_client;
    QStackedWidget *stackedWidget_client;
    QWidget *list_view_client;
    QPushButton *Search_Button_client;
    QLineEdit *lineEdit_7_client;
    QLineEdit *Search_line_edit_client;
    QPushButton *Edit_Button_client;
    QPushButton *Delete_Button_client;
    QTableView *tableView_client;
    QPushButton *pdf_Button_client;
    QComboBox *sort_criterion_client;
    QPushButton *Sort_Button_client;
    QPushButton *cancel_search_button_client;
    QPushButton *messaging_Button_client;
    QWidget *Add_client;
    QWidget *widget_client;
    QLineEdit *id_add_client;
    QLineEdit *lineEdit_10_client;
    QLineEdit *lineEdit_12_client;
    QLineEdit *lineEdit_13_client;
    QLineEdit *lineEdit_14_client;
    QLineEdit *lineEdit_25_client;
    QLineEdit *lineEdit_28_client;
    QLineEdit *Add_Nom_client;
    QLineEdit *Add_Address_client;
    QLineEdit *Add_email_client;
    QLineEdit *Add_Phone_client;
    QDateEdit *birthdate_add_client;
    QPushButton *Confirm_Add_Button_client;
    QPushButton *cancel_search_button_3_client;
    QLineEdit *lineEdit_15_client;
    QLineEdit *lineEdit_16_client;
    QLineEdit *Add_firstname_client;
    QLineEdit *Add_region_client;
    QWidget *Edit_client;
    QWidget *widget_2_client;
    QLineEdit *id_edit_client;
    QLineEdit *lineEdit_35_client;
    QLineEdit *lineEdit_38_client;
    QLineEdit *lineEdit_39_client;
    QLineEdit *lineEdit_40_client;
    QLineEdit *lineEdit_43_client;
    QLineEdit *nom_edit_client;
    QLineEdit *email_edit_client;
    QLineEdit *tel_edit_client;
    QDateEdit *birthdate_edit_client;
    QPushButton *Confirm_Edit_Button_client;
    QPushButton *cancel_search_button_2_client;
    QLineEdit *adr_edit_client;
    QLineEdit *lineEdit_42_client;
    QLineEdit *lineEdit_41_client;
    QLineEdit *lineEdit_44_client;
    QLineEdit *region_edit_client;
    QLineEdit *firstname_edit_client;
    QWidget *Stat_client;
    QWidget *messaging_client;
    QWidget *page_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1401, 844);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(9, 19, 1351, 771));
        livraison = new QWidget();
        livraison->setObjectName("livraison");
        frame_2 = new QFrame(livraison);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(60, 10, 1181, 751));
        frame_2->setMaximumSize(QSize(1200, 1200));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        frame_2->setPalette(palette);
        frame_2->setStyleSheet(QString::fromUtf8("#frame_2{\n"
"border: 2px solid;\n"
"border-color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 249, 231);\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius: 15px;\n"
"}"));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        frame_deli = new QFrame(frame_2);
        frame_deli->setObjectName("frame_deli");
        frame_deli->setGeometry(QRect(20, 10, 1131, 701));
        frame_deli->setMaximumSize(QSize(1200, 1200));
        QPalette palette1;
        frame_deli->setPalette(palette1);
        frame_deli->setStyleSheet(QString::fromUtf8("#frame_2 {\n"
"    border: 2px solid;\n"
"    border-color: rgb(0, 0, 0);\n"
"    background-color:rgb(255, 170, 255); /* Arri\303\250re-plan blanc */\n"
"    border-radius: 15px;\n"
"    padding: 10px; /* Ajout de padding pour mieux voir l'effet */\n"
"}\n"
""));
        frame_deli->setFrameShape(QFrame::Shape::StyledPanel);
        frame_deli->setFrameShadow(QFrame::Shadow::Raised);
        lineEdit_3deli = new QLineEdit(frame_deli);
        lineEdit_3deli->setObjectName("lineEdit_3deli");
        lineEdit_3deli->setGeometry(QRect(1000, 50, 113, 28));
        lineEdit_3deli->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 249, 231);\n"
"font: 20pt \"Rage Italic\";\n"
"color: rgb(148, 125, 66);"));
        lineEdit_3deli->setDragEnabled(false);
        label_5deli = new QLabel(frame_deli);
        label_5deli->setObjectName("label_5deli");
        label_5deli->setGeometry(QRect(30, 30, 51, 51));
        label_5deli->setPixmap(QPixmap(QString::fromUtf8("../Downloads/complete.png")));
        label_5deli->setScaledContents(true);
        label_19deli = new QLabel(frame_deli);
        label_19deli->setObjectName("label_19deli");
        label_19deli->setGeometry(QRect(410, 40, 61, 51));
        label_19deli->setPixmap(QPixmap(QString::fromUtf8("../Downloads/line-graph-removebg-preview.png")));
        label_19deli->setScaledContents(true);
        ADDDELIVERY = new QToolButton(frame_deli);
        ADDDELIVERY->setObjectName("ADDDELIVERY");
        ADDDELIVERY->setGeometry(QRect(240, 30, 141, 61));
        ADDDELIVERY->setContextMenuPolicy(Qt::ContextMenuPolicy::NoContextMenu);
        ADDDELIVERY->setAutoFillBackground(false);
        ADDDELIVERY->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"    background-color: rgb(168, 165, 109); /* Couleur moutarde */\n"
"    color: #rgb(255, 255, 255); /* Texte noir */\n"
"    border-radius: 25px; /* Coins arrondis */\n"
"    border: 1px solid #000000; /* Bordure grise */\n"
"    font-family: \"MV Boli\";; /* Police */\n"
"    font-size: 17px; /* Taille}"));
        ADDDELIVERY->setCheckable(false);
        ADDDELIVERY->setAutoRaise(false);
        DList = new QToolButton(frame_deli);
        DList->setObjectName("DList");
        DList->setGeometry(QRect(50, 30, 141, 61));
        QPalette palette2;
        QBrush brush1(QColor(250, 250, 250, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        QBrush brush2(QColor(168, 165, 109, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush2);
        QBrush brush3(QColor(208, 208, 208, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        QBrush brush4(QColor(164, 166, 168, 96));
        brush4.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        DList->setPalette(palette2);
        DList->setContextMenuPolicy(Qt::ContextMenuPolicy::NoContextMenu);
        DList->setAutoFillBackground(false);
        DList->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"    background-color: rgb(168, 165, 109); /* Couleur moutarde */\n"
"    color: #rgb(255, 255, 255); /* Texte noir */\n"
"    border-radius: 25px; /* Coins arrondis */\n"
"    border: 1px solid #000000; /* Bordure grise */\n"
"    font-family: \"MV Boli\";; /* Police */\n"
"    font-size: 17px; /* Taille}"));
        DList->setCheckable(false);
        DList->setAutoRaise(false);
        label_15deli = new QLabel(frame_deli);
        label_15deli->setObjectName("label_15deli");
        label_15deli->setGeometry(QRect(210, 40, 61, 41));
        label_15deli->setPixmap(QPixmap(QString::fromUtf8("../Downloads/Capture_d_\303\251cran_2024-11-08_021453-removebg-preview.png")));
        histodeli = new QToolButton(frame_deli);
        histodeli->setObjectName("histodeli");
        histodeli->setGeometry(QRect(620, 30, 131, 61));
        histodeli->setContextMenuPolicy(Qt::ContextMenuPolicy::NoContextMenu);
        histodeli->setAutoFillBackground(false);
        histodeli->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"    background-color: rgb(168, 165, 109); /* Couleur moutarde */\n"
"    color: #rgb(255, 255, 255); /* Texte noir */\n"
"    border-radius: 25px; /* Coins arrondis */\n"
"    border: 1px solid #000000; /* Bordure grise */\n"
"    font-family: \"MV Boli\";; /* Police */\n"
"    font-size: 17px; /* Taille}"));
        histodeli->setCheckable(false);
        histodeli->setAutoRaise(false);
        statdeliv = new QToolButton(frame_deli);
        statdeliv->setObjectName("statdeliv");
        statdeliv->setGeometry(QRect(440, 30, 141, 61));
        statdeliv->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"    background-color: rgb(168, 165, 109); /* Couleur moutarde */\n"
"    color: #rgb(255, 255, 255); /* Texte noir */\n"
"    border-radius: 25px; /* Coins arrondis */\n"
"    border: 1px solid #000000; /* Bordure grise */\n"
"    font-family: \"MV Boli\";; /* Police */\n"
"    font-size: 17px; /* Taille}"));
        stackedWidgetdeli = new QStackedWidget(frame_deli);
        stackedWidgetdeli->setObjectName("stackedWidgetdeli");
        stackedWidgetdeli->setGeometry(QRect(10, 120, 941, 581));
        LISTdeli = new QWidget();
        LISTdeli->setObjectName("LISTdeli");
        Searchdeli = new QToolButton(LISTdeli);
        Searchdeli->setObjectName("Searchdeli");
        Searchdeli->setGeometry(QRect(60, 30, 111, 31));
        Searchdeli->setStyleSheet(QString::fromUtf8("background-color: rgb(17, 107, 77);"));
        SEARCHline = new QLineEdit(LISTdeli);
        SEARCHline->setObjectName("SEARCHline");
        SEARCHline->setGeometry(QRect(190, 30, 161, 31));
        SEARCHline->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(247, 255, 229);\n"
"\n"
""));
        FILTERdeli = new QToolButton(LISTdeli);
        FILTERdeli->setObjectName("FILTERdeli");
        FILTERdeli->setGeometry(QRect(780, 40, 121, 51));
        FILTERdeli->setContextMenuPolicy(Qt::ContextMenuPolicy::NoContextMenu);
        FILTERdeli->setAutoFillBackground(false);
        FILTERdeli->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"    background-color: #127353; /* Couleur moutarde */\n"
"    color: #rgb(255, 255, 255); /* Texte noir */\n"
"    border-radius: 20px; /* Coins arrondis */\n"
"    border: 1px solid #000000; /* Bordure grise */\n"
"    font-family: \"MV Boli\";; /* Police */\n"
"    font-size: 17px; /* Taille}"));
        FILTERdeli->setCheckable(false);
        FILTERdeli->setAutoRaise(false);
        EDITdeli = new QToolButton(LISTdeli);
        EDITdeli->setObjectName("EDITdeli");
        EDITdeli->setGeometry(QRect(770, 110, 141, 61));
        EDITdeli->setContextMenuPolicy(Qt::ContextMenuPolicy::NoContextMenu);
        EDITdeli->setAutoFillBackground(false);
        EDITdeli->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"    background-color: rgb(68, 189, 133); /* Couleur moutarde */\n"
"    color: #rgb(255, 255, 255); /* Texte noir */\n"
"    border-radius: 27px; /* Coins arrondis */\n"
"    border: 1px solid #000000; /* Bordure grise */\n"
"    font-family: \"MV Boli\";; /* Police */\n"
"    font-size: 17px; /* Taille}"));
        EDITdeli->setCheckable(false);
        EDITdeli->setAutoRaise(false);
        DELETEdeli = new QToolButton(LISTdeli);
        DELETEdeli->setObjectName("DELETEdeli");
        DELETEdeli->setGeometry(QRect(780, 190, 141, 61));
        DELETEdeli->setContextMenuPolicy(Qt::ContextMenuPolicy::NoContextMenu);
        DELETEdeli->setAutoFillBackground(false);
        DELETEdeli->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"    background-color: rgb(68, 189, 133); /* Couleur moutarde */\n"
"    color: #rgb(255, 255, 255); /* Texte noir */\n"
"    border-radius: 27px; /* Coins arrondis */\n"
"    border: 1px solid #000000; /* Bordure grise */\n"
"    font-family: \"MV Boli\";; /* Police */\n"
"    font-size: 17px; /* Taille}"));
        DELETEdeli->setCheckable(false);
        DELETEdeli->setAutoRaise(false);
        PDFdeli = new QToolButton(LISTdeli);
        PDFdeli->setObjectName("PDFdeli");
        PDFdeli->setGeometry(QRect(780, 260, 141, 61));
        PDFdeli->setContextMenuPolicy(Qt::ContextMenuPolicy::NoContextMenu);
        PDFdeli->setAutoFillBackground(false);
        PDFdeli->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"    background-color: rgb(68, 189, 133); /* Couleur moutarde */\n"
"    color: #rgb(255, 255, 255); /* Texte noir */\n"
"    border-radius: 27px; /* Coins arrondis */\n"
"    border: 1px solid #000000; /* Bordure grise */\n"
"    font-family: \"MV Boli\";; /* Police */\n"
"    font-size: 17px; /* Taille}"));
        PDFdeli->setCheckable(false);
        PDFdeli->setAutoRaise(false);
        labelpdfdeli = new QLabel(LISTdeli);
        labelpdfdeli->setObjectName("labelpdfdeli");
        labelpdfdeli->setGeometry(QRect(750, 260, 61, 51));
        labelpdfdeli->setPixmap(QPixmap(QString::fromUtf8("../Downloads/pdf-file.png")));
        labelpdfdeli->setScaledContents(true);
        label_20deli = new QLabel(LISTdeli);
        label_20deli->setObjectName("label_20deli");
        label_20deli->setGeometry(QRect(760, 190, 51, 51));
        label_20deli->setPixmap(QPixmap(QString::fromUtf8("../Downloads/bin.png")));
        label_20deli->setScaledContents(true);
        stackedWidgetdeli->addWidget(LISTdeli);
        Adddeli = new QWidget();
        Adddeli->setObjectName("Adddeli");
        ADDdeli = new QWidget(Adddeli);
        ADDdeli->setObjectName("ADDdeli");
        ADDdeli->setGeometry(QRect(40, 10, 851, 471));
        ADDdeli->setStyleSheet(QString::fromUtf8("border:2px solid green;\n"
"border-radius: 20px;\n"
""));
        IDdeliv = new QLineEdit(ADDdeli);
        IDdeliv->setObjectName("IDdeliv");
        IDdeliv->setGeometry(QRect(210, 70, 161, 41));
        IDdeliv->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border_radius:10px;"));
        IDLIVlineditdeli = new QLineEdit(ADDdeli);
        IDLIVlineditdeli->setObjectName("IDLIVlineditdeli");
        IDLIVlineditdeli->setGeometry(QRect(70, 80, 121, 28));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        IDLIVlineditdeli->setFont(font);
        IDLIVlineditdeli->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"\n"
"border-color: rgb(255, 255, 255);"));
        lineEdit_11deli = new QLineEdit(ADDdeli);
        lineEdit_11deli->setObjectName("lineEdit_11deli");
        lineEdit_11deli->setGeometry(QRect(70, 290, 121, 28));
        lineEdit_11deli->setFont(font);
        lineEdit_11deli->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"\n"
"border-color: rgb(255, 255, 255);"));
        lineEdit_12deli = new QLineEdit(ADDdeli);
        lineEdit_12deli->setObjectName("lineEdit_12deli");
        lineEdit_12deli->setGeometry(QRect(70, 214, 121, 28));
        lineEdit_12deli->setFont(font);
        lineEdit_12deli->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"\n"
"border-color: rgb(255, 255, 255);"));
        lineEdit_13deli = new QLineEdit(ADDdeli);
        lineEdit_13deli->setObjectName("lineEdit_13deli");
        lineEdit_13deli->setGeometry(QRect(70, 360, 121, 28));
        lineEdit_13deli->setFont(font);
        lineEdit_13deli->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"\n"
"border-color: rgb(255, 255, 255);"));
        LSlineditdeli = new QLineEdit(ADDdeli);
        LSlineditdeli->setObjectName("LSlineditdeli");
        LSlineditdeli->setGeometry(QRect(70, 150, 121, 28));
        LSlineditdeli->setFont(font);
        LSlineditdeli->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"\n"
"border-color: rgb(255, 255, 255);"));
        lineEdit_25deli = new QLineEdit(ADDdeli);
        lineEdit_25deli->setObjectName("lineEdit_25deli");
        lineEdit_25deli->setGeometry(QRect(430, 80, 131, 28));
        lineEdit_25deli->setFont(font);
        lineEdit_25deli->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"\n"
"border-color: rgb(255, 255, 255);"));
        lineEdit_27deli = new QLineEdit(ADDdeli);
        lineEdit_27deli->setObjectName("lineEdit_27deli");
        lineEdit_27deli->setGeometry(QRect(430, 214, 131, 28));
        lineEdit_27deli->setFont(font);
        lineEdit_27deli->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"\n"
"border-color: rgb(255, 255, 255);"));
        lineEdit_28deli = new QLineEdit(ADDdeli);
        lineEdit_28deli->setObjectName("lineEdit_28deli");
        lineEdit_28deli->setGeometry(QRect(430, 150, 131, 28));
        lineEdit_28deli->setFont(font);
        lineEdit_28deli->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"\n"
"border-color: rgb(255, 255, 255);"));
        ADdeli = new QLineEdit(ADDdeli);
        ADdeli->setObjectName("ADdeli");
        ADdeli->setGeometry(QRect(210, 360, 161, 41));
        ADdeli->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border_radius:10px;"));
        lineEdit_22deli = new QLineEdit(ADDdeli);
        lineEdit_22deli->setObjectName("lineEdit_22deli");
        lineEdit_22deli->setGeometry(QRect(590, 210, 161, 51));
        lineEdit_22deli->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border_radius:10px;"));
        ETdeli = new QComboBox(ADDdeli);
        ETdeli->addItem(QString());
        ETdeli->addItem(QString());
        ETdeli->addItem(QString());
        ETdeli->setObjectName("ETdeli");
        ETdeli->setGeometry(QRect(590, 210, 161, 51));
        ETdeli->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 3px solid green;   /* Bordure verte de 3px */\n"
"    border-radius: 20px;       /* Coins arrondis */\n"
"    background-color: white;   /* Fond blanc */\n"
"    padding: 10px 20px;        /* Ajout d'espace int\303\251rieur pour le texte */\n"
"}\n"
""));
        DATEdeli = new QDateEdit(ADDdeli);
        DATEdeli->setObjectName("DATEdeli");
        DATEdeli->setGeometry(QRect(590, 150, 151, 41));
        DATEdeli->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border_radius:10px;"));
        FNdeli = new QLineEdit(ADDdeli);
        FNdeli->setObjectName("FNdeli");
        FNdeli->setGeometry(QRect(210, 140, 161, 41));
        FNdeli->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border_radius:10px;"));
        LSdeli = new QLineEdit(ADDdeli);
        LSdeli->setObjectName("LSdeli");
        LSdeli->setGeometry(QRect(210, 210, 161, 41));
        LSdeli->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border_radius:10px;"));
        NUMdeli = new QLineEdit(ADDdeli);
        NUMdeli->setObjectName("NUMdeli");
        NUMdeli->setGeometry(QRect(210, 280, 161, 41));
        NUMdeli->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border_radius:10px;"));
        PRdeli = new QLineEdit(ADDdeli);
        PRdeli->setObjectName("PRdeli");
        PRdeli->setGeometry(QRect(590, 80, 161, 41));
        PRdeli->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border_radius:10px;"));
        CONFIRMdeli = new QToolButton(ADDdeli);
        CONFIRMdeli->setObjectName("CONFIRMdeli");
        CONFIRMdeli->setGeometry(QRect(420, 370, 141, 61));
        CONFIRMdeli->setContextMenuPolicy(Qt::ContextMenuPolicy::NoContextMenu);
        CONFIRMdeli->setAutoFillBackground(false);
        CONFIRMdeli->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"    background-color: rgb(59, 211, 135); /* Couleur verte */\n"
"    color: rgb(255, 255, 255); /* Texte blanc */\n"
"    border-radius: 25px; /* Coins arrondis */\n"
"    border: 1px solid #000000; /* Bordure noire */\n"
"    font-family: \"MV Boli\"; /* Police */\n"
"    font-size: 17px; /* Taille */\n"
"}\n"
""));
        CONFIRMdeli->setCheckable(false);
        CONFIRMdeli->setAutoRaise(false);
        CANCELdeli = new QToolButton(ADDdeli);
        CANCELdeli->setObjectName("CANCELdeli");
        CANCELdeli->setGeometry(QRect(640, 370, 141, 61));
        CANCELdeli->setContextMenuPolicy(Qt::ContextMenuPolicy::NoContextMenu);
        CANCELdeli->setAutoFillBackground(false);
        CANCELdeli->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"    background-color: rgb(59, 211, 135); /* Couleur verte */\n"
"    color: rgb(255, 255, 255); /* Texte blanc */\n"
"    border-radius: 25px; /* Coins arrondis */\n"
"    border: 1px solid #000000; /* Bordure noire */\n"
"    font-family: \"MV Boli\"; /* Police */\n"
"    font-size: 17px; /* Taille */\n"
"}\n"
""));
        CANCELdeli->setCheckable(false);
        CANCELdeli->setAutoRaise(false);
        idWarningIcondeli = new QLabel(ADDdeli);
        idWarningIcondeli->setObjectName("idWarningIcondeli");
        idWarningIcondeli->setGeometry(QRect(70, 120, 121, 20));
        ID_2deliv = new QLineEdit(ADDdeli);
        ID_2deliv->setObjectName("ID_2deliv");
        ID_2deliv->setGeometry(QRect(210, 10, 161, 41));
        ID_2deliv->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border_radius:10px;"));
        IDClinedeli = new QLineEdit(ADDdeli);
        IDClinedeli->setObjectName("IDClinedeli");
        IDClinedeli->setGeometry(QRect(70, 20, 121, 28));
        IDClinedeli->setFont(font);
        IDClinedeli->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"\n"
"border-color: rgb(255, 255, 255);"));
        idWarningIcon_2deli = new QLabel(ADDdeli);
        idWarningIcon_2deli->setObjectName("idWarningIcon_2deli");
        idWarningIcon_2deli->setGeometry(QRect(70, 60, 121, 20));
        stackedWidgetdeli->addWidget(Adddeli);
        STATwdeli = new QWidget();
        STATwdeli->setObjectName("STATwdeli");
        stackedWidgetdeli->addWidget(STATwdeli);
        historique = new QWidget();
        historique->setObjectName("historique");
        label_17deli = new QLabel(historique);
        label_17deli->setObjectName("label_17deli");
        label_17deli->setGeometry(QRect(100, 30, 731, 361));
        stackedWidgetdeli->addWidget(historique);
        sms = new QWidget();
        sms->setObjectName("sms");
        stackedWidgetdeli->addWidget(sms);
        ADDDELIVERY->raise();
        lineEdit_3deli->raise();
        DList->raise();
        label_5deli->raise();
        label_15deli->raise();
        histodeli->raise();
        statdeliv->raise();
        label_19deli->raise();
        stackedWidgetdeli->raise();
        stackedWidget->addWidget(livraison);
        clients = new QWidget();
        clients->setObjectName("clients");
        frame_2_client = new QFrame(clients);
        frame_2_client->setObjectName("frame_2_client");
        frame_2_client->setGeometry(QRect(10, 30, 1200, 721));
        frame_2_client->setMaximumSize(QSize(1200, 1200));
        frame_2_client->setStyleSheet(QString::fromUtf8("#frame_2{\n"
"border: 2px solid;\n"
"border-color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 249, 231);\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius: 15px;\n"
"}"));
        frame_2_client->setFrameShape(QFrame::Shape::NoFrame);
        label_13_client = new QLabel(frame_2_client);
        label_13_client->setObjectName("label_13_client");
        label_13_client->setGeometry(QRect(1110, 10, 63, 61));
        label_13_client->setPixmap(QPixmap(QString::fromUtf8("../Downloads/admin.png")));
        label_13_client->setScaledContents(true);
        lineEdit_3_client = new QLineEdit(frame_2_client);
        lineEdit_3_client->setObjectName("lineEdit_3_client");
        lineEdit_3_client->setGeometry(QRect(970, 20, 113, 31));
        lineEdit_3_client->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 249, 231);\n"
"font: 20pt \"Rage Italic\";\n"
"color: rgb(148, 125, 66);"));
        lineEdit_3_client->setDragEnabled(false);
        lineEdit_5_client = new QLineEdit(frame_2_client);
        lineEdit_5_client->setObjectName("lineEdit_5_client");
        lineEdit_5_client->setGeometry(QRect(540, 40, 151, 71));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("MV Boli")});
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setItalic(false);
        lineEdit_5_client->setFont(font1);
        lineEdit_5_client->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"font: 10pt ;\n"
"\n"
"\n"
"border-radius:30px;\n"
""));
        lineEdit_5_client->setFrame(true);
        lineEdit_5_client->setCursorPosition(12);
        lineEdit_5_client->setDragEnabled(false);
        lineEdit_5_client->setReadOnly(false);
        List_Button_client = new QPushButton(frame_2_client);
        List_Button_client->setObjectName("List_Button_client");
        List_Button_client->setGeometry(QRect(310, 40, 151, 71));
        List_Button_client->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"\n"
"color: rgb(255, 255, 255);\n"
"font: 10pt ;\n"
"\n"
"background-color: rgb(171, 168, 111);\n"
"\n"
"\n"
"\n"
"\n"
"border-radius:30px;\n"
""));
        label_16_client = new QLabel(frame_2_client);
        label_16_client->setObjectName("label_16_client");
        label_16_client->setGeometry(QRect(284, 50, 51, 51));
        label_16_client->setPixmap(QPixmap(QString::fromUtf8("../Downloads/complete.png")));
        label_16_client->setScaledContents(true);
        Add_Button_client = new QPushButton(frame_2_client);
        Add_Button_client->setObjectName("Add_Button_client");
        Add_Button_client->setGeometry(QRect(540, 40, 151, 71));
        Add_Button_client->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"\n"
"color: rgb(255, 255, 255);\n"
"font: 10pt ;\n"
"\n"
"background-color: rgb(171, 168, 111);\n"
"\n"
"\n"
"\n"
"\n"
"border-radius:30px;\n"
""));
        Stat_Button_client = new QPushButton(frame_2_client);
        Stat_Button_client->setObjectName("Stat_Button_client");
        Stat_Button_client->setGeometry(QRect(770, 40, 151, 71));
        Stat_Button_client->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"\n"
"color: rgb(255, 255, 255);\n"
"font: 10pt ;\n"
"\n"
"background-color: rgb(171, 168, 111);\n"
"\n"
"\n"
"\n"
"\n"
"border-radius:30px;\n"
""));
        stackedWidget_client = new QStackedWidget(clients);
        stackedWidget_client->setObjectName("stackedWidget_client");
        stackedWidget_client->setGeometry(QRect(30, 160, 1071, 591));
        stackedWidget_client->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        list_view_client = new QWidget();
        list_view_client->setObjectName("list_view_client");
        Search_Button_client = new QPushButton(list_view_client);
        Search_Button_client->setObjectName("Search_Button_client");
        Search_Button_client->setGeometry(QRect(210, 30, 91, 29));
        Search_Button_client->setStyleSheet(QString::fromUtf8("background-color: rgb(18, 115, 83);\n"
"color: rgb(255, 255, 255);"));
        lineEdit_7_client = new QLineEdit(list_view_client);
        lineEdit_7_client->setObjectName("lineEdit_7_client");
        lineEdit_7_client->setGeometry(QRect(340, 56, 111, 51));
        lineEdit_7_client->setFont(font1);
        lineEdit_7_client->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(0, 0, 0);\n"
"font: 10pt ;\n"
"\n"
"\n"
"border-radius:30px;\n"
""));
        lineEdit_7_client->setFrame(true);
        lineEdit_7_client->setCursorPosition(7);
        lineEdit_7_client->setDragEnabled(false);
        lineEdit_7_client->setReadOnly(false);
        Search_line_edit_client = new QLineEdit(list_view_client);
        Search_line_edit_client->setObjectName("Search_line_edit_client");
        Search_line_edit_client->setGeometry(QRect(40, 40, 161, 41));
        Search_line_edit_client->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(247, 255, 229);\n"
"\n"
""));
        Edit_Button_client = new QPushButton(list_view_client);
        Edit_Button_client->setObjectName("Edit_Button_client");
        Edit_Button_client->setGeometry(QRect(910, 180, 141, 71));
        Edit_Button_client->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"\n"
"color: rgb(255, 255, 255);\n"
"font: 10pt ;\n"
"\n"
"background-color: rgb(171, 168, 111);\n"
"background-color: rgb(68, 189, 133);\n"
"\n"
"\n"
"border-radius:30px;\n"
""));
        Delete_Button_client = new QPushButton(list_view_client);
        Delete_Button_client->setObjectName("Delete_Button_client");
        Delete_Button_client->setGeometry(QRect(910, 260, 141, 71));
        Delete_Button_client->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"\n"
"\n"
"color: rgb(255, 255, 255);\n"
"font: 10pt ;\n"
"\n"
"background-color: rgb(171, 168, 111);\n"
"background-color: rgb(126, 61, 64);\n"
"background-color: rgb(230, 57, 70);\n"
"\n"
"border-radius:30px;\n"
""));
        tableView_client = new QTableView(list_view_client);
        tableView_client->setObjectName("tableView_client");
        tableView_client->setGeometry(QRect(40, 110, 851, 421));
        tableView_client->setStyleSheet(QString::fromUtf8(""));
        pdf_Button_client = new QPushButton(list_view_client);
        pdf_Button_client->setObjectName("pdf_Button_client");
        pdf_Button_client->setGeometry(QRect(910, 340, 141, 71));
        pdf_Button_client->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"\n"
"\n"
"color: rgb(255, 255, 255);\n"
"font: 10pt ;\n"
"\n"
"background-color: rgb(171, 168, 111);\n"
"background-color: rgb(126, 61, 64);\n"
"background-color: rgb(230, 57, 70);\n"
"\n"
"border-radius:30px;\n"
""));
        sort_criterion_client = new QComboBox(list_view_client);
        sort_criterion_client->addItem(QString());
        sort_criterion_client->addItem(QString());
        sort_criterion_client->setObjectName("sort_criterion_client");
        sort_criterion_client->setGeometry(QRect(480, 60, 101, 31));
        Sort_Button_client = new QPushButton(list_view_client);
        Sort_Button_client->setObjectName("Sort_Button_client");
        Sort_Button_client->setGeometry(QRect(590, 60, 121, 41));
        Sort_Button_client->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"\n"
"color: rgb(255, 255, 255);\n"
"font: 10pt ;\n"
"\n"
"background-color: rgb(171, 168, 111);\n"
"background-color: rgb(68, 189, 133);\n"
"\n"
"\n"
"border-radius:30px;\n"
""));
        cancel_search_button_client = new QPushButton(list_view_client);
        cancel_search_button_client->setObjectName("cancel_search_button_client");
        cancel_search_button_client->setGeometry(QRect(210, 70, 91, 29));
        cancel_search_button_client->setStyleSheet(QString::fromUtf8("background-color: rgb(18, 115, 83);\n"
"color: rgb(255, 255, 255);"));
        messaging_Button_client = new QPushButton(list_view_client);
        messaging_Button_client->setObjectName("messaging_Button_client");
        messaging_Button_client->setGeometry(QRect(920, 420, 131, 61));
        messaging_Button_client->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"\n"
"color: rgb(255, 255, 255);\n"
"font: 10pt ;\n"
"\n"
"background-color: rgb(171, 168, 111);\n"
"\n"
"\n"
"\n"
"\n"
"border-radius:30px;\n"
""));
        stackedWidget_client->addWidget(list_view_client);
        Add_client = new QWidget();
        Add_client->setObjectName("Add_client");
        widget_client = new QWidget(Add_client);
        widget_client->setObjectName("widget_client");
        widget_client->setGeometry(QRect(40, 10, 811, 551));
        widget_client->setStyleSheet(QString::fromUtf8("border:2px solid green;\n"
"border-radius: 20px;\n"
""));
        id_add_client = new QLineEdit(widget_client);
        id_add_client->setObjectName("id_add_client");
        id_add_client->setGeometry(QRect(210, 70, 151, 51));
        id_add_client->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border_radius:10px;"));
        lineEdit_10_client = new QLineEdit(widget_client);
        lineEdit_10_client->setObjectName("lineEdit_10_client");
        lineEdit_10_client->setGeometry(QRect(70, 80, 121, 28));
        lineEdit_10_client->setFont(font);
        lineEdit_10_client->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"\n"
"border-color: rgb(255, 255, 255);"));
        lineEdit_12_client = new QLineEdit(widget_client);
        lineEdit_12_client->setObjectName("lineEdit_12_client");
        lineEdit_12_client->setGeometry(QRect(440, 230, 121, 28));
        lineEdit_12_client->setFont(font);
        lineEdit_12_client->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"\n"
"border-color: rgb(255, 255, 255);"));
        lineEdit_13_client = new QLineEdit(widget_client);
        lineEdit_13_client->setObjectName("lineEdit_13_client");
        lineEdit_13_client->setGeometry(QRect(70, 290, 121, 28));
        lineEdit_13_client->setFont(font);
        lineEdit_13_client->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"\n"
"border-color: rgb(255, 255, 255);"));
        lineEdit_14_client = new QLineEdit(widget_client);
        lineEdit_14_client->setObjectName("lineEdit_14_client");
        lineEdit_14_client->setGeometry(QRect(70, 150, 121, 28));
        lineEdit_14_client->setFont(font);
        lineEdit_14_client->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"\n"
"border-color: rgb(255, 255, 255);"));
        lineEdit_25_client = new QLineEdit(widget_client);
        lineEdit_25_client->setObjectName("lineEdit_25_client");
        lineEdit_25_client->setGeometry(QRect(430, 80, 131, 28));
        lineEdit_25_client->setFont(font);
        lineEdit_25_client->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"\n"
"border-color: rgb(255, 255, 255);"));
        lineEdit_28_client = new QLineEdit(widget_client);
        lineEdit_28_client->setObjectName("lineEdit_28_client");
        lineEdit_28_client->setGeometry(QRect(430, 150, 131, 28));
        lineEdit_28_client->setFont(font);
        lineEdit_28_client->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"\n"
"border-color: rgb(255, 255, 255);"));
        Add_Nom_client = new QLineEdit(widget_client);
        Add_Nom_client->setObjectName("Add_Nom_client");
        Add_Nom_client->setGeometry(QRect(210, 140, 151, 51));
        Add_Nom_client->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border_radius:10px;"));
        Add_Address_client = new QLineEdit(widget_client);
        Add_Address_client->setObjectName("Add_Address_client");
        Add_Address_client->setGeometry(QRect(590, 220, 151, 51));
        Add_Address_client->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border_radius:10px;"));
        Add_email_client = new QLineEdit(widget_client);
        Add_email_client->setObjectName("Add_email_client");
        Add_email_client->setGeometry(QRect(590, 70, 151, 51));
        Add_email_client->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border_radius:10px;"));
        Add_Phone_client = new QLineEdit(widget_client);
        Add_Phone_client->setObjectName("Add_Phone_client");
        Add_Phone_client->setGeometry(QRect(590, 140, 151, 51));
        Add_Phone_client->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border_radius:10px;"));
        birthdate_add_client = new QDateEdit(widget_client);
        birthdate_add_client->setObjectName("birthdate_add_client");
        birthdate_add_client->setGeometry(QRect(210, 280, 151, 51));
        birthdate_add_client->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border_radius:10px;"));
        Confirm_Add_Button_client = new QPushButton(widget_client);
        Confirm_Add_Button_client->setObjectName("Confirm_Add_Button_client");
        Confirm_Add_Button_client->setGeometry(QRect(260, 440, 151, 71));
        Confirm_Add_Button_client->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"\n"
"\n"
"color: rgb(255, 255, 255);\n"
"font: 10pt ;\n"
"\n"
"background-color: rgb(171, 168, 111);\n"
"background-color: rgb(70, 148, 119);\n"
"\n"
"\n"
"\n"
"\n"
"border-radius:30px;\n"
""));
        cancel_search_button_3_client = new QPushButton(widget_client);
        cancel_search_button_3_client->setObjectName("cancel_search_button_3_client");
        cancel_search_button_3_client->setGeometry(QRect(490, 440, 151, 71));
        cancel_search_button_3_client->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"\n"
"\n"
"color: rgb(255, 255, 255);\n"
"font: 10pt ;\n"
"\n"
"background-color: rgb(171, 168, 111);\n"
"background-color: rgb(97, 0, 0);\n"
"\n"
"\n"
"\n"
"border-radius:30px;\n"
""));
        lineEdit_15_client = new QLineEdit(widget_client);
        lineEdit_15_client->setObjectName("lineEdit_15_client");
        lineEdit_15_client->setGeometry(QRect(60, 210, 121, 28));
        lineEdit_15_client->setFont(font);
        lineEdit_15_client->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"\n"
"border-color: rgb(255, 255, 255);"));
        lineEdit_16_client = new QLineEdit(widget_client);
        lineEdit_16_client->setObjectName("lineEdit_16_client");
        lineEdit_16_client->setGeometry(QRect(440, 310, 121, 28));
        lineEdit_16_client->setFont(font);
        lineEdit_16_client->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"\n"
"border-color: rgb(255, 255, 255);"));
        Add_firstname_client = new QLineEdit(widget_client);
        Add_firstname_client->setObjectName("Add_firstname_client");
        Add_firstname_client->setGeometry(QRect(210, 210, 151, 51));
        Add_firstname_client->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border_radius:10px;"));
        Add_region_client = new QLineEdit(widget_client);
        Add_region_client->setObjectName("Add_region_client");
        Add_region_client->setGeometry(QRect(590, 300, 151, 51));
        Add_region_client->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border_radius:10px;"));
        stackedWidget_client->addWidget(Add_client);
        Edit_client = new QWidget();
        Edit_client->setObjectName("Edit_client");
        widget_2_client = new QWidget(Edit_client);
        widget_2_client->setObjectName("widget_2_client");
        widget_2_client->setGeometry(QRect(40, 10, 811, 551));
        widget_2_client->setStyleSheet(QString::fromUtf8("border:2px solid green;\n"
"border-radius: 20px;\n"
""));
        id_edit_client = new QLineEdit(widget_2_client);
        id_edit_client->setObjectName("id_edit_client");
        id_edit_client->setGeometry(QRect(210, 70, 151, 51));
        id_edit_client->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border_radius:10px;"));
        lineEdit_35_client = new QLineEdit(widget_2_client);
        lineEdit_35_client->setObjectName("lineEdit_35_client");
        lineEdit_35_client->setGeometry(QRect(70, 80, 121, 28));
        lineEdit_35_client->setFont(font);
        lineEdit_35_client->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"\n"
"border-color: rgb(255, 255, 255);"));
        lineEdit_38_client = new QLineEdit(widget_2_client);
        lineEdit_38_client->setObjectName("lineEdit_38_client");
        lineEdit_38_client->setGeometry(QRect(70, 320, 121, 28));
        lineEdit_38_client->setFont(font);
        lineEdit_38_client->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"\n"
"border-color: rgb(255, 255, 255);"));
        lineEdit_39_client = new QLineEdit(widget_2_client);
        lineEdit_39_client->setObjectName("lineEdit_39_client");
        lineEdit_39_client->setGeometry(QRect(70, 150, 121, 28));
        lineEdit_39_client->setFont(font);
        lineEdit_39_client->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"\n"
"border-color: rgb(255, 255, 255);"));
        lineEdit_40_client = new QLineEdit(widget_2_client);
        lineEdit_40_client->setObjectName("lineEdit_40_client");
        lineEdit_40_client->setGeometry(QRect(430, 80, 131, 28));
        lineEdit_40_client->setFont(font);
        lineEdit_40_client->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"\n"
"border-color: rgb(255, 255, 255);"));
        lineEdit_43_client = new QLineEdit(widget_2_client);
        lineEdit_43_client->setObjectName("lineEdit_43_client");
        lineEdit_43_client->setGeometry(QRect(430, 150, 131, 28));
        lineEdit_43_client->setFont(font);
        lineEdit_43_client->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"\n"
"border-color: rgb(255, 255, 255);"));
        nom_edit_client = new QLineEdit(widget_2_client);
        nom_edit_client->setObjectName("nom_edit_client");
        nom_edit_client->setGeometry(QRect(210, 150, 151, 51));
        nom_edit_client->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border_radius:10px;"));
        email_edit_client = new QLineEdit(widget_2_client);
        email_edit_client->setObjectName("email_edit_client");
        email_edit_client->setGeometry(QRect(590, 70, 151, 51));
        email_edit_client->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border_radius:10px;"));
        tel_edit_client = new QLineEdit(widget_2_client);
        tel_edit_client->setObjectName("tel_edit_client");
        tel_edit_client->setGeometry(QRect(590, 140, 151, 51));
        tel_edit_client->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border_radius:10px;"));
        birthdate_edit_client = new QDateEdit(widget_2_client);
        birthdate_edit_client->setObjectName("birthdate_edit_client");
        birthdate_edit_client->setGeometry(QRect(210, 320, 151, 51));
        birthdate_edit_client->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border_radius:10px;"));
        Confirm_Edit_Button_client = new QPushButton(widget_2_client);
        Confirm_Edit_Button_client->setObjectName("Confirm_Edit_Button_client");
        Confirm_Edit_Button_client->setGeometry(QRect(260, 460, 151, 71));
        Confirm_Edit_Button_client->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"\n"
"\n"
"color: rgb(255, 255, 255);\n"
"font: 10pt ;\n"
"\n"
"background-color: rgb(171, 168, 111);\n"
"background-color: rgb(70, 148, 119);\n"
"\n"
"\n"
"\n"
"\n"
"border-radius:30px;\n"
""));
        cancel_search_button_2_client = new QPushButton(widget_2_client);
        cancel_search_button_2_client->setObjectName("cancel_search_button_2_client");
        cancel_search_button_2_client->setGeometry(QRect(477, 460, 151, 71));
        cancel_search_button_2_client->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"\n"
"\n"
"color: rgb(255, 255, 255);\n"
"font: 10pt ;\n"
"\n"
"background-color: rgb(171, 168, 111);\n"
"background-color: rgb(97, 0, 0);\n"
"\n"
"\n"
"\n"
"border-radius:30px;\n"
""));
        adr_edit_client = new QLineEdit(widget_2_client);
        adr_edit_client->setObjectName("adr_edit_client");
        adr_edit_client->setGeometry(QRect(590, 220, 151, 51));
        adr_edit_client->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border_radius:10px;"));
        lineEdit_42_client = new QLineEdit(widget_2_client);
        lineEdit_42_client->setObjectName("lineEdit_42_client");
        lineEdit_42_client->setGeometry(QRect(460, 230, 121, 28));
        lineEdit_42_client->setFont(font);
        lineEdit_42_client->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"\n"
"border-color: rgb(255, 255, 255);"));
        lineEdit_41_client = new QLineEdit(widget_2_client);
        lineEdit_41_client->setObjectName("lineEdit_41_client");
        lineEdit_41_client->setGeometry(QRect(70, 230, 121, 28));
        lineEdit_41_client->setFont(font);
        lineEdit_41_client->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"\n"
"border-color: rgb(255, 255, 255);"));
        lineEdit_44_client = new QLineEdit(widget_2_client);
        lineEdit_44_client->setObjectName("lineEdit_44_client");
        lineEdit_44_client->setGeometry(QRect(460, 300, 121, 28));
        lineEdit_44_client->setFont(font);
        lineEdit_44_client->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"\n"
"border-color: rgb(255, 255, 255);"));
        region_edit_client = new QLineEdit(widget_2_client);
        region_edit_client->setObjectName("region_edit_client");
        region_edit_client->setGeometry(QRect(590, 290, 151, 51));
        region_edit_client->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border_radius:10px;"));
        firstname_edit_client = new QLineEdit(widget_2_client);
        firstname_edit_client->setObjectName("firstname_edit_client");
        firstname_edit_client->setGeometry(QRect(210, 230, 151, 51));
        firstname_edit_client->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"border_radius:10px;"));
        stackedWidget_client->addWidget(Edit_client);
        Stat_client = new QWidget();
        Stat_client->setObjectName("Stat_client");
        stackedWidget_client->addWidget(Stat_client);
        messaging_client = new QWidget();
        messaging_client->setObjectName("messaging_client");
        stackedWidget_client->addWidget(messaging_client);
        stackedWidget->addWidget(clients);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        stackedWidget->addWidget(page_2);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1401, 33));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);
        stackedWidgetdeli->setCurrentIndex(0);
        stackedWidget_client->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        lineEdit_3deli->setText(QCoreApplication::translate("MainWindow", "           Welcome", nullptr));
        label_5deli->setText(QString());
        label_19deli->setText(QString());
        ADDDELIVERY->setText(QCoreApplication::translate("MainWindow", "Add Delivery", nullptr));
        DList->setText(QCoreApplication::translate("MainWindow", "Delivery List", nullptr));
        label_15deli->setText(QString());
        histodeli->setText(QCoreApplication::translate("MainWindow", "Historique", nullptr));
        statdeliv->setText(QCoreApplication::translate("MainWindow", "Statistics", nullptr));
        Searchdeli->setText(QCoreApplication::translate("MainWindow", "Search by ID", nullptr));
        SEARCHline->setText(QString());
        FILTERdeli->setText(QCoreApplication::translate("MainWindow", "Filter", nullptr));
        EDITdeli->setText(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        DELETEdeli->setText(QCoreApplication::translate("MainWindow", "delete", nullptr));
        PDFdeli->setText(QCoreApplication::translate("MainWindow", "PDF", nullptr));
        labelpdfdeli->setText(QString());
        label_20deli->setText(QString());
        IDLIVlineditdeli->setText(QCoreApplication::translate("MainWindow", "ID liv", nullptr));
        lineEdit_11deli->setText(QCoreApplication::translate("MainWindow", "NUm", nullptr));
        lineEdit_12deli->setText(QCoreApplication::translate("MainWindow", "First name", nullptr));
        lineEdit_13deli->setText(QCoreApplication::translate("MainWindow", "Adresse", nullptr));
        LSlineditdeli->setText(QCoreApplication::translate("MainWindow", "Last name", nullptr));
        lineEdit_25deli->setText(QCoreApplication::translate("MainWindow", "Prix", nullptr));
        lineEdit_27deli->setText(QCoreApplication::translate("MainWindow", "Etat", nullptr));
        lineEdit_28deli->setText(QCoreApplication::translate("MainWindow", "date", nullptr));
        ETdeli->setItemText(0, QCoreApplication::translate("MainWindow", "Livree", nullptr));
        ETdeli->setItemText(1, QCoreApplication::translate("MainWindow", "Non livree", nullptr));
        ETdeli->setItemText(2, QCoreApplication::translate("MainWindow", "en cours", nullptr));

        CONFIRMdeli->setText(QCoreApplication::translate("MainWindow", "Confirm", nullptr));
        CANCELdeli->setText(QCoreApplication::translate("MainWindow", "cancel", nullptr));
        idWarningIcondeli->setText(QString());
        IDClinedeli->setText(QCoreApplication::translate("MainWindow", "ID Client", nullptr));
        idWarningIcon_2deli->setText(QString());
        label_17deli->setText(QString());
        label_13_client->setText(QString());
        lineEdit_3_client->setText(QCoreApplication::translate("MainWindow", "           Welcome", nullptr));
        lineEdit_5_client->setText(QCoreApplication::translate("MainWindow", "Add Employee", nullptr));
        List_Button_client->setText(QCoreApplication::translate("MainWindow", "Client List", nullptr));
        label_16_client->setText(QString());
        Add_Button_client->setText(QCoreApplication::translate("MainWindow", "Add Client", nullptr));
        Stat_Button_client->setText(QCoreApplication::translate("MainWindow", "Statistics", nullptr));
        Search_Button_client->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        lineEdit_7_client->setText(QCoreApplication::translate("MainWindow", "Sort by", nullptr));
        Search_line_edit_client->setText(QCoreApplication::translate("MainWindow", "Enter ID", nullptr));
        Edit_Button_client->setText(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        Delete_Button_client->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        pdf_Button_client->setText(QCoreApplication::translate("MainWindow", "PDF Export", nullptr));
        sort_criterion_client->setItemText(0, QCoreApplication::translate("MainWindow", "ID", nullptr));
        sort_criterion_client->setItemText(1, QCoreApplication::translate("MainWindow", "Nom", nullptr));

        Sort_Button_client->setText(QCoreApplication::translate("MainWindow", "sort", nullptr));
        cancel_search_button_client->setText(QCoreApplication::translate("MainWindow", "Cancel", nullptr));
        messaging_Button_client->setText(QCoreApplication::translate("MainWindow", "Messaging", nullptr));
        id_add_client->setText(QString());
        lineEdit_10_client->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        lineEdit_12_client->setText(QCoreApplication::translate("MainWindow", "Address", nullptr));
        lineEdit_13_client->setText(QCoreApplication::translate("MainWindow", "birthdate", nullptr));
        lineEdit_14_client->setText(QCoreApplication::translate("MainWindow", "Nom", nullptr));
        lineEdit_25_client->setText(QCoreApplication::translate("MainWindow", "Email Address", nullptr));
        lineEdit_28_client->setText(QCoreApplication::translate("MainWindow", "Phone Number", nullptr));
        Add_Nom_client->setText(QString());
        Add_Address_client->setText(QString());
        Add_email_client->setText(QString());
        Add_Phone_client->setText(QString());
        Confirm_Add_Button_client->setText(QCoreApplication::translate("MainWindow", "Confirm", nullptr));
        cancel_search_button_3_client->setText(QCoreApplication::translate("MainWindow", "Cancel", nullptr));
        lineEdit_15_client->setText(QCoreApplication::translate("MainWindow", "First name", nullptr));
        lineEdit_16_client->setText(QCoreApplication::translate("MainWindow", "Region", nullptr));
        Add_firstname_client->setText(QString());
        Add_region_client->setText(QString());
        id_edit_client->setText(QCoreApplication::translate("MainWindow", "2315067", nullptr));
        lineEdit_35_client->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        lineEdit_38_client->setText(QCoreApplication::translate("MainWindow", "Birth Date", nullptr));
        lineEdit_39_client->setText(QCoreApplication::translate("MainWindow", "Nom", nullptr));
        lineEdit_40_client->setText(QCoreApplication::translate("MainWindow", "Email Address", nullptr));
        lineEdit_43_client->setText(QCoreApplication::translate("MainWindow", "Phone Number", nullptr));
        nom_edit_client->setText(QCoreApplication::translate("MainWindow", "Hammemi", nullptr));
        email_edit_client->setText(QCoreApplication::translate("MainWindow", "Mohamed.Hammemi@gmail.com", nullptr));
        tel_edit_client->setText(QCoreApplication::translate("MainWindow", "55436728", nullptr));
        Confirm_Edit_Button_client->setText(QCoreApplication::translate("MainWindow", "Confirm", nullptr));
        cancel_search_button_2_client->setText(QCoreApplication::translate("MainWindow", "Cancel", nullptr));
        adr_edit_client->setText(QCoreApplication::translate("MainWindow", "Rue Palestine", nullptr));
        lineEdit_42_client->setText(QCoreApplication::translate("MainWindow", "Adresse", nullptr));
        lineEdit_41_client->setText(QCoreApplication::translate("MainWindow", "First name", nullptr));
        lineEdit_44_client->setText(QCoreApplication::translate("MainWindow", "Region", nullptr));
        region_edit_client->setText(QCoreApplication::translate("MainWindow", "Hammemi", nullptr));
        firstname_edit_client->setText(QCoreApplication::translate("MainWindow", "Hammemi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIVRAISON_H
