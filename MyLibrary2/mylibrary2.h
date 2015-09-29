#ifndef MYLIBRARY2_H
#define MYLIBRARY2_H

#include <QDebug>

class MyLibrary2
{
public:
    MyLibrary2();

    QString name;
    QString address1;
    QString address2;
    QString phone;

    void showData();

signals:

public slots:
};

#endif // MYLIBRARY2_H
