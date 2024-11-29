QT       += core gui
QT += core gui sql
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Forget.cpp \
    Login.cpp \
    Register.cpp \
    main.cpp \
    mainwindow.cpp \
    myeventfilter.cpp

HEADERS += \
    Forget.h \
    Login.h \
    Register.h \
    mainwindow.h \
    myeventfilter.h

FORMS += \
    Forget.ui \
    Login.ui \
    Register.ui \
    mainwindow.ui

TRANSLATIONS += \
    FlightManagement_zh_CN.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Recource.qrc
