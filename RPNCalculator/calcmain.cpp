#include "calcmain.h"
#include "ui_calcmain.h"

calcmain::calcmain(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::calcmain)
{
    ui->setupUi(this);
}

calcmain::~calcmain()
{
    delete ui;
}
