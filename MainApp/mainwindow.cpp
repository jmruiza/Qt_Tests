#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Library1 = new MyLibrary1();
    qDebug() << Library1->output;
}

MainWindow::~MainWindow()
{
    delete ui;
}
