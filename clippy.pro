#-------------------------------------------------
#
# Project created by QtCreator 2017-03-23T20:16:22
#
#-------------------------------------------------

QT       += core gui
win32:RC_ICONS += clipboard-flat.ico
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
TARGET = clippy
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    dialog.cpp \
    createaccount.cpp \
    login.cpp

HEADERS  += mainwindow.h \
    dialog.h \
    createaccount.h \
    login.h

FORMS    += mainwindow.ui \
    dialog.ui \
    createaccount.ui \
    login.ui

RESOURCES += \
    iresource.qrc
