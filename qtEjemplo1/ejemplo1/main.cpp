#include <QtGui/QApplication>
#include "ejemplo1.h"
#include "thread.h"

int main(int argc, char** argv)
{
    
    QApplication app(argc, argv);
    ejemplo1 foo;
    foo.show();
    return app.exec();
}
