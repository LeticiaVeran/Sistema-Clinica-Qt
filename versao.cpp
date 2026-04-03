#include "versao.h"
#include "ui_versao.h"

versao::versao(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::versao)
{
    ui->setupUi(this);
}

versao::~versao()
{
    delete ui;
}
