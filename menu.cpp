#include "menu.h"
#include "ui_menu.h"
#include "funcionarios.h"
#include "paciente.h"
#include "remedio.h"
#include "receita.h"
#include "versao.h"
#include "desenvolvedor.h"

#include <QFile>
#include <QTextStream>
#include <QMessageBox>

Menu::Menu(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Menu)
{
    ui->setupUi(this);
    ui->dataconsultas->setDateTime(QDateTime::currentDateTime());
    carregarDados("dados_clinica.txt");
}

void Menu::on_actionFuncion_rios_triggered()
{
    Funcionarios *dialog = new Funcionarios(this, this);
    dialog->exec();
    delete dialog;
}

Menu::~Menu()
{
    delete ui;
    salvarDados("dados_clinica.txt");
}

bool Menu::deletarFuncionario(QString id)
{
    for (size_t i = 0; i < m_funcionarios.size(); i++) {
        if (m_funcionarios[i] != nullptr && m_funcionarios[i]->GetId() == id) {
            delete m_funcionarios[i];
            m_funcionarios.erase(m_funcionarios.begin() + i);
            return true;
        }
    }
    return false;
}

bool Menu::deletarPaciente(QString id)
{
    for (size_t i = 0; i < m_paciente.size(); i++) {
        if (m_paciente[i] != nullptr && m_paciente[i]->GetId() == id) {
            delete m_paciente[i];
            m_paciente.erase(m_paciente.begin() + i);
            return true;
        }
    }
    return false;
}

void Menu::on_actionPacientes_triggered()
{
    Paciente *dialog = new Paciente(this, this);
    dialog->exec();
    delete dialog;
}

bool Menu::salvarDados(QString filename) {
    QFile file(filename);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QMessageBox::warning(this, "Erro", "Não foi possível abrir o arquivo para escrita!");
        return false;
    }

    QTextStream out(&file);

    // Seção de Funcionários
    out << "[FUNCIONARIOS]\n";
    for (size_t i = 0; i < m_funcionarios.size(); i++) {
        Funcionario* func = m_funcionarios[i];
        if (func) {
            out << "TIPO:" << func->GetFuncao() << "\n";
            out << "ID:" << func->GetId() << "\n";
            out << "NOME:" << func->GetNome() << "\n";
            out << "SALARIO:" << func->GetSalario() << "\n";
            out << "FUNCAO:" << func->GetFuncao() << "\n";

            if (func->GetFuncao() == "Médico") {
                out << "CRM:" << func->GetCrm() << "\n";
                out << "ESPECIALIDADE:" << func->GetEspec() << "\n";
            }
            out << "---\n";
        }
    }

    // Seção de Pacientes
    out << "[PACIENTES]\n";
    for (size_t i = 0; i < m_paciente.size(); i++) {
        Pacientes* paciente = m_paciente[i];
        if (paciente) {
            out << "ID:" << paciente->GetId() << "\n";
            out << "NOME:" << paciente->GetNome() << "\n";
            out << "IDADE:" << paciente->GetIdade() << "\n";
            out << "CONVENIO:" << paciente->GetConvenio() << "\n";
            out << "PESO:" << paciente->GetPeso() << "\n";
            out << "---\n";
        }
    }

    // Seção de Remédios
    out << "[REMEDIOS]\n";
    for (size_t i = 0; i < m_remedios.size(); i++) {
        Remedios* remedio = m_remedios[i];
        if (remedio) {
            out << "ID:" << remedio->GetId() << "\n";
            out << "NOME:" << remedio->GetNome() << "\n";
            out << "FORMA_FARM:" << remedio->GetFormaFarmaceutica() << "\n";
            out << "PRINCIPIO_ATIVO:" << remedio->GetPrincipioAtivo() << "\n";
            out << "DOSAGEM:" << remedio->GetDosagem() << "\n";
            out << "---\n";
        }
    }

    // NOVA Seção de Consultas
    out << "[CONSULTAS]\n";
    for (size_t i = 0; i < m_consultas.size(); i++) {
        Consultas* consulta = m_consultas[i];
        if (consulta) {
            out << "ID:" << consulta->GetId() << "\n";
            out << "ID_PACIENTE:" << consulta->GetIdPaciente() << "\n";
            out << "ID_MEDICO:" << consulta->GetIdMedico() << "\n";
            out << "DATA_HORA:" << consulta->GetDataHora() << "\n";
            out << "OBSERVACOES:" << consulta->GetObservacoes() << "\n";
            out << "---\n";
        }
    }

    file.close();
    return true;
}

