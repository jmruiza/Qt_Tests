#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include "../MyLibrary1/mylibrary1.h"

// The include and declaration don't shot any problem
#include "../MyLibrary2/mylibrary2.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionMyLibrary2_triggered();

private:
    Ui::MainWindow *ui;
    MyLibrary1 *Library1;
    // The include and declaration don't shot any problem
    MyLibrary2 *Library2;
};

#endif // MAINWINDOW_H
