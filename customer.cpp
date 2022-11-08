#include "customer.h"
#include "ui_customer.h"
#include"home.h"
customer::customer(QWidget *parent) :
       QDialog(parent)
     ,ui(new Ui::customer)

{
    ui->setupUi(this);
}

customer::~customer()
{
    delete ui;
}

void customer::on_pushButton_5_clicked()
{
   homewin = new home();
   homewin->show();
   this->close();
}


 void customer::on_Sname_clicked()
{


    for (int i=0; i< 10; i++) //10 is the preset size for the marketplace products array
     if(ui->name->text()==cm.products[i].name)
         ui->Name_List->setText("Product Name: "+cm.products[i].name+"\n "+ "Price: "+cm.products[i].price+"\n "+ "Quantity: "+cm.products[i].quantity+"\n "+ "Category: "+cm.products[i].category);

}


void customer::on_Scategory_clicked()
{


      for (int i=0; i< 10; i++)
          if(ui->category->text()==cm.products[i].category)
          {
              ui->Category_List->setText(ui->Category_List->text()+"\n"+cm.products[i].name);
          }

}


void customer::on_add_clicked()
{

    for (int i=0; i< 10; i++)
     if((ui->product->text()==cm.products[i].name) && ui->quantity->text().toInt()>0 && ui->quantity->text()!="") //exception incase quantity exceeds available amount
     {
        ui->cart->setText(ui->cart->text()+"\n"+cm.products[i].name+"("+ui->quantity->text()+")"+"                                             "+cm.products[i].price);
         total+=(cm.products[i].price.toDouble() * ui->quantity->text().toDouble());
         ui->price->setText(QString::number(total));
     }

    ui->quantity->setText("");
    ui->product->setText("");



}

