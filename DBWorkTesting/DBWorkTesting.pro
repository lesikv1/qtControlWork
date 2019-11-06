#-------------------------------------------------
#
# Project created by QtCreator 2017-11-14T08:38:14
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = DBWorkTesting
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    countrymodel.cpp \
    regionmodel.cpp

HEADERS  += mainwindow.h \
    countrymodel.h \
    regionmodel.h

FORMS    += mainwindow.ui
