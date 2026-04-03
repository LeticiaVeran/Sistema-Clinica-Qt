#ifndef FUNCIONARIOS_H
#define FUNCIONARIOS_H

#include <QString>
#include <QDialog>

using namespace std;

class Menu;

class Funcionario
{
protected:
    QString m_funcao, m_nome, m_salario, m_id;

public:
    Funcionario() {}
    Funcionario(QString nome, QString salario, QString funcao, QString id)
        : m_funcao(funcao), m_nome(nome), m_salario(salario), m_id(id) {}

    void SetName(QString nome){
        m_nome = nome;
    }

    void SetFuncao(QString nome){
        m_funcao = nome;
    }

    void SetSalario(QString nome){
        m_salario = nome;
    }

    virtual void SetCrm(QString nome){
    }

    virtual void SetEspec(QString nome){
    }

    QString GetId(){
        return m_id;
    }

    QString GetNome() {
        return m_nome;
    }

    QString GetSalario(){
        return m_salario;
    }

    QString GetFuncao(){
        return m_funcao;
    }

    virtual QString GetCrm(){}

    virtual QString GetEspec(){}

    virtual QString GetInformation() {
        return "\nNome: " + m_nome + "\nSalário: " + m_salario + "\nFunção: " + m_funcao + "\nID: " + m_id;
    }

    virtual ~Funcionario() {}
};

class Medico : public Funcionario
{
private:
    QString m_crm, m_especialidade;

public:
    Medico() {}
    Medico(QString nome, QString salario, QString funcao, QString id, QString crm, QString especi)
        : Funcionario(nome, salario, funcao, id), m_crm(crm), m_especialidade(especi) {}

    void SetCrm(QString nome){
        m_crm = nome;
    }

    void SetEspec(QString nome){
        m_especialidade = nome;
    }

    QString GetCrm(){
        return m_crm;
    }

    QString GetEspec(){
        return m_especialidade;
    }

    QString GetInformation() {
        return "\nNome: " + m_nome + "\nSalário: " + m_salario + "\nFunção: " + m_funcao +
               "\nID: " + m_id + "\nCRM: " + m_crm + "\nEspecialidade: " + m_especialidade;
    }
};

namespace Ui {
class Funcionarios;
}

class Funcionarios : public QDialog
{
    Q_OBJECT

private:
    Ui::Funcionarios *ui;
    Menu* m_menuParent;

public:
    explicit Funcionarios(Menu* menuParent, QWidget *parent = nullptr);
    ~Funcionarios();

private slots:
    void on_buttonBox_accepted();
    void on_pushButton_clicked();
    void on_novo_func_pressed();
    void on_novo_func_clicked();
    void on_outra_clicked();
    void on_medico_clicked();
    void on_Alterar_d_clicked();
    void on_buttonBox_rejected();
    void on_pushButton_2_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_3_clicked();
    void on_tab_windowTitleChanged(const QString &title);
};

#endif // FUNCIONARIOS_H
