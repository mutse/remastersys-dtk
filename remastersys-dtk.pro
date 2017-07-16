TARGET = remastersys-dtk
TEMPLATE = app

QT       += core widgets 
CONFIG += link_pkgconfig
CONFIG += c++11
PKGCONFIG += dtkwidget dtkbase dtkutil

SOURCES += src/main.cpp\
    src/mainwindow.cpp \
    src/qconsolewidget.cpp \
    src/redirect.cpp \
    src/toolbar.cpp

HEADERS  += src/mainwindow.h \
    src/qconsolewidget.h \
    src/redirect.h \
    src/toolbar.h \
    src/constant.h

RESOURCES += \
    res.qrc

TRANSLATIONS += ./languages/remastersys-dtk_zh_CN.ts
