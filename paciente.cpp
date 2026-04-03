#include "paciente.h"
#include "ui_paciente.h"
#include "menu.h"
#include <QRandomGenerator>
#include <QMessageBox>

Paciente::Paciente(Menu* menuParent, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Paciente)
    , m_menuParent(menuParent)
{
    ui->setupUi(this);

    ui->tabWidget->setTabText(0, "Novo/Alterar Paciente");
    ui->tabWidget->setTabText(1, "Buscar Paciente");
    ui->tabWidget->setTabText(2, "Remover Paciente");

    ui->idlb->hide();
    ui->id->hide();
}

Paciente::~Paciente()
{
    delete ui;
}

void Paciente::on_buttonBox_accepted()
{
    if (!m_menuParent) {
        QMessageBox::critical(this, "Erro", "Referência ao menu principal não encontrada!");
        return;
    }

    if (ui->novo_func->isChecked()) {
        QString nome = ui->nome_f->text();
        QString idade = ui->idade->text();
        QString convenio = ui->convenio->text();
        QString peso = ui->convenio_2->text();

        if (nome.isEmpty() || idade.isEmpty() || convenio.isEmpty() || peso.isEmpty()) {
            QMessageBox::warning(this, "Erro", "Preencha todos os campos!");
            return;
        }

        m_menuParent->v_paciente(Pacientes(nome, idade, convenio,
                                           QString::number(QRandomGenerator::global()->bounded(10000, 99999)), peso));

        QMessageBox::information(this, "Sucesso", "Novo Paciente Cadastrado!");

        ui->nome_f->clear();
        ui->idade->clear();
        ui->convenio->clear();
        ui->convenio_2->clear();

    }
    else if (ui->Alterar_d->isChecked()) {
        QString id = ui->id->text();
        QString nome = ui->nome_f->text();
        QString idade = ui->idade->text();
        QString convenio = ui->convenio->text();
        QString peso = ui->convenio_2->text();


        if (id.isEmpty()) {
            QMessageBox::warning(this, "Erro", "Digite o ID do paciente");
            return;
        }

        bool pacienteEncontrado = false;
        for (size_t i = 0; i < m_menuParent->vetor_pacientes().size(); i++) {
            if (m_menuParent->vetor_pacientes().at(i)->GetId() == id) {
                if (!nome.isEmpty()) m_menuParent->vetor_pacientes().at(i)->SetNome(nome);
                if (!idade.isEmpty()) m_menuParent->vetor_pacientes().at(i)->SetIdade(idade);
                if (!convenio.isEmpty()) m_menuParent->vetor_pacientes().at(i)->SetConvenio(convenio);
                if (!peso.isEmpty()) m_menuParent->vetor_pacientes().at(i)->SetPeso(peso);

                pacienteEncontrado = true;
                break;
            }
        }

        if (pacienteEncontrado) {
            QMessageBox::information(this, "Sucesso", "Dados do paciente atualizados!");

            ui->id->clear();
            ui->nome_f->clear();
            ui->idade->clear();
            ui->convenio->clear();
            ui->convenio_2->clear();

        } else {
            QMessageBox::warning(this, "Erro", "Paciente não encontrado!");
        }
    }
}

void Paciente::on_Alterar_d_clicked()
{
    ui->idlb->show();
    ui->id->show();
    QMessageBox::information(this, "Aviso",
                             "Digite o ID do paciente e apenas os campos que deseja alterar");
}

void Paciente::on_novo_func_clicked()
{
    ui->idlb->hide();
    ui->id->hide();
}


void Paciente::on_pushButton_clicked()
{
    ui->lista1->clear();

    for (size_t i = 0; i < m_menuParent->vetor_pacientes().size(); i++) {
            ui->lista1->addItem(m_menuParent->vetor_pacientes().at(i)->GetInformation());
    }
}


void Paciente::on_pushButton_2_clicked()
{
    QString nome = ui->p_nome->text();
    ui->mostrar_nome->clear();

    if (nome.isEmpty()) {
        QMessageBox::warning(this, "Aviso", "Digite um nome para buscar");
        return;
    }

    for (size_t i = 0; i < m_menuParent->vetor_pacientes().size(); i++) {
        if (m_menuParent->vetor_pacientes().at(i)->GetNome().contains(nome, Qt::CaseInsensitive)) {
            ui->mostrar_nome->addItem(m_menuParent->vetor_pacientes().at(i)->GetInformation());
        }
    }
}


void Paciente::on_pushButton_3_clicked()
{
    QString id = ui->id_2->text();

    if (id.isEmpty()) {
        QMessageBox::warning(this, "Erro", "Digite o ID do paciente");
        return;
    }

    if (m_menuParent->deletarPaciente(id)) {
        QMessageBox::information(this, "Sucesso", "Paciente removido com sucesso!");
        ui->id_2->clear();
    } else {
        QMessageBox::warning(this, "Erro", "Paciente não encontrado!");
    }
}


void Paciente::on_pushButton_4_clicked()
{
    QString nome = ui->p_nome2->text();
    ui->mostrar_nome2->clear();

    if (nome.isEmpty()) {
        QMessageBox::warning(this, "Aviso", "Digite um nome para buscar");
        return;
    }

    for (size_t i = 0; i < m_menuParent->vetor_pacientes().size(); i++) {
        if (m_menuParent->vetor_pacientes().at(i)->GetNome().contains(nome, Qt::CaseInsensitive)) {
            ui->mostrar_nome2->addItem(m_menuParent->vetor_pacientes().at(i)->GetInformation());
        }
    }
}


void Paciente::on_buttonBox_rejected()
{
    this->close();
}

