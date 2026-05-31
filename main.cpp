#include <QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MainWindow w;
    w.setWindowTitle("Qt C++ 测试程序");
    w.resize(800, 600);
    w.show();
    return app.exec();
}
