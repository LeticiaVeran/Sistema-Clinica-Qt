#ifndef CONSULTA_H
#define CONSULTA_H

#include <QDialog>

class Menu;

namespace Ui {
class Consulta;
}

class Consulta : public QDialog
{
    Q_OBJECT

public:
    explicit Consulta(Menu* menuParent, QWidget *parent = nullptr);
    ~Consulta();

private slots:
    void on_novo_func_clicked();

    void on_Alterar_d_clicked();

    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::Consulta *ui;
    Menu* m_menuParent;

};

class Consultas
{
protected:
    QString m_id, m_idPaciente, m_idMedico, m_observacoes;
    QString m_dataHora;

public:
    Consultas() {}
    Consultas(QString id, QString idPaciente, QString idMedico, QString dataHora, QString observacoes)
        : m_id(id), m_idPaciente(idPaciente), m_idMedico(idMedico),
        m_dataHora(dataHora), m_observacoes(observacoes) {}

    void SetIdPaciente(QString idPaciente) {
        m_idPaciente = idPaciente;
    }

    void SetIdMedico(QString idMedico) {
        m_idMedico = idMedico;
    }

    void SetDataHora(QString dataHora) {
        m_dataHora = dataHora;
    }

    void SetObservacoes(QString observacoes) {
        m_observacoes = observacoes;
    }

    QString GetId() {
        return m_id;
    }

    QString GetIdPaciente() {
        return m_idPaciente;
    }

    QString GetIdMedico() {
        return m_idMedico;
    }

    QString GetDataHora() {
        return m_dataHora;
    }

    QString GetObservacoes() {
        return m_observacoes;
    }

    QString GetInformation() {
        return "\nID: " + m_id + "\nPaciente ID: " + m_idPaciente + "\nMédico ID: " + m_idMedico +
               "\nData/Hora: " + m_dataHora + "\nObs: " + m_observacoes;
    }

    ~Consultas() {}
};


#endif // CONSULTA_H
