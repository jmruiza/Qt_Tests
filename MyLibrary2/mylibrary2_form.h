#ifndef MYLIBRARY2_FORM_H
#define MYLIBRARY2_FORM_H

#include <QWidget>
#include "../MyLibrary1/mylibrary1.h"

namespace Ui {
class MyLibrary2_Form;
}

class MyLibrary2_Form : public QWidget
{
    Q_OBJECT

public:
    explicit MyLibrary2_Form(QWidget *parent = 0);
    ~MyLibrary2_Form();

    MyLibrary1 *Library1;
    void setValues();

private:
    Ui::MyLibrary2_Form *ui;
};

#endif // MYLIBRARY2_FORM_H
