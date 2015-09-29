#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include "../MyLibrary1/mylibrary1.h"

// The include and declaration don't shot any problem
#include "../MyLibrary2/mylibrary2.h"
#include "../MyLibrary2/mylibrary2_dialog.h"
#include "../MyLibrary2/mylibrary2_form.h"

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

    void on_actionMyLibrary2_Form_triggered();

private:
    Ui::MainWindow *ui;
    MyLibrary1 *Library1;
    // The include and declaration don't shot any problem
    MyLibrary2 *Library2;
    MyLibrary2_Dialog *Library2_Dialog;
    MyLibrary2_Form *Library2_Form;
};

#endif // MAINWINDOW_H
