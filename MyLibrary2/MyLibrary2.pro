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

DESTDIR = $${DEST_DIRECTORY}
#-------------------------------------------------

DEFINES += MYLIBRARY2_LIBRARY

SOURCES += \
    mylibrary2_form.cpp \
    mylibrary2_dialog.cpp \
    mylibrary2.cpp

HEADERS +=\
    mylibrary2_global.h \
    mylibrary2_form.h \
    mylibrary2_dialog.h \
    mylibrary2.h \
    ../MyLibrary1/mylibrary1_global.h \
    ../MyLibrary1/mylibrary1.h \

FORMS += \
    mylibrary2_form.ui \
    mylibrary2_dialog.ui

unix {
    target.path = /usr/lib
    INSTALLS += target
}

LIBS += -L $$DEST_DIRECTORY -lMyLibrary1

message(" -> MyLibrary2: ")
message("  PWD: ["$$PWD"]")
message("  DEST_DIRECTORY: ["$$DEST_DIRECTORY"]")
message("  PROJECT_ROOT_DIRECTORY: ["$$DEST_DIRECTORY"]")
message("  Libraries: ["$$LIBS"]")