bool Menu::carregarDados(QString filename) {
    QFile file(filename);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::warning(this, "Aviso", "Arquivo não encontrado. Será criado um novo ao salvar.");
        return false;
    }

    // Limpa todos os vetores existentes
    for (size_t i = 0; i < m_funcionarios.size(); i++) {
        delete m_funcionarios[i];
    }
    for (size_t i = 0; i < m_paciente.size(); i++) {
        delete m_paciente[i];
    }
    for (size_t i = 0; i < m_remedios.size(); i++) {
        delete m_remedios[i];
    }
    for (size_t i = 0; i < m_consultas.size(); i++) {
        delete m_consultas[i];
    }
    m_funcionarios.clear();
    m_paciente.clear();
    m_remedios.clear();
    m_consultas.clear();

    QTextStream in(&file);
    QString currentSection;
    QString linha;
    QString tipo, id, nome, salario, funcao, crm, especialidade, idade, convenio, peso;
    QString formaFarmaceutica, principioAtivo, dosagem;
    QString idPaciente, idMedico, dataHora, observacoes;

    while (!in.atEnd()) {
        linha = in.readLine().trimmed();

        if (linha.isEmpty()) continue;

        if (linha == "[FUNCIONARIOS]") {
            currentSection = "FUNCIONARIOS";
            continue;
        }
        else if (linha == "[PACIENTES]") {
            currentSection = "PACIENTES";
            continue;
        }
        else if (linha == "[REMEDIOS]") {
            currentSection = "REMEDIOS";
            continue;
        }
        else if (linha == "[CONSULTAS]") {
            currentSection = "CONSULTAS";
            continue;
        }
        else if (linha.startsWith("TIPO:")) {
            tipo = linha.mid(5);
        }
        else if (linha.startsWith("ID:")) {
            id = linha.mid(3);
        }
        else if (linha.startsWith("NOME:")) {
            nome = linha.mid(5);
        }
        else if (linha.startsWith("SALARIO:")) {
            salario = linha.mid(8);
        }
        else if (linha.startsWith("FUNCAO:")) {
            funcao = linha.mid(7);
        }
        else if (linha.startsWith("CRM:")) {
            crm = linha.mid(4);
        }
        else if (linha.startsWith("ESPECIALIDADE:")) {
            especialidade = linha.mid(14);
        }
        else if (linha.startsWith("IDADE:")) {
            idade = linha.mid(6);
        }
        else if (linha.startsWith("CONVENIO:")) {
            convenio = linha.mid(9);
        }
        else if (linha.startsWith("PESO:")) {
            peso = linha.mid(5);
        }
        else if (linha.startsWith("FORMA_FARM:")) {
            formaFarmaceutica = linha.mid(11);
        }
        else if (linha.startsWith("PRINCIPIO_ATIVO:")) {
            principioAtivo = linha.mid(16);
        }
        else if (linha.startsWith("DOSAGEM:")) {
            dosagem = linha.mid(8);
        }
        else if (linha.startsWith("ID_PACIENTE:")) {
            idPaciente = linha.mid(12);
        }
        else if (linha.startsWith("ID_MEDICO:")) {
            idMedico = linha.mid(10);
        }
        else if (linha.startsWith("DATA_HORA:")) {
            dataHora = linha.mid(10);
        }
        else if (linha.startsWith("OBSERVACOES:")) {
            observacoes = linha.mid(12);
        }
        else if (linha == "---") {
            if (currentSection == "FUNCIONARIOS") {
                if (tipo == "Médico") {
                    m_funcionarios.push_back(new Medico(nome, salario, funcao, id, crm, especialidade));
                } else {
                    m_funcionarios.push_back(new Funcionario(nome, salario, funcao, id));
                }
                tipo = id = nome = salario = funcao = crm = especialidade = "";
            }
            else if (currentSection == "PACIENTES") {
                m_paciente.push_back(new Pacientes(nome, idade, convenio, id, peso));
                id = nome = idade = convenio = peso = "";
            }
            else if (currentSection == "REMEDIOS") {
                m_remedios.push_back(new Remedios(nome, formaFarmaceutica, principioAtivo, dosagem, id));
                id = nome = formaFarmaceutica = principioAtivo = dosagem = "";
            }
            else if (currentSection == "CONSULTAS") {
                m_consultas.push_back(new Consultas(id, idPaciente, idMedico, dataHora, observacoes));
                id = idPaciente = idMedico = dataHora = observacoes = "";
            }
        }
    }

    file.close();
    return true;
}

