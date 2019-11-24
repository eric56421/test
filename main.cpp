#include "mainwindow.h"
#include <iostream>
#include <QApplication>

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    cout<<"test";
    cout<<"Tired";
    cout<<"test2";

    return a.exec();
}
