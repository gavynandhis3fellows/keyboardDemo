#include "widget.h"
#include "fullkeyboard.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    Widget w;
//    w.show();
    FullKeyboard w;
    w.show();

    return a.exec();
}
