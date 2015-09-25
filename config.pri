CONFIG(debug, debug|release) {
    DEST_DIRECTORY = $$PWD/build/debug
    #/../build/debug
}
CONFIG(release, debug|release) {
    DEST_DIRECTORY = $$PWD/build/release
    #/../build/release
}

PROJECT_ROOT_DIRECTORY = $$PWD #not $$_PRO_FILE_PWD_!

message("PWD: ["$$PWD"]")
message("DEST_DIRECTORY: ["$$DEST_DIRECTORY"]")
message("PROJECT_ROOT_DIRECTORY: ["$$DEST_DIRECTORY"]")


