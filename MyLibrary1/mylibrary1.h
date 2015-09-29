#ifndef MYLIBRARY1_H
#define MYLIBRARY1_H

#include <QString>
#include <QDebug>
#include "mylibrary1_global.h"

class MYLIBRARY1SHARED_EXPORT MyLibrary1
{

public:
    MyLibrary1();

    QString name;
    QString address1;
    QString address2;
    QString phone;

    void showData();

};

#endif // MYLIBRARY1_H
