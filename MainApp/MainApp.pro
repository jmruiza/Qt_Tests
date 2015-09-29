#-------------------------------------------------
#
# Project created by QtCreator 2015-09-23T13:07:33
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MainApp
TEMPLATE = app

# Common config  file ----------------------------
include($$PWD/../config.pri)
!exists($$PWD/../config.pri) {
    message("Not found config.pri")
}

DESTDIR = $${DEST_DIRECTORY}
#-------------------------------------------------

SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h \
    ../MyLibrary1/mylibrary1_global.h \
    ../MyLibrary1/mylibrary1.h \
    ../MyLibrary2/mylibrary2_global.h \
    ../MyLibrary2/mylibrary2.h \
    ../MyLibrary2/mylibrary2_dialog.h \
    ../MyLibrary2/mylibrary2_form.h

FORMS    += mainwindow.ui

LIBS += -L $$DEST_DIRECTORY -lMyLibrary1\
-lMyLibrary2

INCLUDEPATH += $$DEST_DIRECTORY
DEPENDPATH += $$DEST_DIRECTORY

message(" -> MainApp: ")
message("  PWD: ["$$PWD"]")
message("  DEST_DIRECTORY: ["$$DEST_DIRECTORY"]")
message("  PROJECT_ROOT_DIRECTORY: ["$$DEST_DIRECTORY"]")
message("  Libraries: ["$$LIBS"]")
