/********************************************************************************
** Form generated from reading UI file 'versao.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VERSAO_H
#define UI_VERSAO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_versao
{
public:
    QLabel *label;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLabel *label_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;

    void setupUi(QDialog *versao)
    {
        if (versao->objectName().isEmpty())
            versao->setObjectName("versao");
        versao->resize(788, 337);
        label = new QLabel(versao);
        label->setObjectName("label");
        label->setGeometry(QRect(270, 10, 261, 81));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        horizontalLayoutWidget = new QWidget(versao);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(30, 70, 871, 262));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(horizontalLayoutWidget);
        label_4->setObjectName("label_4");

        horizontalLayout->addWidget(label_4);

        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        verticalLayoutWidget = new QWidget(versao);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(130, 370, 160, 80));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);

        retranslateUi(versao);

        QMetaObject::connectSlotsByName(versao);
    } // setupUi

    void retranslateUi(QDialog *versao)
    {
        versao->setWindowTitle(QCoreApplication::translate("versao", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("versao", "T\303\255tulo: Vers\303\243o: 1.0.0\n"
"Data de lan\303\247amento: Julho/2025\n"
"\n"
"", nullptr));
        label_4->setText(QCoreApplication::translate("versao", "Sobre o Sistema: \n"
"\n"
"- Sistema de gerenciamento para cl\303\255nica m\303\251dica \n"
"- Oferece funcionalidades completas para cadastro e gerenciamento \n"
"- Gerencia funcion\303\241rios, m\303\251dicos, pacientes, rem\303\251dios, receitas e consultas \n"
"- Utiliza conceitos de programa\303\247\303\243o orientada a objetos \n"
"- Implementa heran\303\247a e polimorfismo \n"
"- Estrutura eficiente e de f\303\241cil manuten\303\247\303\243o \n"
"- Interface intuitiva para usu\303\241rios \n"
"- Armazenamento seguro de dados", nullptr));
        label_2->setText(QCoreApplication::translate("versao", "Principais funcionalidades:\n"
"\n"
"- Cadastro e gerenciamento de funcion\303\241rios e m\303\251dicos\n"
"- Cadastro e gerenciamento de pacientes\n"
"- Cadastro e gerenciamento de medicamentos\n"
"- Emiss\303\243o de receitas m\303\251dicas\n"
"- Agendamento e controle de consultas\n"
"- Visualiza\303\247\303\243o da agenda di\303\241ria", nullptr));
    } // retranslateUi

};

namespace Ui {
    class versao: public Ui_versao {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VERSAO_H
