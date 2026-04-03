/********************************************************************************
** Form generated from reading UI file 'funcionarios.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FUNCIONARIOS_H
#define UI_FUNCIONARIOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Funcionarios
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *nome_f;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QLineEdit *salario;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QRadioButton *medico;
    QRadioButton *outra;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *crmbox;
    QLabel *crml;
    QLineEdit *crm;
    QWidget *verticalLayoutWidget_5;
    QVBoxLayout *espbox;
    QLabel *espcl;
    QLineEdit *espc;
    QDialogButtonBox *buttonBox;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QRadioButton *novo_func;
    QRadioButton *Alterar_d;
    QWidget *verticalLayoutWidget_9;
    QVBoxLayout *funcaobox;
    QLabel *funcaol;
    QLineEdit *funcao;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *idlb;
    QLineEdit *id;
    QWidget *tab_2;
    QWidget *verticalLayoutWidget_7;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_8;
    QLineEdit *p_nome;
    QListWidget *mostrar_nome;
    QPushButton *pushButton_2;
    QWidget *verticalLayoutWidget_6;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_7;
    QListWidget *lista1;
    QPushButton *pushButton;
    QWidget *tab_3;
    QWidget *verticalLayoutWidget_8;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *idlb_2;
    QLineEdit *id_2;
    QPushButton *pushButton_3;
    QWidget *verticalLayoutWidget_10;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_9;
    QLineEdit *p_nome2;
    QListWidget *mostrar_nome2;
    QPushButton *pushButton_4;

    void setupUi(QDialog *Funcionarios)
    {
        if (Funcionarios->objectName().isEmpty())
            Funcionarios->setObjectName("Funcionarios");
        Funcionarios->resize(550, 280);
        tabWidget = new QTabWidget(Funcionarios);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(0, 0, 550, 280));
        tab = new QWidget();
        tab->setObjectName("tab");
        verticalLayoutWidget = new QWidget(tab);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(10, 60, 160, 55));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        nome_f = new QLineEdit(verticalLayoutWidget);
        nome_f->setObjectName("nome_f");

        verticalLayout->addWidget(nome_f);

        verticalLayoutWidget_2 = new QWidget(tab);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(10, 120, 160, 55));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(verticalLayoutWidget_2);
        label_3->setObjectName("label_3");

        verticalLayout_2->addWidget(label_3);

        salario = new QLineEdit(verticalLayoutWidget_2);
        salario->setObjectName("salario");

        verticalLayout_2->addWidget(salario);

        verticalLayoutWidget_3 = new QWidget(tab);
        verticalLayoutWidget_3->setObjectName("verticalLayoutWidget_3");
        verticalLayoutWidget_3->setGeometry(QRect(190, 60, 160, 84));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(verticalLayoutWidget_3);
        label_2->setObjectName("label_2");

        verticalLayout_3->addWidget(label_2);

        medico = new QRadioButton(verticalLayoutWidget_3);
        medico->setObjectName("medico");

        verticalLayout_3->addWidget(medico);

        outra = new QRadioButton(verticalLayoutWidget_3);
        outra->setObjectName("outra");

        verticalLayout_3->addWidget(outra);

        verticalLayoutWidget_4 = new QWidget(tab);
        verticalLayoutWidget_4->setObjectName("verticalLayoutWidget_4");
        verticalLayoutWidget_4->setGeometry(QRect(370, 60, 160, 61));
        crmbox = new QVBoxLayout(verticalLayoutWidget_4);
        crmbox->setObjectName("crmbox");
        crmbox->setContentsMargins(0, 0, 0, 0);
        crml = new QLabel(verticalLayoutWidget_4);
        crml->setObjectName("crml");

        crmbox->addWidget(crml);

        crm = new QLineEdit(verticalLayoutWidget_4);
        crm->setObjectName("crm");

        crmbox->addWidget(crm);

        verticalLayoutWidget_5 = new QWidget(tab);
        verticalLayoutWidget_5->setObjectName("verticalLayoutWidget_5");
        verticalLayoutWidget_5->setGeometry(QRect(370, 130, 161, 55));
        espbox = new QVBoxLayout(verticalLayoutWidget_5);
        espbox->setObjectName("espbox");
        espbox->setContentsMargins(0, 0, 0, 0);
        espcl = new QLabel(verticalLayoutWidget_5);
        espcl->setObjectName("espcl");

        espbox->addWidget(espcl);

        espc = new QLineEdit(verticalLayoutWidget_5);
        espc->setObjectName("espc");

        espbox->addWidget(espc);

        buttonBox = new QDialogButtonBox(tab);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(362, 200, 171, 29));
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        horizontalLayoutWidget = new QWidget(tab);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(10, 10, 341, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        novo_func = new QRadioButton(horizontalLayoutWidget);
        novo_func->setObjectName("novo_func");

        horizontalLayout->addWidget(novo_func);

        Alterar_d = new QRadioButton(horizontalLayoutWidget);
        Alterar_d->setObjectName("Alterar_d");

        horizontalLayout->addWidget(Alterar_d);

        verticalLayoutWidget_9 = new QWidget(tab);
        verticalLayoutWidget_9->setObjectName("verticalLayoutWidget_9");
        verticalLayoutWidget_9->setGeometry(QRect(190, 160, 160, 61));
        funcaobox = new QVBoxLayout(verticalLayoutWidget_9);
        funcaobox->setObjectName("funcaobox");
        funcaobox->setContentsMargins(0, 0, 0, 0);
        funcaol = new QLabel(verticalLayoutWidget_9);
        funcaol->setObjectName("funcaol");

        funcaobox->addWidget(funcaol);

        funcao = new QLineEdit(verticalLayoutWidget_9);
        funcao->setObjectName("funcao");

        funcaobox->addWidget(funcao);

        horizontalLayoutWidget_2 = new QWidget(tab);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(370, 10, 161, 41));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        idlb = new QLabel(horizontalLayoutWidget_2);
        idlb->setObjectName("idlb");

        horizontalLayout_2->addWidget(idlb);

        id = new QLineEdit(horizontalLayoutWidget_2);
        id->setObjectName("id");

        horizontalLayout_2->addWidget(id);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        verticalLayoutWidget_7 = new QWidget(tab_2);
        verticalLayoutWidget_7->setObjectName("verticalLayoutWidget_7");
        verticalLayoutWidget_7->setGeometry(QRect(310, 20, 201, 211));
        verticalLayout_7 = new QVBoxLayout(verticalLayoutWidget_7);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(verticalLayoutWidget_7);
        label_8->setObjectName("label_8");
        label_8->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_7->addWidget(label_8);

        p_nome = new QLineEdit(verticalLayoutWidget_7);
        p_nome->setObjectName("p_nome");

        verticalLayout_7->addWidget(p_nome);

        mostrar_nome = new QListWidget(verticalLayoutWidget_7);
        mostrar_nome->setObjectName("mostrar_nome");

        verticalLayout_7->addWidget(mostrar_nome);

        pushButton_2 = new QPushButton(verticalLayoutWidget_7);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout_7->addWidget(pushButton_2);

        verticalLayoutWidget_6 = new QWidget(tab_2);
        verticalLayoutWidget_6->setObjectName("verticalLayoutWidget_6");
        verticalLayoutWidget_6->setGeometry(QRect(10, 20, 291, 211));
        verticalLayout_6 = new QVBoxLayout(verticalLayoutWidget_6);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(verticalLayoutWidget_6);
        label_7->setObjectName("label_7");
        label_7->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_6->addWidget(label_7);

        lista1 = new QListWidget(verticalLayoutWidget_6);
        lista1->setObjectName("lista1");

        verticalLayout_6->addWidget(lista1);

        pushButton = new QPushButton(verticalLayoutWidget_6);
        pushButton->setObjectName("pushButton");

        verticalLayout_6->addWidget(pushButton);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        verticalLayoutWidget_8 = new QWidget(tab_3);
        verticalLayoutWidget_8->setObjectName("verticalLayoutWidget_8");
        verticalLayoutWidget_8->setGeometry(QRect(30, 10, 191, 111));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_8);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(verticalLayoutWidget_8);
        label_4->setObjectName("label_4");
        label_4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_4->addWidget(label_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        idlb_2 = new QLabel(verticalLayoutWidget_8);
        idlb_2->setObjectName("idlb_2");

        horizontalLayout_3->addWidget(idlb_2);

        id_2 = new QLineEdit(verticalLayoutWidget_8);
        id_2->setObjectName("id_2");

        horizontalLayout_3->addWidget(id_2);


        verticalLayout_4->addLayout(horizontalLayout_3);

        pushButton_3 = new QPushButton(verticalLayoutWidget_8);
        pushButton_3->setObjectName("pushButton_3");

        verticalLayout_4->addWidget(pushButton_3);

        verticalLayoutWidget_10 = new QWidget(tab_3);
        verticalLayoutWidget_10->setObjectName("verticalLayoutWidget_10");
        verticalLayoutWidget_10->setGeometry(QRect(280, 10, 211, 211));
        verticalLayout_8 = new QVBoxLayout(verticalLayoutWidget_10);
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(verticalLayoutWidget_10);
        label_9->setObjectName("label_9");
        label_9->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_8->addWidget(label_9);

        p_nome2 = new QLineEdit(verticalLayoutWidget_10);
        p_nome2->setObjectName("p_nome2");

        verticalLayout_8->addWidget(p_nome2);

        mostrar_nome2 = new QListWidget(verticalLayoutWidget_10);
        mostrar_nome2->setObjectName("mostrar_nome2");

        verticalLayout_8->addWidget(mostrar_nome2);

        pushButton_4 = new QPushButton(verticalLayoutWidget_10);
        pushButton_4->setObjectName("pushButton_4");

        verticalLayout_8->addWidget(pushButton_4);

        tabWidget->addTab(tab_3, QString());

        retranslateUi(Funcionarios);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(Funcionarios);
    } // setupUi

    void retranslateUi(QDialog *Funcionarios)
    {
        Funcionarios->setWindowTitle(QCoreApplication::translate("Funcionarios", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Funcionarios", "Nome:", nullptr));
        label_3->setText(QCoreApplication::translate("Funcionarios", "Sal\303\241rio", nullptr));
        label_2->setText(QCoreApplication::translate("Funcionarios", "Fun\303\247\303\243o:", nullptr));
        medico->setText(QCoreApplication::translate("Funcionarios", "M\303\251dico", nullptr));
        outra->setText(QCoreApplication::translate("Funcionarios", "Outra", nullptr));
        crml->setText(QCoreApplication::translate("Funcionarios", "CRM:", nullptr));
        espcl->setText(QCoreApplication::translate("Funcionarios", "Especialidade", nullptr));
        novo_func->setText(QCoreApplication::translate("Funcionarios", "Novo Funcion\303\241rio", nullptr));
        Alterar_d->setText(QCoreApplication::translate("Funcionarios", "Alterar Dados", nullptr));
        funcaol->setText(QCoreApplication::translate("Funcionarios", "Fun\303\247\303\243o", nullptr));
        idlb->setText(QCoreApplication::translate("Funcionarios", "ID", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("Funcionarios", "Tab 1", nullptr));
        label_8->setText(QCoreApplication::translate("Funcionarios", "Pesquisar por nome:", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Funcionarios", "Listar", nullptr));
        label_7->setText(QCoreApplication::translate("Funcionarios", "Listar Funcion\303\241rios", nullptr));
        pushButton->setText(QCoreApplication::translate("Funcionarios", "Listar", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("Funcionarios", "Tab 2", nullptr));
        label_4->setText(QCoreApplication::translate("Funcionarios", "Excluir Funcion\303\241rio", nullptr));
        idlb_2->setText(QCoreApplication::translate("Funcionarios", "ID", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Funcionarios", "Excluir", nullptr));
        label_9->setText(QCoreApplication::translate("Funcionarios", "Pesquisar por nome:", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Funcionarios", "Listar", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("Funcionarios", "Page", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Funcionarios: public Ui_Funcionarios {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FUNCIONARIOS_H
