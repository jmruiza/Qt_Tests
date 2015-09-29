#include "mylibrary2_dialog.h"
#include "ui_mylibrary2_dialog.h"

MyLibrary2_Dialog::MyLibrary2_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MyLibrary2_Dialog)
{
    ui->setupUi(this);
}

void MyLibrary2_Dialog::setValues()
{
    ui->lineEdit_1->setText(Library2->name);
    ui->lineEdit_2->setText(Library2->address1);
    ui->lineEdit_3->setText(Library2->address2);
    ui->lineEdit_4->setText(Library2->phone);
}

MyLibrary2_Dialog::~MyLibrary2_Dialog()
{
    delete ui;
}
