#ifndef MYLIBRARY2_DIALOG_H
#define MYLIBRARY2_DIALOG_H

#include <QDialog>
#include "mylibrary2.h"

namespace Ui {
class MyLibrary2_Dialog;
}

class MyLibrary2_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit MyLibrary2_Dialog(QWidget *parent = 0);
    ~MyLibrary2_Dialog();

    MyLibrary2 *Library2;

    void setValues();

private:
    Ui::MyLibrary2_Dialog *ui;
};

#endif // MYLIBRARY2_DIALOG_H
