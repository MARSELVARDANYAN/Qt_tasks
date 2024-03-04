#include "ValForm.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    ValForm formWidget;
    formWidget.show();

    return app.exec();
}
