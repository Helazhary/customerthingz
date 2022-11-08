#include "product.h"
#include<fstream>
product::product()
{
    download();
}
void product::download()
{
    std::ifstream read;
    read.open("PRODUCTS.txt");
    read>>temp;
    name=QString::fromStdString(temp);
}
