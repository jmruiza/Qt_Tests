#include "mylibrary1.h"

MyLibrary1::MyLibrary1()
{
    qDebug() << "Hello, from MyLibrary1!!";
}

void MyLibrary1::showData()
{

    qDebug() << "MyLibrary1: =============== ";
    qDebug() << " - Name:    " << name;
    qDebug() << " - Address: " << address1;
    qDebug() << " -          " << address2;
    qDebug() << " - Phone:   " << phone;
}
