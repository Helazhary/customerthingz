#ifndef MARKET_H
#define MARKET_H
#include<fstream>
#include"product.h"
class Market
{
    std::string temp;
public:
    Market() {
        download();
    }
    product products[10];
    void download()
    {
        std::ifstream read;
        read.open("PRODUCTS.txt");
        int i=0;
        while(!read.eof())
        {
            read>>temp;
            products[i].name=QString::fromStdString(temp);
            read>>temp;
            products[i].category=QString::fromStdString(temp);
            read>>temp;
            products[i].quantity=QString::fromStdString(temp);
            read>>temp;
            products[i].price=QString::fromStdString(temp);
            i++;
        }
    }

};
#endif // MARKET_H
