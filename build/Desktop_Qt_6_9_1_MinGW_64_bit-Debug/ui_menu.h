/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Menu
{
public:
    QAction *actionFuncion_rios;
    QAction *actionPacientes;
    QAction *actionRem_dios;
    QAction *action_consultas;
    QAction *actionReceitas;
    QAction *actionDesenvolvedor;
    QAction *actionVers_o;
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QDateEdit *dataconsultas;
    QListWidget *listaconsultas;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QMenu *menuMenu;
    QMenu *menuSobre;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Menu)
    {
        if (Menu->objectName().isEmpty())
            Menu->setObjectName("Menu");
        Menu->resize(464, 379);
        actionFuncion_rios = new QAction(Menu);
        actionFuncion_rios->setObjectName("actionFuncion_rios");
        actionPacientes = new QAction(Menu);
        actionPacientes->setObjectName("actionPacientes");
        actionRem_dios = new QAction(Menu);
        actionRem_dios->setObjectName("actionRem_dios");
        action_consultas = new QAction(Menu);
        action_consultas->setObjectName("action_consultas");
        actionReceitas = new QAction(Menu);
        actionReceitas->setObjectName("actionReceitas");
        actionDesenvolvedor = new QAction(Menu);
        actionDesenvolvedor->setObjectName("actionDesenvolvedor");
        actionVers_o = new QAction(Menu);
        actionVers_o->setObjectName("actionVers_o");
        centralwidget = new QWidget(Menu);
        centralwidget->setObjectName("centralwidget");
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(150, 10, 171, 61));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label);

        dataconsultas = new QDateEdit(verticalLayoutWidget);
        dataconsultas->setObjectName("dataconsultas");

        verticalLayout->addWidget(dataconsultas);

        listaconsultas = new QListWidget(centralwidget);
        listaconsultas->setObjectName("listaconsultas");
        listaconsultas->setGeometry(QRect(10, 80, 441, 192));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(180, 280, 101, 31));
        Menu->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Menu);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 464, 26));
        menuMenu = new QMenu(menubar);
        menuMenu->setObjectName("menuMenu");
        menuSobre = new QMenu(menubar);
        menuSobre->setObjectName("menuSobre");
        Menu->setMenuBar(menubar);
        statusbar = new QStatusBar(Menu);
        statusbar->setObjectName("statusbar");
        Menu->setStatusBar(statusbar);

        menubar->addAction(menuMenu->menuAction());
        menubar->addAction(menuSobre->menuAction());
        menuMenu->addAction(actionFuncion_rios);
        menuMenu->addAction(actionPacientes);
        menuMenu->addSeparator();
        menuMenu->addAction(actionRem_dios);
        menuMenu->addAction(action_consultas);
        menuMenu->addSeparator();
        menuMenu->addAction(actionReceitas);
        menuSobre->addAction(actionDesenvolvedor);
        menuSobre->addAction(actionVers_o);

        retranslateUi(Menu);

        QMetaObject::connectSlotsByName(Menu);
    } // setupUi

    void retranslateUi(QMainWindow *Menu)
    {
        Menu->setWindowTitle(QCoreApplication::translate("Menu", "Menu", nullptr));
        actionFuncion_rios->setText(QCoreApplication::translate("Menu", "Funcion\303\241rios", nullptr));
        actionPacientes->setText(QCoreApplication::translate("Menu", "Pacientes", nullptr));
        actionRem_dios->setText(QCoreApplication::translate("Menu", "Rem\303\251dios", nullptr));
        action_consultas->setText(QCoreApplication::translate("Menu", "Consultas", nullptr));
        actionReceitas->setText(QCoreApplication::translate("Menu", "Receitas", nullptr));
        actionDesenvolvedor->setText(QCoreApplication::translate("Menu", "Desenvolvedor", nullptr));
        actionVers_o->setText(QCoreApplication::translate("Menu", "Vers\303\243o", nullptr));
        label->setText(QCoreApplication::translate("Menu", "Consultas do Dia:", nullptr));
        pushButton->setText(QCoreApplication::translate("Menu", "Atualizar", nullptr));
        menuMenu->setTitle(QCoreApplication::translate("Menu", "Menu", nullptr));
        menuSobre->setTitle(QCoreApplication::translate("Menu", "Sobre", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Menu: public Ui_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
