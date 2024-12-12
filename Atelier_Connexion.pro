QT += core gui sql charts
QT += sql
QT += serialport widgets
QT += network
QT += printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Atelier_Connexion
TEMPLATE = app
CONFIG += c++11

SOURCES += \
    arduino.cpp \
    chatbot.cpp \
    connection.cpp \
    delate.cpp \
    dialog.cpp \
    dialog_emp.cpp \
    edit.cpp \
    employees.cpp \
    equipment.cpp \
    livraison.cpp \
    login.cpp \
    mailer.cpp \
    main.cpp \
    mainwindow.cpp \
    mot_de_passe_oublier.cpp

HEADERS += \
    arduino.h \
    chatbot.h \
    connection.h \
    delate.h \
    dialog.h \
    dialog_emp.h \
    edit.h \
    employees.h \
    equipment.h \
    livraison.h \
    login.h \
    mailer.h \
    mainwindow.h \
    mot_de_passe_oublier.h
# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc

DISTFILES += \
    home page/10608872-removebg-preview.png \
    home page/10608872.png \
    home page/2636315.png \
    home page/391247.png \
    home page/4682662.png \
    home page/5880042.png \
    home page/6402235.png \
    home page/Capture_d_écran_2024-10-09_173649-removebg-preview (1).png \
    home page/Capture_d_écran_2024-10-09_173649-removebg-preview.png \
    home page/Capture_d_écran_2024-10-09_174851-removebg-preview.png \
    home page/Capture_d_écran_2024-10-09_175248-removebg-preview.png \
    home page/Capture_d_écran_2024-10-10_144025-removebg-preview.png \
    home page/Capture_d_écran_2024-10-10_145555-removebg-preview (1).png \
    home page/Capture_d_écran_2024-10-10_145555-removebg-preview.png \
    home page/Capture_d_écran_2024-10-10_150956-removebg-preview (1).png \
    home page/Capture_d_écran_2024-10-10_150956-removebg-preview.png \
    home page/Pie-chart-removebg-preview.png \
    home page/Pie-chart.jpg \
    home page/WhatsApp_Image_2024-10-04_à_11.46.59_70e5b125-removebg-preview (1).png \
    home page/bar-graph.png \
    home page/bin.png \
    home page/canned-food.png \
    home page/check-out_(1)_(1)[1].png \
    home page/client.png \
    home page/complete[1].png \
    home page/delivery-bike.png \
    home page/diagrammebaton2_2.png \
    home page/edit - Copy.png \
    home page/employees (1).png \
    home page/employes.htm \
    home page/filter-outline-filled.png \
    home page/gear[1].png \
    home page/home (3).png \
    home page/image (1).png \
    home page/image_(1)[1].png \
    home page/images (1).png \
    home page/images (2).png \
    home page/images (3).png \
    home page/images.jpeg \
    home page/images.png \
    home page/line-graph-removebg-preview.png \
    home page/line-graph.png \
    home page/loope.png \
    home page/menu (2).png \
    home page/pdf-file[1].png \
    home page/pie-chart.png \
    home page/search.png \
    home page/sort-icon-512x410-1kpy040x.png \
    home page/user (1).png

FORMS += \
    arduino.ui \
    delate.ui \
    dialog.ui \
    dialog_emp.ui \
    edit.ui \
    livraison.ui \
    login.ui \
    mainwindow.ui \
    mot_de_passe_oublier.ui
