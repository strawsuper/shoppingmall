#-------------------------------------------------
#
# Project created by QtCreator 2018-05-08T16:52:00
#
#-------------------------------------------------

QT       += core gui\
            network
#QT       += webkitwidgets
#QT       += script
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = shoppingmall
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    loginview.cpp \
    shopnetwork.cpp \
    user.cpp \
    order.cpp \
    cart.cpp \
    cartview.cpp \
    userview.cpp \
    registerview.cpp

HEADERS += \
        mainwindow.h \
    loginview.h \
    shopnetwork.h \
    user.h \
    order.h \
    cart.h \
    cartview.h \
    userview.h \
    registerview.h

FORMS += \
        mainwindow.ui \
    loginview.ui \
    cartview.ui \
    userview.ui \
    registerview.ui
