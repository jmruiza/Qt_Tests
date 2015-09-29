#include "mylibrary2_dialog.h"
#include "ui_mylibrary2_dialog.h"

MyLibrary2_Dialog::MyLibrary2_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MyLibrary2_Dialog)
{
    ui->setupUi(this);
}

MyLibrary2_Dialog::~MyLibrary2_Dialog()
{
    delete ui;
}
