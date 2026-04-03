/********************************************************************************
** Form generated from reading UI file 'desenvolvedor.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DESENVOLVEDOR_H
#define UI_DESENVOLVEDOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Desenvolvedor
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *Desenvolvedor)
    {
        if (Desenvolvedor->objectName().isEmpty())
            Desenvolvedor->setObjectName("Desenvolvedor");
        Desenvolvedor->resize(651, 372);
        label = new QLabel(Desenvolvedor);
        label->setObjectName("label");
        label->setGeometry(QRect(10, -20, 841, 421));
        label_2 = new QLabel(Desenvolvedor);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(370, -30, 211, 201));
        label_2->setPixmap(QPixmap(QString::fromUtf8("euProg.jpg")));
        label_2->setScaledContents(true);
        label_3 = new QLabel(Desenvolvedor);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(410, 170, 151, 21));

        retranslateUi(Desenvolvedor);

        QMetaObject::connectSlotsByName(Desenvolvedor);
    } // setupUi

    void retranslateUi(QDialog *Desenvolvedor)
    {
        Desenvolvedor->setWindowTitle(QCoreApplication::translate("Desenvolvedor", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Desenvolvedor", "Sobre o Desenvolvedor:\n"
"Nome: Leticia Damasio Veran\n"
"Matr\303\255cula: 24205057\n"
"Curso: Engenharia de Computa\303\247\303\243o\n"
"Universidade: Universidade Federal de Santa Catarina (UFSC)\n"
"\n"
"Contato: \n"
"E-mail: leticia.veran@grad.ufsc.br\n"
"\n"
"\n"
"Sobre o Projeto: \n"
"Este sistema de cl\303\255nica m\303\251dica foi desenvolvido como projeto final da disciplina de Linguagem de Programa\303\247\303\243o 2.\n"
"O objetivo foi aplicar os conceitos aprendidos em sala de aula em um sistema funcional e completo.\n"
"\n"
"O desenvolvimento deste projeto proporcionou aprendizados significativos em:\n"
"- Aplica\303\247\303\243o pr\303\241tica de conceitos de POO\n"
"- Desenvolvimento de interfaces gr\303\241ficas com Qt Creator\n"
"- Programa\303\247\303\243o em C++\n"
"- Persist\303\252ncia de dados\n"
"- Testes e valida\303\247\303\243o de sistemas\n"
"", nullptr));
        label_2->setText(QString());
        label_3->setText(QCoreApplication::translate("Desenvolvedor", "\342\206\221 Desenvolvedora \342\206\221", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Desenvolvedor: public Ui_Desenvolvedor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DESENVOLVEDOR_H
