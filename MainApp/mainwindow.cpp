#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Library1 = new MyLibrary1();
    Library1->name = "J M R A";
    Library1->address1 = "Address Line 1";
    Library1->address2 = "Address Line 2";
    Library1->phone = "473 723 23 23";

    Library2 = new MyLibrary2();
    Library2->name = "J Manuel";
    Library2->address1 = "Address Line 1";
    Library2->address2 = "Address Line 2";
    Library2->phone = "473 723 23 23";
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionMyLibrary2_triggered()
{
    // This is the point where I want show the QDialog from MyLibrary2
    Library2_Dialog = new MyLibrary2_Dialog(this); // This shot a permission error
    Library2_Dialog->Library2 = Library2;
    Library2_Dialog->setValues();
    Library2_Dialog->show();
}

void MainWindow::on_actionMyLibrary2_Form_triggered()
{
    Library1->showData();
    Library2_Form = new MyLibrary2_Form();
    Library2_Form->Library1 = Library1;
    Library2_Form->setValues();
    Library2_Form->show();
}
