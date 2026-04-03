/********************************************************************************
** Form generated from reading UI file 'consulta.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSULTA_H
#define UI_CONSULTA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateTimeEdit>
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

class Ui_Consulta
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
    QLineEdit *convenio;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *crmbox;
    QLabel *crml;
    QLineEdit *idade;
    QDialogButtonBox *buttonBox;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QRadioButton *novo_func;
    QRadioButton *Alterar_d;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *idlb;
    QLineEdit *id;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_5;
    QDateTimeEdit *dateTimeEdit;
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
    QWidget *tab_4;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QRadioButton *radio_paciente;
    QRadioButton *radio_medico;
    QWidget *verticalLayoutWidget_11;
    QVBoxLayout *verticalLayout_9;
    QLineEdit *pesquisar;
    QListWidget *pesquisarlista;
    QPushButton *pushButton_5;
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

    void setupUi(QDialog *Consulta)
    {
        if (Consulta->objectName().isEmpty())
            Consulta->setObjectName("Consulta");
        Consulta->resize(550, 290);
        tabWidget = new QTabWidget(Consulta);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(0, 0, 550, 290));
        tabWidget->setStyleSheet(QString::fromUtf8(""));
        tab = new QWidget();
        tab->setObjectName("tab");
        verticalLayoutWidget = new QWidget(tab);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(60, 60, 201, 57));
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
        verticalLayoutWidget_2->setGeometry(QRect(60, 120, 201, 57));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(verticalLayoutWidget_2);
        label_3->setObjectName("label_3");

        verticalLayout_2->addWidget(label_3);

        convenio = new QLineEdit(verticalLayoutWidget_2);
        convenio->setObjectName("convenio");

        verticalLayout_2->addWidget(convenio);

        verticalLayoutWidget_4 = new QWidget(tab);
        verticalLayoutWidget_4->setObjectName("verticalLayoutWidget_4");
        verticalLayoutWidget_4->setGeometry(QRect(280, 60, 181, 57));
        crmbox = new QVBoxLayout(verticalLayoutWidget_4);
        crmbox->setObjectName("crmbox");
        crmbox->setContentsMargins(0, 0, 0, 0);
        crml = new QLabel(verticalLayoutWidget_4);
        crml->setObjectName("crml");

        crmbox->addWidget(crml);

        idade = new QLineEdit(verticalLayoutWidget_4);
        idade->setObjectName("idade");

        crmbox->addWidget(idade);

        buttonBox = new QDialogButtonBox(tab);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(180, 200, 171, 29));
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

        verticalLayoutWidget_3 = new QWidget(tab);
        verticalLayoutWidget_3->setObjectName("verticalLayoutWidget_3");
        verticalLayoutWidget_3->setGeometry(QRect(280, 120, 181, 60));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(verticalLayoutWidget_3);
        label_5->setObjectName("label_5");

        verticalLayout_3->addWidget(label_5);

        dateTimeEdit = new QDateTimeEdit(verticalLayoutWidget_3);
        dateTimeEdit->setObjectName("dateTimeEdit");

        verticalLayout_3->addWidget(dateTimeEdit);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        verticalLayoutWidget_7 = new QWidget(tab_2);
        verticalLayoutWidget_7->setObjectName("verticalLayoutWidget_7");
        verticalLayoutWidget_7->setGeometry(QRect(290, 20, 242, 211));
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
        verticalLayoutWidget_6->setGeometry(QRect(10, 20, 271, 211));
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
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        horizontalLayoutWidget_3 = new QWidget(tab_4);
        horizontalLayoutWidget_3->setObjectName("horizontalLayoutWidget_3");
        horizontalLayoutWidget_3->setGeometry(QRect(90, 10, 381, 51));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(horizontalLayoutWidget_3);
        label_2->setObjectName("label_2");

        horizontalLayout_4->addWidget(label_2);

        radio_paciente = new QRadioButton(horizontalLayoutWidget_3);
        radio_paciente->setObjectName("radio_paciente");

        horizontalLayout_4->addWidget(radio_paciente);

        radio_medico = new QRadioButton(horizontalLayoutWidget_3);
        radio_medico->setObjectName("radio_medico");

        horizontalLayout_4->addWidget(radio_medico);

        verticalLayoutWidget_11 = new QWidget(tab_4);
        verticalLayoutWidget_11->setObjectName("verticalLayoutWidget_11");
        verticalLayoutWidget_11->setGeometry(QRect(90, 60, 381, 181));
        verticalLayout_9 = new QVBoxLayout(verticalLayoutWidget_11);
        verticalLayout_9->setObjectName("verticalLayout_9");
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        pesquisar = new QLineEdit(verticalLayoutWidget_11);
        pesquisar->setObjectName("pesquisar");

        verticalLayout_9->addWidget(pesquisar);

        pesquisarlista = new QListWidget(verticalLayoutWidget_11);
        pesquisarlista->setObjectName("pesquisarlista");

        verticalLayout_9->addWidget(pesquisarlista);

        pushButton_5 = new QPushButton(verticalLayoutWidget_11);
        pushButton_5->setObjectName("pushButton_5");

        verticalLayout_9->addWidget(pushButton_5);

        tabWidget->addTab(tab_4, QString());
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
        verticalLayoutWidget_10->setGeometry(QRect(250, 10, 271, 211));
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

        retranslateUi(Consulta);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(Consulta);
    } // setupUi

    void retranslateUi(QDialog *Consulta)
    {
        Consulta->setWindowTitle(QCoreApplication::translate("Consulta", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Consulta", "ID Paciente", nullptr));
        label_3->setText(QCoreApplication::translate("Consulta", "Observa\303\247\303\265es", nullptr));
        crml->setText(QCoreApplication::translate("Consulta", "ID Medico", nullptr));
        novo_func->setText(QCoreApplication::translate("Consulta", "Nova Consulta", nullptr));
        Alterar_d->setText(QCoreApplication::translate("Consulta", "Alterar Dados", nullptr));
        idlb->setText(QCoreApplication::translate("Consulta", "ID", nullptr));
        label_5->setText(QCoreApplication::translate("Consulta", "Data", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("Consulta", "Tab 1", nullptr));
        label_8->setText(QCoreApplication::translate("Consulta", "Pesquisar por IDs/data:", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Consulta", "Listar", nullptr));
        label_7->setText(QCoreApplication::translate("Consulta", "Listar Consultas", nullptr));
        pushButton->setText(QCoreApplication::translate("Consulta", "Listar", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("Consulta", "Tab 2", nullptr));
        label_2->setText(QCoreApplication::translate("Consulta", "Pesquisar: ", nullptr));
        radio_paciente->setText(QCoreApplication::translate("Consulta", "Paciente", nullptr));
        radio_medico->setText(QCoreApplication::translate("Consulta", "M\303\251dico", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Consulta", "Listar", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("Consulta", "Page", nullptr));
        label_4->setText(QCoreApplication::translate("Consulta", "Excluir Consulta", nullptr));
        idlb_2->setText(QCoreApplication::translate("Consulta", "ID", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Consulta", "Excluir", nullptr));
        label_9->setText(QCoreApplication::translate("Consulta", "Pesquisar por IDs/data:", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Consulta", "Listar", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("Consulta", "Page", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Consulta: public Ui_Consulta {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSULTA_H
