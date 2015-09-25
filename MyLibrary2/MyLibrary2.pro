#-------------------------------------------------
#
# Project created by QtCreator 2015-09-24T16:42:15
#
#-------------------------------------------------

QT       += widgets

TARGET = MyLibrary2
TEMPLATE = lib

# Common config  file ----------------------------
include($$PWD/../config.pri)
!exists($$PWD/../config.pri) {
    message("Not found config.pri")
}
#-------------------------------------------------

DEFINES += MYLIBRARY2_LIBRARY

SOURCES += \
    mylibrary2.cpp \
    mylibrary2_form.cpp

HEADERS +=\
        mylibrary2_global.h \
    mylibrary2.h \
    mylibrary2_form.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}

FORMS += \
    mylibrary2.ui \
    mylibrary2_form.ui