void Menu::on_actionRem_dios_triggered()
{
    Remedio *dialog = new Remedio(this, this);
    dialog->exec();
    delete dialog;
}

bool Menu::deletarRemedio(QString id)
{
    for (size_t i = 0; i < m_remedios.size(); i++) {
        if (m_remedios[i] != nullptr && m_remedios[i]->GetId() == id) {
            delete m_remedios[i];
            m_remedios.erase(m_remedios.begin() + i);
            return true;
        }
    }
    return false;
}

void Menu::on_actionReceitas_triggered()
{
    Receita *dialog = new Receita(this, this);
    dialog->exec();
    delete dialog;
}

QString Menu::buscarNomePacientePorId() {
    for(size_t i = 0; i < m_paciente.size(); ++i) {
        if(m_paciente[i] != nullptr && m_paciente[i]->GetId() == m_id_p) {
            return m_paciente[i]->GetNome();
        }
    }
    return "Não encontrado";
}

QString Menu::buscarNomeRemedioPorId() {
    for(size_t i = 0; i < m_remedios.size(); ++i) {
        if(m_remedios[i] != nullptr && m_remedios[i]->GetId() == m_id_r) {
            return m_remedios[i]->GetInformationSemID();
        }
    }
    return "Não encontrado";
}

QString Menu::buscarNomeMedicoPorId() {
    for(size_t i = 0; i < m_funcionarios.size(); ++i) {
        Funcionario* func = m_funcionarios[i];
        if(func->GetId() == m_id_m) {
            return func->GetNome();
        }
    }
    return "Não encontrado";
}

QString Menu::buscarCrmMedicoPorId() {
    for(size_t i = 0; i < m_funcionarios.size(); ++i) {
        Funcionario* func = m_funcionarios[i];
        if(func->GetId() == m_id_m) {
            return func->GetCrm();
        }
    }
    return "Não encontrado";
}

void Menu::on_action_consultas_triggered()
{
    Consulta *dialog = new Consulta(this, this);
    dialog->exec();
    delete dialog;
}


void Menu::on_pushButton_clicked()
{
    ui->listaconsultas->clear();

    QString dataBuscada = ui->dataconsultas->text().trimmed();
    if (dataBuscada.isEmpty()) {
        QMessageBox::warning(this, "Aviso", "Digite uma data (dd/MM/yyyy)");
        return;
    }

    bool encontrou = false;

    for (size_t i = 0; i < m_consultas.size(); i++) {
        Consultas* consulta = m_consultas[i];
        if (consulta->GetDataHora().left(10) == dataBuscada) {
            QString nomeMedico = "Não encontrado";

            for (size_t j = 0; j < m_funcionarios.size(); j++) {
                if (m_funcionarios[j]->GetId() == consulta->GetIdMedico()) {
                    nomeMedico = m_funcionarios[j]->GetNome();
                    break;
                }
            }

            QString nomePaciente = "Não encontrado";
            for (size_t k = 0; k < m_paciente.size(); k++) {
                if (m_paciente[k]->GetId() == consulta->GetIdPaciente()) {
                    nomePaciente = m_paciente[k]->GetNome();
                    break;
                }
            }

            QString info = "Consulta ID: " + consulta->GetId() + "\n" +
                           "Data/Hora: " + consulta->GetDataHora() + "\n" +
                           "Médico: " + nomeMedico;

            info += "\nPaciente: " + nomePaciente + "\n" +
                    "Observações: " + consulta->GetObservacoes() + "\n" +
                    "--------------------------";

            ui->listaconsultas->addItem(info);
            encontrou = true;
        }
    }

    if (!encontrou) {
        QMessageBox::information(this, "Informação", "Nenhuma consulta em " + dataBuscada);
    }
}


void Menu::on_actionVers_o_triggered()
{
    versao *dialog = new versao(this);
    dialog->exec();
    delete dialog;
}


void Menu::on_actionDesenvolvedor_triggered()
{
    Desenvolvedor *dialog = new Desenvolvedor(this);
    dialog->exec();
    delete dialog;
}

