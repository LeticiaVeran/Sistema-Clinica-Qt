#include "desenvolvedor.h"
#include "ui_desenvolvedor.h"

Desenvolvedor::Desenvolvedor(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Desenvolvedor)
{
    ui->setupUi(this);
}

Desenvolvedor::~Desenvolvedor()
{
    delete ui;
}
