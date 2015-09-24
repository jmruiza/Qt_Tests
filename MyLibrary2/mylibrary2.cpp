#include "mylibrary2.h"
#include "ui_mylibrary2.h"

MyLibrary2::MyLibrary2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MyLibrary2)
{
    ui->setupUi(this);
}

MyLibrary2::~MyLibrary2()
{
    delete ui;
}
