#include "consulta.h"
#include "ui_consulta.h"
#include "menu.h"
#include <QRandomGenerator>
#include <QMessageBox>
#include <QDateTime>

Consulta::Consulta(Menu* menuParent, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Consulta)
    , m_menuParent(menuParent)
{
    ui->setupUi(this);

    ui->tabWidget->setTabText(0, "Novo/Alterar Consulta");
    ui->tabWidget->setTabText(1, "Buscar Consulta");
    ui->tabWidget->setTabText(2, "Buscar IDs");
    ui->tabWidget->setTabText(3, "Remover Consulta");


    ui->idlb->hide();
    ui->id->hide();
    ui->dateTimeEdit->setDateTime(QDateTime::currentDateTime());
}

Consulta::~Consulta()
{
    delete ui;
}

void Consulta::on_novo_func_clicked()
{
    ui->idlb->hide();
    ui->id->hide();
}

void Consulta::on_Alterar_d_clicked()
{
    ui->idlb->show();
    ui->id->show();
    QMessageBox::information(this, "Aviso", "Digite o ID da consulta e os campos a alterar");
}

void Consulta::on_buttonBox_accepted()
{
    if (!m_menuParent) {
        QMessageBox::critical(this, "Erro", "Menu principal não encontrado!");
        return;
    }

    if (ui->novo_func->isChecked()) {
        QString id_pasc = ui->nome_f->text();
        QString id_medic = ui->idade->text();
        QString obs = ui->convenio->text();
        QString dataHora = ui->dateTimeEdit->dateTime().toString("dd/MM/yyyy HH:mm");

        if (id_pasc.isEmpty() || id_pasc.isEmpty()) {
            QMessageBox::warning(this, "Erro", "Preencha IDs do paciente e médico!");
            return;
        }

        for (size_t i = 0; i < m_menuParent->vetor_consultas().size(); ++i) {
            if (m_menuParent->vetor_consultas()[i]->GetIdMedico() == id_medic &&
                m_menuParent->vetor_consultas()[i]->GetDataHora() == dataHora) {
                QMessageBox::warning(this, "Erro", "Médico já tem consulta neste horário!");
                return;
            }
        }

        m_menuParent->v_consultas(Consultas(
            QString::number(QRandomGenerator::global()->bounded(10000, 99999)),
            id_pasc,
            id_medic,
            dataHora,
            obs
            ));

        QMessageBox::information(this, "Sucesso", "Consulta cadastrada!");
        ui->nome_f->clear();
        ui->idade->clear();
        ui->convenio->clear();
    }
    else if (ui->Alterar_d->isChecked()) {
        QString id = ui->id->text();
        QString id_pasc = ui->nome_f->text();
        QString id_medic = ui->idade->text();
        QString obs = ui->convenio->text();
        QString dataHora = ui->dateTimeEdit->dateTime().toString("dd/MM/yyyy HH:mm");

        if (id.isEmpty()) {
            QMessageBox::warning(this, "Erro", "Digite o ID da consulta");
            return;
        }

        bool encontrada = false;
        for (size_t i = 0; i < m_menuParent->vetor_consultas().size(); i++) {
            if (m_menuParent->vetor_consultas().at(i)->GetId() == id) {
                if (!id_pasc.isEmpty()) m_menuParent->vetor_consultas().at(i)->SetIdPaciente(id_pasc);
                if (!id_medic.isEmpty()) m_menuParent->vetor_consultas().at(i)->SetIdMedico(id_medic);
                if (!dataHora.isEmpty()) m_menuParent->vetor_consultas().at(i)->SetDataHora(dataHora);
                if (!obs.isEmpty()) m_menuParent->vetor_consultas().at(i)->SetObservacoes(obs);
                encontrada = true;
                break;
            }
        }

        if (encontrada) {
            QMessageBox::information(this, "Sucesso", "Consulta atualizada!");
            ui->nome_f->clear();
            ui->idade->clear();
            ui->convenio->clear();
            ui->id->clear();
        } else {
            QMessageBox::warning(this, "Erro", "Consulta não encontrada!");
        }
    }
}

