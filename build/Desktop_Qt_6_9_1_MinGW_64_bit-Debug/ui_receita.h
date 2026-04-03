/********************************************************************************
** Form generated from reading UI file 'receita.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECEITA_H
#define UI_RECEITA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
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

class Ui_Receita
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *idremedio;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLineEdit *idmedico;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QLineEdit *idpaciente;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QLineEdit *obs;
    QPushButton *pushButton;
    QWidget *tab_2;
    QWidget *verticalLayoutWidget_10;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_6;
    QListWidget *mostrar_nome2;
    QWidget *verticalLayoutWidget_11;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_10;
    QListWidget *mostrar_nome2_2;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton;
    QWidget *verticalLayoutWidget_5;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_7;
    QLineEdit *p_nome2;
    QLineEdit *p_nome2_2;
    QLineEdit *p_nome2_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QWidget *verticalLayoutWidget_12;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_11;
    QListWidget *mostrar_nome2_3;

    void setupUi(QDialog *Receita)
    {
        if (Receita->objectName().isEmpty())
            Receita->setObjectName("Receita");
        Receita->resize(460, 370);
        tabWidget = new QTabWidget(Receita);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(0, 0, 460, 370));
        tab = new QWidget();
        tab->setObjectName("tab");
        verticalLayoutWidget = new QWidget(tab);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(40, 60, 181, 61));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        idremedio = new QLineEdit(verticalLayoutWidget);
        idremedio->setObjectName("idremedio");

        verticalLayout->addWidget(idremedio);

        verticalLayoutWidget_2 = new QWidget(tab);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(240, 60, 181, 61));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(verticalLayoutWidget_2);
        label_2->setObjectName("label_2");

        verticalLayout_2->addWidget(label_2);

        idmedico = new QLineEdit(verticalLayoutWidget_2);
        idmedico->setObjectName("idmedico");

        verticalLayout_2->addWidget(idmedico);

        verticalLayoutWidget_3 = new QWidget(tab);
        verticalLayoutWidget_3->setObjectName("verticalLayoutWidget_3");
        verticalLayoutWidget_3->setGeometry(QRect(39, 149, 181, 61));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(verticalLayoutWidget_3);
        label_3->setObjectName("label_3");

        verticalLayout_3->addWidget(label_3);

        idpaciente = new QLineEdit(verticalLayoutWidget_3);
        idpaciente->setObjectName("idpaciente");

        verticalLayout_3->addWidget(idpaciente);

        verticalLayoutWidget_4 = new QWidget(tab);
        verticalLayoutWidget_4->setObjectName("verticalLayoutWidget_4");
        verticalLayoutWidget_4->setGeometry(QRect(240, 150, 181, 61));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(verticalLayoutWidget_4);
        label_4->setObjectName("label_4");

        verticalLayout_4->addWidget(label_4);

        obs = new QLineEdit(verticalLayoutWidget_4);
        obs->setObjectName("obs");

        verticalLayout_4->addWidget(obs);

        pushButton = new QPushButton(tab);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(140, 240, 171, 51));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        verticalLayoutWidget_10 = new QWidget(tab_2);
        verticalLayoutWidget_10->setObjectName("verticalLayoutWidget_10");
        verticalLayoutWidget_10->setGeometry(QRect(20, 90, 301, 231));
        verticalLayout_8 = new QVBoxLayout(verticalLayoutWidget_10);
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(verticalLayoutWidget_10);
        label_6->setObjectName("label_6");
        label_6->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_8->addWidget(label_6);

        mostrar_nome2 = new QListWidget(verticalLayoutWidget_10);
        mostrar_nome2->setObjectName("mostrar_nome2");

        verticalLayout_8->addWidget(mostrar_nome2);

        verticalLayoutWidget_11 = new QWidget(tab_2);
        verticalLayoutWidget_11->setObjectName("verticalLayoutWidget_11");
        verticalLayoutWidget_11->setGeometry(QRect(20, 90, 301, 231));
        verticalLayout_9 = new QVBoxLayout(verticalLayoutWidget_11);
        verticalLayout_9->setObjectName("verticalLayout_9");
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(verticalLayoutWidget_11);
        label_10->setObjectName("label_10");
        label_10->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_9->addWidget(label_10);

        mostrar_nome2_2 = new QListWidget(verticalLayoutWidget_11);
        mostrar_nome2_2->setObjectName("mostrar_nome2_2");

        verticalLayout_9->addWidget(mostrar_nome2_2);

        horizontalLayoutWidget = new QWidget(tab_2);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(20, 20, 421, 61));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(horizontalLayoutWidget);
        label_5->setObjectName("label_5");

        horizontalLayout->addWidget(label_5);

        radioButton_3 = new QRadioButton(horizontalLayoutWidget);
        radioButton_3->setObjectName("radioButton_3");

        horizontalLayout->addWidget(radioButton_3);

        radioButton_2 = new QRadioButton(horizontalLayoutWidget);
        radioButton_2->setObjectName("radioButton_2");

        horizontalLayout->addWidget(radioButton_2);

        radioButton = new QRadioButton(horizontalLayoutWidget);
        radioButton->setObjectName("radioButton");

        horizontalLayout->addWidget(radioButton);

        verticalLayoutWidget_5 = new QWidget(tab_2);
        verticalLayoutWidget_5->setObjectName("verticalLayoutWidget_5");
        verticalLayoutWidget_5->setGeometry(QRect(330, 90, 111, 71));
        verticalLayout_6 = new QVBoxLayout(verticalLayoutWidget_5);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(verticalLayoutWidget_5);
        label_7->setObjectName("label_7");

        verticalLayout_6->addWidget(label_7);

        p_nome2 = new QLineEdit(verticalLayoutWidget_5);
        p_nome2->setObjectName("p_nome2");

        verticalLayout_6->addWidget(p_nome2);

        p_nome2_2 = new QLineEdit(verticalLayoutWidget_5);
        p_nome2_2->setObjectName("p_nome2_2");

        verticalLayout_6->addWidget(p_nome2_2);

        p_nome2_3 = new QLineEdit(verticalLayoutWidget_5);
        p_nome2_3->setObjectName("p_nome2_3");

        verticalLayout_6->addWidget(p_nome2_3);

        pushButton_4 = new QPushButton(verticalLayoutWidget_5);
        pushButton_4->setObjectName("pushButton_4");

        verticalLayout_6->addWidget(pushButton_4);

        pushButton_6 = new QPushButton(verticalLayoutWidget_5);
        pushButton_6->setObjectName("pushButton_6");

        verticalLayout_6->addWidget(pushButton_6);

        pushButton_5 = new QPushButton(verticalLayoutWidget_5);
        pushButton_5->setObjectName("pushButton_5");

        verticalLayout_6->addWidget(pushButton_5);

        verticalLayoutWidget_12 = new QWidget(tab_2);
        verticalLayoutWidget_12->setObjectName("verticalLayoutWidget_12");
        verticalLayoutWidget_12->setGeometry(QRect(20, 90, 301, 231));
        verticalLayout_10 = new QVBoxLayout(verticalLayoutWidget_12);
        verticalLayout_10->setObjectName("verticalLayout_10");
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(verticalLayoutWidget_12);
        label_11->setObjectName("label_11");
        label_11->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_10->addWidget(label_11);

        mostrar_nome2_3 = new QListWidget(verticalLayoutWidget_12);
        mostrar_nome2_3->setObjectName("mostrar_nome2_3");

        verticalLayout_10->addWidget(mostrar_nome2_3);

        tabWidget->addTab(tab_2, QString());

        retranslateUi(Receita);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Receita);
    } // setupUi

    void retranslateUi(QDialog *Receita)
    {
        Receita->setWindowTitle(QCoreApplication::translate("Receita", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Receita", "ID do Rem\303\251dio:", nullptr));
        label_2->setText(QCoreApplication::translate("Receita", "ID do M\303\251dico:", nullptr));
        label_3->setText(QCoreApplication::translate("Receita", "ID do Paciente:", nullptr));
        label_4->setText(QCoreApplication::translate("Receita", "Observa\303\247\303\265es:", nullptr));
        pushButton->setText(QCoreApplication::translate("Receita", "Gerar Receita", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("Receita", "Tab 1", nullptr));
        label_6->setText(QCoreApplication::translate("Receita", "Pesquisar paciente por nome:", nullptr));
        label_10->setText(QCoreApplication::translate("Receita", "Pesquisar rem\303\251dio por nome/principio ativo:", nullptr));
        label_5->setText(QCoreApplication::translate("Receita", "Pesquisar:", nullptr));
        radioButton_3->setText(QCoreApplication::translate("Receita", "Paciente", nullptr));
        radioButton_2->setText(QCoreApplication::translate("Receita", "Rem\303\251dio", nullptr));
        radioButton->setText(QCoreApplication::translate("Receita", "M\303\251dico", nullptr));
        label_7->setText(QCoreApplication::translate("Receita", "Digite aqui:", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Receita", "Listar Paciente", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Receita", "Listar M\303\251dico", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Receita", "Listar Rem\303\251dio", nullptr));
        label_11->setText(QCoreApplication::translate("Receita", "Pesquisar m\303\251dico por nome:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("Receita", "Tab 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Receita: public Ui_Receita {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECEITA_H
