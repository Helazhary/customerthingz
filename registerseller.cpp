#include "registerseller.h"
#include "ui_registerseller.h"
#include "seller.h"
registerseller::registerseller(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registerseller)
{
    ui->setupUi(this);
}

registerseller::~registerseller()
{
    delete ui;
}

void registerseller::on_register_2_clicked()
{
    sellwin = new seller(nullptr);

    sellwin->name = ui->name->text();
    sellwin->email = ui->email->text();
    sellwin->show();
    this->close();
}

