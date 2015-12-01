#-------------------------------------------------
#
# Project created by QtCreator 2015-04-08T20:34:36
#
#-------------------------------------------------

QT       += core gui
QT       += network
QT       += script

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = IHM_PL
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    simulation.cpp

HEADERS  += mainwindow.h \
    simulation.h

FORMS    += mainwindow.ui \
    simulation.ui

RESOURCES += \
    ressource.qrc \
    ressource.qrc
