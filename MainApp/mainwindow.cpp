#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Library1 = new MyLibrary1();
    qDebug() << Library1->output;

    ui->textEdit->setText( Library1->output );
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionMyLibrary2_triggered()
{
    // This is the point where I want show the QDialog from MyLibrary2
    Library2 = new MyLibrary2(this); // This shot a permission error
    Library2->show();
}

void MainWindow::on_actionMyLibrary2_Form_triggered()
{
    Library2_Form = new MyLibrary2_Form();
    Library2_Form->show();
}
