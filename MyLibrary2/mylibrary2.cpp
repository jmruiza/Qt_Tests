#include "mylibrary2.h"

MyLibrary2::MyLibrary2()
{
    qDebug() << "Hello, from MyLibrary2!!";
}

void MyLibrary2::showData()
{

    qDebug() << "MyLibrary2: =============== ";
    qDebug() << " - Name:    " << name;
    qDebug() << " - Address: " << address1;
    qDebug() << " -          " << address2;
    qDebug() << " - Phone:   " << phone;
}
