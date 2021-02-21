#include "OGLPyramid.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    OGLPyramid oglPyramid;

    oglPyramid.resize(400,400);
    oglPyramid.show();
    return a.exec();
}
