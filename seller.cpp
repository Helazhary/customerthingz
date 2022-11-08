#include "seller.h"
#include "ui_seller.h"
#include "home.h"
seller::seller(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::seller)
{
    ui->setupUi(this);
    products=new product[10];
}

seller::~seller()
{
    delete ui;
}

void seller::on_pushButton_2_clicked()
{
    homewin = new home();
    homewin->show();

    this->close();

}

void seller::reset()
{

    ui->name->setText("");
}
void seller::on_addpro_clicked()
{

    products->name=ui->name->text();
    std::ofstream write;
    write.open("PRODUCTS.txt");
    write<<products->name.toStdString();
    write.close();

    end++;
    ui->category->setText(products->name );
}

