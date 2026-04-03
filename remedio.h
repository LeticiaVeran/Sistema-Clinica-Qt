#ifndef REMEDIO_H
#define REMEDIO_H

#include <QDialog>
#include <QRandomGenerator>

class Menu;

namespace Ui {
class Remedio;
}

class Remedio : public QDialog
{
    Q_OBJECT

public:
    explicit Remedio(Menu* menuParent, QWidget *parent = nullptr);
    ~Remedio();

private slots:
    void on_buttonBox_accepted();
    void on_buttonBox_rejected();
    void on_Alterar_d_clicked();
    void on_novo_func_clicked();
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();

private:
    Ui::Remedio *ui;
    Menu* m_menuParent; // Ponteiro para a janela Menu

};

class Remedios
{
protected:
    QString m_nome;
    QString m_formaFarmaceutica;
    QString m_principioAtivo;
    QString m_dosagem;
    QString m_id;


public:
    Remedios() {}
    Remedios(QString nome, QString formaFarmaceutica, QString principioAtivo, QString dosagem, QString id)
        : m_nome(nome), m_formaFarmaceutica(formaFarmaceutica),
        m_principioAtivo(principioAtivo), m_dosagem(dosagem), m_id(id){}

    void SetNome(QString nome) {
        m_nome = nome;
    }

    void SetFormaFarmaceutica(QString forma) {
        m_formaFarmaceutica = forma;
    }

    void SetPrincipioAtivo(QString principio) {
        m_principioAtivo = principio;
    }

    void SetDosagem(QString dosagem) {
        m_dosagem = dosagem;
    }

    QString GetNome() {
        return m_nome;
    }

    QString GetFormaFarmaceutica() {
        return m_formaFarmaceutica;
    }

    QString GetPrincipioAtivo() {
        return m_principioAtivo;
    }

    QString GetDosagem() {
        return m_dosagem;
    }

    QString GetId(){
        return m_id;
    }

    QString GetInformation() {
        return "\nNome: " + m_nome +
               "\nForma Farmacêutica: " + m_formaFarmaceutica +
               "\nPrincípio Ativo: " + m_principioAtivo +
               "\nDosagem: " + m_dosagem +
               "\nID: " + m_id;
    }


    QString GetInformationSemID() {
        return "\nNome: " + m_nome +
               "\nForma Farmacêutica: " + m_formaFarmaceutica +
               "\nPrincípio Ativo: " + m_principioAtivo +
               "\nDosagem: " + m_dosagem;
    }

    ~Remedios() {}
};

#endif // REMEDIO_H
