#include "funcionarios.h"
#include "ui_funcionarios.h"
#include "menu.h"
#include <QRandomGenerator>
#include <QMessageBox>

Funcionarios::Funcionarios(Menu* menuParent, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Funcionarios)
    , m_menuParent(menuParent)
{
    ui->setupUi(this);

    ui->tabWidget->setTabText(0, "Novo / Alterar Dados");
    ui->tabWidget->setTabText(1, "Listar / Procurar por Nome");
    ui->tabWidget->setTabText(2, "Apagar");

    ui->idlb->hide();
    ui->id->hide();

    ui->funcaol->hide();
    ui->funcao->hide();
}

Funcionarios::~Funcionarios()
{
    delete ui;
}

void Funcionarios::on_buttonBox_accepted()
{
    if (!m_menuParent) {
        QMessageBox::critical(this, "Erro", "Referência ao menu principal não encontrada!");
        return;
    }

    if (ui->novo_func->isChecked()) {
        QString nome, salario, crm, espec, funcao;

        if (ui->medico->isChecked()) {
            nome = ui->nome_f->text();
            salario = ui->salario->text();
            crm = ui->crm->text();
            espec = ui->espc->text();
            funcao = "Médico";

            if (nome.isEmpty() || salario.isEmpty() || crm.isEmpty() || espec.isEmpty()) {
                QMessageBox::warning(this, "Erro", "Preencha todos os campos!");
                return;
            }

            m_menuParent->v_func_m(Medico(nome, salario, funcao,
                                             QString::number(QRandomGenerator::global()->bounded(10000, 99999)), crm, espec));

            QMessageBox::information(this, "Sucesso", "Novo Médico Criado!");
        }
        else {
            nome = ui->nome_f->text();
            salario = ui->salario->text();
            funcao = ui->funcao->text();

            if (nome.isEmpty() || salario.isEmpty() || funcao.isEmpty()) {
                QMessageBox::warning(this, "Erro", "Preencha todos os campos!");
                return;
            }

            m_menuParent->v_func(Funcionario(nome, salario, funcao,
                                             QString::number(QRandomGenerator::global()->bounded(10000, 99999))));

            QMessageBox::information(this, "Sucesso", "Novo Funcionário Criado!");
        }
    }
    else if (ui->Alterar_d->isChecked()) {

        QString id = ui->id->text();
        int func = -1;
        QString nome, salario, crm, espec, funcao;

        if (id.isEmpty()){
            QMessageBox::information(this, "Sucesso", "Digite uma ID");
            return;

        }

        if (ui->medico->isChecked()) {

            nome = ui->nome_f->text();
            salario = ui->salario->text();
            crm = ui->crm->text();
            espec = ui->espc->text();
            funcao = "Médico";

            for (size_t i = 0; i < m_menuParent->vetor_funcinarios().size(); i++){
                if (m_menuParent->vetor_funcinarios().at(i)->GetId() == id){
                    func = i;
                }
            }

            if (!nome.isEmpty()){
                m_menuParent->vetor_funcinarios().at(func)->SetName(nome);
            }

            if (!salario.isEmpty()){
                m_menuParent->vetor_funcinarios().at(func)->SetSalario(salario);
            }

            if (!crm.isEmpty()){
                m_menuParent->vetor_funcinarios().at(func)->SetCrm(crm);
            }

            if (!espec.isEmpty()){
                m_menuParent->vetor_funcinarios().at(func)->SetEspec(espec);
            }

            QMessageBox::information(this, "Sucesso", "Dados Do Médico Alterados!");

        }
        else{
            nome = ui->nome_f->text();
            salario = ui->salario->text();
            funcao = ui->funcao->text();

            for (size_t i = 0; i < m_menuParent->vetor_funcinarios().size(); i++){
                if (m_menuParent->vetor_funcinarios().at(i)->GetId() == id){
                    func = i;
                }
            }


            if (!nome.isEmpty()){
                m_menuParent->vetor_funcinarios().at(func)->SetName(nome);
            }

            if (!salario.isEmpty()){
                m_menuParent->vetor_funcinarios().at(func)->SetSalario(salario);
            }

            if (!funcao.isEmpty()){
                m_menuParent->vetor_funcinarios().at(func)->SetFuncao(funcao);
            }

            QMessageBox::information(this, "Sucesso", "Dados Do Funcionário Alterados!");
        }

    }
    else {
        QMessageBox::warning(this, "Atenção", "Escolha uma opção!");
    }

    ui->nome_f->clear();
    ui->salario->clear();
    ui->crm->clear();
    ui->espc->clear();
    ui->funcao->clear();
}

