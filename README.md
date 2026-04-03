# 🏥 Sistema de Gerenciamento de Clínica

Sistema desktop desenvolvido em C++ com Qt para gerenciamento completo de uma clínica médica. Permite o cadastro e controle de pacientes, funcionários, médicos, remédios e consultas, com persistência de dados em arquivo texto.

---

## ⚙️ Funcionalidades

### 👤 Pacientes
- Cadastro com nome, idade, convênio, peso e ID gerado automaticamente
- Alteração de dados por ID
- Busca por nome
- Remoção por ID

### 👨‍⚕️ Funcionários e Médicos
- Cadastro de funcionários e médicos (com CRM e especialidade)
- Alteração e remoção por ID
- Listagem completa

### 💊 Remédios
- Cadastro com nome, forma farmacêutica, princípio ativo e dosagem
- Busca e remoção por ID

### 📅 Consultas
- Agendamento com médico, paciente, data/hora e observações
- Verificação automática de conflito de horário
- Busca de consultas por data
- Geração de receitas

### 💾 Persistência de Dados
- Dados salvos automaticamente em `dados_clinica.txt` ao fechar o programa
- Carregamento automático ao iniciar

---

## 🛠️ Tecnologias

- **Linguagem:** C++
- **Framework:** Qt (Widgets)
- **Interface:** Qt Designer (.ui)
- **Armazenamento:** Arquivo texto estruturado

---

## ▶️ Como executar

1. Abra o projeto no Qt Creator
2. Compile e execute (`Ctrl+R`)

> Os dados são salvos automaticamente em `dados_clinica.txt` na pasta do executável.

---

## 📁 Estrutura do Projeto

```
├── main.cpp              # Ponto de entrada
├── menu.h / menu.cpp     # Janela principal e gerenciamento de dados
├── paciente.h / .cpp     # Módulo de pacientes
├── funcionarios.h / .cpp # Módulo de funcionários e médicos
├── remedio.h / .cpp      # Módulo de remédios
├── consulta.h / .cpp     # Módulo de consultas
├── receita.h / .cpp      # Geração de receitas
├── *.ui                  # Interfaces gráficas (Qt Designer)
└── dados_clinica.txt     # Arquivo de persistência (gerado em runtime)
```

---

## 📚 Contexto Acadêmico

Trabalho desenvolvido na disciplina de Programação 2 — UFSC, Campus Araranguá, Curso de Engenharia da Computação.
