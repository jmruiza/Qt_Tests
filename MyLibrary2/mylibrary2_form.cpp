#include "mylibrary2_form.h"
#include "ui_mylibrary2_form.h"

MyLibrary2_Form::MyLibrary2_Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyLibrary2_Form)
{
    ui->setupUi(this);
}

void MyLibrary2_Form::setValues()
{
    ui->lineEdit_1->setText(Library1->name);
    ui->lineEdit_2->setText(Library1->address1);
    ui->lineEdit_3->setText(Library1->address2);
    ui->lineEdit_4->setText(Library1->phone);
}

MyLibrary2_Form::~MyLibrary2_Form()
{
    delete ui;
}
