#-------------------------------------------------
#
# Project created by QtCreator 2019-06-26T12:40:44
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = text_20190626
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    num_lock.cpp \
    text.cpp \
    mylineedit.cpp

HEADERS  += widget.h \
    num_lock.h \
    text.h \
    mylineedit.h

FORMS    += widget.ui \
    num_lock.ui \
    text.ui

RESOURCES += \
    pic.qrc
