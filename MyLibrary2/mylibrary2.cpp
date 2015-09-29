#include "mylibrary2.h"

MyLibrary2::MyLibrary2()
{
    qDebug() << "Hello, from MyLibrary1: ";
}

void MyLibrary2::showData()
{
    qDebug() << " - Name:    " << name;
    qDebug() << " - Address: " << address1;
    qDebug() << " -          " << address2;
    qDebug() << " - Phone:   " << phone;
}
