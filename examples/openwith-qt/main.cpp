#include "widget.h"
#include <QApplication>
#include <QIcon>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    if (QIcon::themeName().isEmpty()) {
        QIcon::setThemeName("oxygen");
    }

    Widget w;
    w.show();

    return a.exec();
}
