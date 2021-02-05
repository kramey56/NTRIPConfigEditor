#include <QtGui/QApplication>
#include "editmainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    EditMainWindow w;
    w.show();

    return a.exec();
}
