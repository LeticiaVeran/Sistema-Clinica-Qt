#ifndef PACIENTE_H
#define PACIENTE_H

#include <QDialog>

class Menu;

namespace Ui {
class Paciente;
}

class Paciente : public QDialog
{
    Q_OBJECT

public:
    explicit Paciente(Menu* menuParent, QWidget *parent = nullptr);
    ~Paciente();

private slots:
    void on_Alterar_d_clicked();

    void on_novo_func_clicked();

    void on_buttonBox_accepted();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_buttonBox_rejected();

private:
    Ui::Paciente *ui;
    Menu* m_menuParent; // Ponteiro para a janela Menu

};

class Pacientes
{
protected:
    QString m_convenio, m_nome, m_idade, m_id, m_peso;

public:
    Pacientes() {}
    Pacientes(QString nome, QString idade, QString convenio, QString id, QString peso)
        : m_convenio(convenio), m_nome(nome), m_idade(idade), m_id(id), m_peso(peso) {}

    void SetPeso(QString nome) {
        m_peso = nome;
    }

    void SetNome(QString nome) {
        m_nome = nome;
    }

    void SetIdade(QString idade) {
        m_idade = idade;
    }

    void SetConvenio(QString convenio) {
        m_convenio = convenio;
    }

    QString GetIdade() {
        return m_idade;
    }

    QString GetConvenio() {
        return m_convenio;
    }

    QString GetPeso() {
        return m_peso;
    }

    QString GetId() {
        return m_id;
    }

    QString GetNome() {
        return m_nome;
    }

    QString GetInformation() {
        return "\nNome: " + m_nome + "\nIdade: " + m_idade + "\nPeso: " + m_peso + "\nConvênio: " + m_convenio + "\nID: " + m_id;
    }

    ~Pacientes() {}
};

#endif // PACIENTE_H


