#-------------------------------------------------
#
# Project created by QtCreator 2015-12-18T15:54:46
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = GCodeTrans
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    parsgcode.cpp

HEADERS  += mainwindow.h \
    parsgcode.h

FORMS    += mainwindow.ui
