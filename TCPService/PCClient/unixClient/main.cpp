#include "widget.h"
//#include "vmouse.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();
    //vmouse v;
    //v.show();
    return a.exec();
}