void Funcionarios::on_pushButton_clicked()
{
    if (!m_menuParent) {
        QMessageBox::critical(this, "Erro", "Referência ao menu principal não encontrada!");
        return;
    }

    ui->lista1->clear();

    for (size_t i = 0; i < m_menuParent->vetor_funcinarios().size(); i++) {
          if (m_menuParent->vetor_funcinarios().at(i) != nullptr) {
            ui->lista1->addItem(m_menuParent->vetor_funcinarios().at(i)->GetInformation());
          }
    }
}

void Funcionarios::on_novo_func_pressed()
{
}

void Funcionarios::on_novo_func_clicked()
{
    ui->id->hide();
    ui->idlb->hide();
}

void Funcionarios::on_outra_clicked()
{
    ui->funcaol->show();
    ui->funcao->show();
    ui->espc->hide();
    ui->espcl->hide();
    ui->crm->hide();
    ui->crml->hide();
}

void Funcionarios::on_medico_clicked()
{
    ui->funcaol->hide();
    ui->funcao->hide();
    ui->espc->show();
    ui->espcl->show();
    ui->crm->show();
    ui->crml->show();
}

void Funcionarios::on_Alterar_d_clicked()
{
    QMessageBox::information(this, "Sucesso", "Para alterar os dados, digite a ID e os dados que deseja alterar nos campos correspondentes, os que deseja manter, deixe em branco.");
    ui->id->show();
    ui->idlb->show();
}

void Funcionarios::on_buttonBox_rejected()
{
    this->close();
}

void Funcionarios::on_pushButton_2_clicked()
{
    ui->mostrar_nome->clear();

    QString nome = ui->p_nome->text();
    int func = -1;

    for (size_t i = 0; i < m_menuParent->vetor_funcinarios().size(); i++){
        if (m_menuParent->vetor_funcinarios().at(i) != nullptr && m_menuParent->vetor_funcinarios().at(i)->GetNome().contains(nome,  Qt::CaseInsensitive)){
                ui->mostrar_nome->addItem(m_menuParent->vetor_funcinarios().at(i)->GetInformation());
                func = i;
        }
    }

    if (func < 0) {
        QMessageBox::information(this, "Sucesso", "Funcionário não encontrado :C");

    }

}


void Funcionarios::on_pushButton_4_clicked()
{
    ui->mostrar_nome2->clear();

    QString nome = ui->p_nome2->text();
    int func = -1;

    for (size_t i = 0; i < m_menuParent->vetor_funcinarios().size(); i++){
        if (m_menuParent->vetor_funcinarios().at(i) != nullptr &&
            m_menuParent->vetor_funcinarios().at(i)->GetNome().contains(nome,  Qt::CaseInsensitive)){
            ui->mostrar_nome2->addItem(m_menuParent->vetor_funcinarios().at(i)->GetInformation());
            func = i;
        }
    }

    if (func < 0) {
        QMessageBox::information(this, "Aviso", "Funcionário não encontrado :C");
    }
}


void Funcionarios::on_pushButton_3_clicked()
{
    QString id = ui->id_2->text();

    if (id.isEmpty()) {
        QMessageBox::warning(this, "Erro", "Digite uma ID");
        return;
    }

    if (m_menuParent->deletarFuncionario(id)) {
        QMessageBox::information(this, "Sucesso", "Funcionário deletado com sucesso!");
    } else {
        QMessageBox::warning(this, "Erro", "Funcionário não encontrado!");
    }
}

void Funcionarios::on_tab_windowTitleChanged(const QString &title)
{
}

