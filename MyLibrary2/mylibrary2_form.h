#ifndef MYLIBRARY2_FORM_H
#define MYLIBRARY2_FORM_H

#include <QWidget>

namespace Ui {
class MyLibrary2_Form;
}

class MyLibrary2_Form : public QWidget
{
    Q_OBJECT

public:
    explicit MyLibrary2_Form(QWidget *parent = 0);
    ~MyLibrary2_Form();

private:
    Ui::MyLibrary2_Form *ui;
};

#endif // MYLIBRARY2_FORM_H
