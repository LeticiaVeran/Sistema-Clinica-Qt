#include "gerarrec.h"
#include "ui_gerarrec.h"
#include "menu.h"

gerarrec::gerarrec(Menu* menuParent, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::gerarrec)
    , m_menuParent(menuParent)
{
    ui->setupUi(this);

    carregarDadosReceita();

}

gerarrec::~gerarrec()
{
    delete ui;
}

void gerarrec::on_pushButton_clicked()
{
    carregarDadosReceita();

}

void gerarrec::carregarDadosReceita()
{
    if(m_menuParent) {
        QString nomeMedico = m_menuParent->buscarNomeMedicoPorId();
        QString nomePaciente = m_menuParent->buscarNomePacientePorId();
        QString nomeRemedio = m_menuParent->buscarNomeRemedioPorId();
        QString crm = m_menuParent->buscarCrmMedicoPorId();
        QString obs = m_menuParent->GetObs();

        ui->n_med->setText(nomeMedico);
        ui->n_pac->setText(nomePaciente);
        ui->rem->setText(nomeRemedio);
        ui->crm->setText(crm);
        ui->obs->setText(obs);

        this->update();
        qApp->processEvents();
    }
}
