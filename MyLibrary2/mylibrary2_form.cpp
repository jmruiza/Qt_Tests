#include "mylibrary2_form.h"
#include "ui_mylibrary2_form.h"

MyLibrary2_Form::MyLibrary2_Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyLibrary2_Form)
{
    ui->setupUi(this);
}

MyLibrary2_Form::~MyLibrary2_Form()
{
    delete ui;
}
