#include "login.h"
#include <QApplication>


int main(int argc, char *argv[])
{

    QApplication a(argc, argv);//object ra argument
    login w;
    w.show();//login ko ui ma jancha

    return a.exec();
}
