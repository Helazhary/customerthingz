#include "home.h"
#include"product.h"
#include"seller.h"
#include"customer.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    home w;
    w.show();
    return a.exec();

}
