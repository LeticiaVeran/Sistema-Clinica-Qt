#include "receita.h"
#include "ui_receita.h"
#include "gerarrec.h"
#include "menu.h"

#include <QMessageBox>

Receita::Receita(Menu* menuParent, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Receita)
    , m_menuParent(menuParent)

{
    ui->setupUi(this);

    ui->label_6->hide();
    ui->mostrar_nome2->hide();
    ui->p_nome2->hide();
    ui->pushButton_4->hide();

    ui->mostrar_nome2_2->hide();
    ui->p_nome2_2->hide();
    ui->label_10->hide();
    ui->pushButton_5->hide();

    ui->mostrar_nome2_3->hide();
    ui->p_nome2_3->hide();
    ui->label_11->hide();
    ui->pushButton_6->hide();

    ui->label_7->hide();

    ui->tabWidget->setTabText(0, "Nova Receita");
    ui->tabWidget->setTabText(1, "Buscar IDs");

}

Receita::~Receita()
{
    delete ui;
}

void Receita::on_pushButton_4_clicked()
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


void Receita::on_pushButton_5_clicked()
{
    QString nome = ui->p_nome2_2->text();
    ui->mostrar_nome2_2->clear();

    if (nome.isEmpty()) {
        QMessageBox::warning(this, "Aviso", "Digite um nome para buscar");
        return;
    }

    for (size_t i = 0; i < m_menuParent->vetor_remedios().size(); i++) {
        if (m_menuParent->vetor_remedios().at(i)->GetNome().contains(nome, Qt::CaseInsensitive) ||
            m_menuParent->vetor_remedios().at(i)->GetPrincipioAtivo().contains(nome, Qt::CaseInsensitive)) {
            ui->mostrar_nome2_2->addItem(m_menuParent->vetor_remedios().at(i)->GetInformation());
        }
    }
}


void Receita::on_pushButton_6_clicked()
{
    ui->mostrar_nome2_3->clear();

    QString nome = ui->p_nome2_3->text();
    int func = -1;

    for (size_t i = 0; i < m_menuParent->vetor_funcinarios().size(); i++){
        if (m_menuParent->vetor_funcinarios().at(i) != nullptr &&
            m_menuParent->vetor_funcinarios().at(i)->GetNome().contains(nome,  Qt::CaseInsensitive)){
            ui->mostrar_nome2_3->addItem(m_menuParent->vetor_funcinarios().at(i)->GetInformation());
            func = i;
        }
    }

    if (func < 0) {
        QMessageBox::information(this, "Aviso", "Funcionário não encontrado :C");
    }
}


void Receita::on_radioButton_3_clicked()
{
    ui->label_6->show();
    ui->mostrar_nome2->show();
    ui->p_nome2->show();
    ui->pushButton_4->show();
    ui->label_7->show();

    ui->mostrar_nome2_2->hide();
    ui->p_nome2_2->hide();
    ui->label_10->hide();
    ui->pushButton_5->hide();

    ui->mostrar_nome2_3->hide();
    ui->p_nome2_3->hide();
    ui->label_11->hide();
    ui->pushButton_6->hide();
}


void Receita::on_radioButton_2_clicked()
{
    ui->label_6->hide();
    ui->mostrar_nome2->hide();
    ui->p_nome2->hide();
    ui->pushButton_4->hide();

    ui->mostrar_nome2_2->show();
    ui->p_nome2_2->show();
    ui->label_10->show();
    ui->pushButton_5->show();
    ui->label_7->show();

    ui->mostrar_nome2_3->hide();
    ui->p_nome2_3->hide();
    ui->label_11->hide();
    ui->pushButton_6->hide();
}


void Receita::on_radioButton_clicked()
{
    ui->label_6->hide();
    ui->mostrar_nome2->hide();
    ui->p_nome2->hide();
    ui->pushButton_4->hide();

    ui->mostrar_nome2_2->hide();
    ui->p_nome2_2->hide();
    ui->label_10->hide();
    ui->pushButton_5->hide();

    ui->mostrar_nome2_3->show();
    ui->p_nome2_3->show();
    ui->label_11->show();
    ui->pushButton_6->show();
    ui->label_7->show();
}


void Receita::on_pushButton_clicked()
{
    gerarrec *dialog = new gerarrec(m_menuParent, m_menuParent);

    m_menuParent->SetIdM(ui->idmedico->text());
    m_menuParent->SetIdP(ui->idpaciente->text());
    m_menuParent->SetIdR(ui->idremedio->text());
    m_menuParent->SetObs(ui->obs->text());

    dialog->exec();

    delete dialog;


}

