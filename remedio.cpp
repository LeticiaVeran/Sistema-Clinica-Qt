#include "remedio.h"
#include "ui_remedio.h"
#include "menu.h"
#include <QRandomGenerator>
#include <QMessageBox>

Remedio::Remedio(Menu* menuParent, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Remedio)
    , m_menuParent(menuParent)
{
    ui->setupUi(this);

    ui->tabWidget->setTabText(0, "Novo/Alterar Remédio");
    ui->tabWidget->setTabText(1, "Buscar Remédio");
    ui->tabWidget->setTabText(2, "Remover Remédio");

    ui->idlb->hide();
    ui->id->hide();
}

Remedio::~Remedio()
{
    delete ui;
}

void Remedio::on_buttonBox_accepted()
{
    if (!m_menuParent) {
        QMessageBox::critical(this, "Erro", "Referência ao menu principal não encontrada!");
        return;
    }

    if (ui->novo_func->isChecked()) {
        QString nome = ui->nome_f->text();
        QString formaFarmaceutica = ui->idade->text();
        QString principioAtivo = ui->convenio->text();
        QString dosagem = ui->convenio_2->text();

        if (nome.isEmpty() || formaFarmaceutica.isEmpty() || principioAtivo.isEmpty() || dosagem.isEmpty()) {
            QMessageBox::warning(this, "Erro", "Preencha todos os campos!");
            return;
        }

        m_menuParent->v_remedios(Remedios(nome, formaFarmaceutica, principioAtivo, dosagem, QString::number(QRandomGenerator::global()->bounded(10000, 99999))));

        QMessageBox::information(this, "Sucesso", "Novo Remédio Cadastrado!");

        ui->nome_f->clear();
        ui->idade->clear();
        ui->convenio->clear();
        ui->convenio_2->clear();
    }
    else if (ui->Alterar_d->isChecked()) {
        QString nome = ui->nome_f->text();
        QString formaFarmaceutica = ui->idade->text();
        QString principioAtivo = ui->convenio->text();
        QString dosagem = ui->convenio_2->text();
        QString id = ui->id->text();

        if (id.isEmpty()) {
            QMessageBox::warning(this, "Erro", "Digite o ID do remédio");
            return;
        }

        bool remedioEncontrado = false;
        for (size_t i = 0; i < m_menuParent->vetor_remedios().size(); i++) {
            if (m_menuParent->vetor_remedios().at(i)->GetId() == id) {
                if (!nome.isEmpty()) m_menuParent->vetor_remedios().at(i)->SetNome(nome);
                if (!formaFarmaceutica.isEmpty()) m_menuParent->vetor_remedios().at(i)->SetFormaFarmaceutica(formaFarmaceutica);
                if (!principioAtivo.isEmpty()) m_menuParent->vetor_remedios().at(i)->SetPrincipioAtivo(principioAtivo);
                if (!dosagem.isEmpty()) m_menuParent->vetor_remedios().at(i)->SetDosagem(dosagem);

                remedioEncontrado = true;
                break;
            }
        }

        if (remedioEncontrado) {
            QMessageBox::information(this, "Sucesso", "Dados do remédio atualizados!");
            ui->nome_f->clear();
            ui->idade->clear();
            ui->convenio->clear();
            ui->convenio_2->clear();
        } else {
            QMessageBox::warning(this, "Erro", "Remédio não encontrado!");
        }
    }
}

void Remedio::on_Alterar_d_clicked()
{
    ui->idlb->show();
    ui->id->show();

    QMessageBox::information(this, "Aviso",
                             "Digite o ID do remédio e apenas os campos que deseja alterar");
}

void Remedio::on_novo_func_clicked()
{
    ui->idlb->hide();
    ui->id->hide();
}

void Remedio::on_pushButton_clicked()
{
    ui->lista1->clear();
    for (size_t i = 0; i < m_menuParent->vetor_remedios().size(); i++) {
        ui->lista1->addItem(m_menuParent->vetor_remedios().at(i)->GetInformation());
    }
}

void Remedio::on_pushButton_2_clicked()
{
    QString nome = ui->p_nome->text();
    ui->mostrar_nome->clear();

    if (nome.isEmpty()) {
        QMessageBox::warning(this, "Aviso", "Digite um nome para buscar");
        return;
    }

    for (size_t i = 0; i < m_menuParent->vetor_remedios().size(); i++) {
        if (m_menuParent->vetor_remedios().at(i)->GetNome().contains(nome, Qt::CaseInsensitive) ||
            m_menuParent->vetor_remedios().at(i)->GetPrincipioAtivo().contains(nome, Qt::CaseInsensitive)) {
            ui->mostrar_nome->addItem(m_menuParent->vetor_remedios().at(i)->GetInformation());
        }
    }
}

void Remedio::on_pushButton_3_clicked()
{
    QString id = ui->id_2->text();

    if (id.isEmpty()) {
        QMessageBox::warning(this, "Erro", "Digite o nome do remédio");
        return;
    }

    if (m_menuParent->deletarRemedio(id)) {
        QMessageBox::information(this, "Sucesso", "Remédio removido com sucesso!");
        ui->id_2->clear();
    } else {
        QMessageBox::warning(this, "Erro", "Remédio não encontrado!");
    }
}

void Remedio::on_pushButton_4_clicked()
{
    QString nome = ui->p_nome2->text();
    ui->mostrar_nome2->clear();

    if (nome.isEmpty()) {
        QMessageBox::warning(this, "Aviso", "Digite um nome para buscar");
        return;
    }

    for (size_t i = 0; i < m_menuParent->vetor_remedios().size(); i++) {
        if (m_menuParent->vetor_remedios().at(i)->GetNome().contains(nome, Qt::CaseInsensitive) ||
            m_menuParent->vetor_remedios().at(i)->GetPrincipioAtivo().contains(nome, Qt::CaseInsensitive))  {
            ui->mostrar_nome2->addItem(m_menuParent->vetor_remedios().at(i)->GetInformation());
        }
    }
}

void Remedio::on_buttonBox_rejected()
{
    this->close();
}
