#ifndef MENU_H
#define MENU_H

#include <QMainWindow>
#include <vector>
#include "funcionarios.h"
#include "paciente.h"
#include "remedio.h"
#include "consulta.h"
#include <QDate>

using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui {
class Menu;
}
QT_END_NAMESPACE

class Menu : public QMainWindow
{
    Q_OBJECT

private:
    Ui::Menu *ui;
    vector<Funcionario*> m_funcionarios;
    vector<Pacientes*> m_paciente;
    vector<Remedios*> m_remedios;
    vector<Consultas*> m_consultas;

    QString m_id_p, m_id_r, m_id_m, m_obs;


public:
    Menu(QWidget *parent = nullptr);
    ~Menu();

    //consultas
    vector<Consultas*> vetor_consultas() {
        return m_consultas;
    }

    void v_consultas(Consultas consulta) {
        m_consultas.push_back(new Consultas(consulta));
    }

    bool deletarConsulta(QString id) {
        for (size_t i = 0; i < m_consultas.size(); ++i) {
            if (m_consultas[i]->GetId() == id) {
                delete m_consultas[i];
                m_consultas.erase(m_consultas.begin() + i);
                return true;
            }
        }
        return false;
    }

    QString buscarConsultaPorId(QString id) {
        for (size_t i = 0; i < m_consultas.size(); ++i) {
            if (m_consultas[i]->GetId() == id) {
                return m_consultas[i]->GetInformation();
            }
        }
        return "Consulta não encontrada";
    }

    bool verificarConflitoHorario(QString idMedico, QString dataHora) {
        for (size_t i = 0; i < m_consultas.size(); ++i) {
            if (m_consultas[i]->GetIdMedico() == idMedico &&
                m_consultas[i]->GetDataHora() == dataHora) {
                return true;  // Conflito encontrado
            }
        }
        return false;  // Sem conflito
    }

    //ids

    void SetIdP(QString id){
        m_id_p = id;
    }

    void SetObs(QString id){
        m_obs = id;
    }

    void SetIdR(QString id){
        m_id_r = id;
    }

    void SetIdM(QString id){
        m_id_m = id;
    }

    QString GetIdP(){
        return m_id_p;
    }

    QString GetIdR(){
        return m_id_r;
    }

    QString GetIdM(){
        return m_id_m;
    }

    QString GetObs(){
        return m_obs;
    }


    //funcionarios
    vector<Funcionario*> vetor_funcinarios() {
        return m_funcionarios;
    }

    void v_func(Funcionario funcionario) {
        m_funcionarios.push_back(new Funcionario(funcionario));
    }

    void v_func_m(Medico funcionario) {
        m_funcionarios.push_back(new Medico(funcionario));
    }

    bool deletarFuncionario(QString id);

    //pacientes
    vector<Pacientes*> vetor_pacientes() {
        return m_paciente;
    }

    void v_paciente(Pacientes paciente) {
        m_paciente.push_back(new Pacientes(paciente));
    }

    bool deletarPaciente(QString id);

    //remedios
    vector<Remedios*> vetor_remedios() {
        return m_remedios;
    }

    void v_remedios(Remedios remedio) {
        m_remedios.push_back(new Remedios(remedio));
    }

    bool deletarRemedio(QString nome);

    //arquivos
    bool salvarDados(QString filename);
    bool carregarDados(QString filename);

    //busca
    QString buscarNomeMedicoPorId();
    QString buscarNomePacientePorId();
    QString buscarNomeRemedioPorId();
    QString buscarCrmMedicoPorId();

private slots:
    void on_actionFuncion_rios_triggered();
    void on_actionPacientes_triggered();
    void on_actionRem_dios_triggered();
    void on_actionReceitas_triggered();
    void on_action_consultas_triggered();
    void on_pushButton_clicked();
    void on_actionVers_o_triggered();
    void on_actionDesenvolvedor_triggered();
};

#endif // MENU_H
