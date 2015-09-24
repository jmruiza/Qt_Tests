#ifndef MYLIBRARY2_H
#define MYLIBRARY2_H

#include <QDialog>

namespace Ui {
class MyLibrary2;
}

class MyLibrary2 : public QDialog
{
    Q_OBJECT

public:
    explicit MyLibrary2(QWidget *parent = 0);
    ~MyLibrary2();

private:
    Ui::MyLibrary2 *ui;
};

#endif // MYLIBRARY2_H
