#include "window1.h"
#include <QApplication>
int main(int argc, char *argv[])
{
    QApplication app(argc,argv);
    window1 w;
    w.show();
    return app.exec();
}


