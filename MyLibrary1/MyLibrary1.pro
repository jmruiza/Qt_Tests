#-------------------------------------------------
#
# Project created by QtCreator 2015-09-24T13:54:31
#
#-------------------------------------------------

QT       -= gui

TARGET = MyLibrary1
TEMPLATE = lib

# Common config  file ----------------------------
include($$PWD/../config.pri)
!exists($$PWD/../config.pri) {
    message("Not found config.pri")
}

DESTDIR = $${DEST_DIRECTORY}
#-------------------------------------------------

DEFINES += MYLIBRARY1_LIBRARY

SOURCES += mylibrary1.cpp

HEADERS += mylibrary1.h\
        mylibrary1_global.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}

message(" -> MyLibrary1: ")
message("  PWD: ["$$PWD"]")
message("  DEST_DIRECTORY: ["$$DEST_DIRECTORY"]")
message("  PROJECT_ROOT_DIRECTORY: ["$$DEST_DIRECTORY"]")
