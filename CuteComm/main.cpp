#include "cutecomm.hpp"
#include <QApplication>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CuteComm w;

    w.show();

    return a.exec();
}