void Consulta::on_pushButton_clicked() // Listar todas
{
    ui->lista1->clear();
    for (size_t i = 0; i < m_menuParent->vetor_consultas().size(); i++) {
        ui->lista1->addItem(m_menuParent->vetor_consultas().at(i)->GetInformation());
    }
}

void Consulta::on_pushButton_2_clicked() // Buscar por termo
{
    QString termo = ui->p_nome->text();
    ui->mostrar_nome->clear();

    if (termo.isEmpty()) {
        QMessageBox::warning(this, "Aviso", "Digite um termo de busca");
        return;
    }

    for (size_t i = 0; i < m_menuParent->vetor_consultas().size(); i++) {
        if (m_menuParent->vetor_consultas().at(i)->GetIdPaciente().contains(termo) ||
            m_menuParent->vetor_consultas().at(i)->GetIdMedico().contains(termo) ||
            m_menuParent->vetor_consultas().at(i)->GetDataHora().contains(termo)) {
            ui->mostrar_nome->addItem(m_menuParent->vetor_consultas().at(i)->GetInformation());
        }
    }
}

void Consulta::on_pushButton_3_clicked() // Remover
{
    QString id = ui->id_2->text();

    if (id.isEmpty()) {
        QMessageBox::warning(this, "Erro", "Digite o ID da consulta");
        return;
    }

    if (m_menuParent->deletarConsulta(id)) {
        QMessageBox::information(this, "Sucesso", "Consulta removida!");
        ui->id_2->clear();
    } else {
        QMessageBox::warning(this, "Erro", "Consulta não encontrada!");
    }
}

void Consulta::on_pushButton_4_clicked()
{
    QString data = ui->p_nome2->text();
    ui->mostrar_nome2->clear();

    if (data.isEmpty()) {
        QMessageBox::warning(this, "Aviso", "Digite uma data (dd/MM/yyyy)");
        return;
    }

    for (size_t i = 0; i < m_menuParent->vetor_consultas().size(); i++) {
        if (m_menuParent->vetor_consultas().at(i)->GetIdPaciente().contains(data) ||
            m_menuParent->vetor_consultas().at(i)->GetIdMedico().contains(data) ||
            m_menuParent->vetor_consultas().at(i)->GetDataHora().contains(data)) {
            ui->mostrar_nome2->addItem(m_menuParent->vetor_consultas().at(i)->GetInformation());
        }
    }
}

void Consulta::on_buttonBox_rejected()
{
    this->close();
}

void Consulta::on_pushButton_5_clicked()
{
    ui->pesquisarlista->clear();

    QString nomeBuscado = ui->pesquisar->text().trimmed();
    if (nomeBuscado.isEmpty()) {
        QMessageBox::warning(this, "Aviso", "Digite um nome para pesquisar");
        return;
    }

    bool buscarPorMedico = ui->radio_medico->isChecked();
    bool buscarPorPaciente = ui->radio_paciente->isChecked();

    if (!buscarPorMedico && !buscarPorPaciente) {
        QMessageBox::warning(this, "Aviso", "Selecione Médico ou Paciente");
        return;
    }

    if (buscarPorMedico) {
        for (size_t i = 0; i < m_menuParent->vetor_funcinarios().size(); i++) {
            Funcionario* medico = m_menuParent->vetor_funcinarios().at(i);
            if (medico->GetNome().contains(nomeBuscado, Qt::CaseInsensitive)) {
                ui->pesquisarlista->addItem(medico->GetInformation());
            }
        }
    }
    else {
        for (size_t i = 0; i < m_menuParent->vetor_pacientes().size(); i++) {
            Pacientes* paciente = m_menuParent->vetor_pacientes().at(i);
            if (paciente->GetNome().contains(nomeBuscado, Qt::CaseInsensitive)) {
                ui->pesquisarlista->addItem(paciente->GetInformation());
            }
        }
    }
}

