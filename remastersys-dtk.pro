TARGET = remastersys-dtk
TEMPLATE = app

QT       += core widgets 
CONFIG += link_pkgconfig
CONFIG += c++11
PKGCONFIG += dtkwidget

SOURCES += src/main.cpp\
    src/mainwindow.cpp \
    src/qconsolewidget.cpp \
    src/redirect.cpp \
    src/toolbar.cpp \
    src/homewidget.cpp

HEADERS  += src/mainwindow.h \
    src/qconsolewidget.h \
    src/redirect.h \
    src/toolbar.h \
    src/constant.h \
    src/homewidget.h

RESOURCES += \
    res.qrc

TRANSLATIONS += ./languages/remastersys-dtk_zh_CN.ts
