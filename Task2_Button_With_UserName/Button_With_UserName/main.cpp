#include "button_with_username.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Button_With_UserName w;
    w.show();
    return a.exec();
}
