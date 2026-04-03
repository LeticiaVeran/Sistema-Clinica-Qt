/********************************************************************************
** Form generated from reading UI file 'gerarrec.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GERARREC_H
#define UI_GERARREC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_gerarrec
{
public:
    QLabel *label;
    QLabel *n_pac;
    QLabel *rem;
    QLabel *obs;
    QLabel *n_med;
    QLabel *crm;
    QPushButton *pushButton;

    void setupUi(QDialog *gerarrec)
    {
        if (gerarrec->objectName().isEmpty())
            gerarrec->setObjectName("gerarrec");
        gerarrec->resize(710, 907);
        label = new QLabel(gerarrec);
        label->setObjectName("label");
        label->setGeometry(QRect(-40, -60, 791, 1021));
        label->setPixmap(QPixmap(QString::fromUtf8("3 - MODELO - RECEITA - EM BRANCO (1) (1)_page-0001.jpg")));
        label->setScaledContents(true);
        n_pac = new QLabel(gerarrec);
        n_pac->setObjectName("n_pac");
        n_pac->setGeometry(QRect(80, 170, 181, 21));
        rem = new QLabel(gerarrec);
        rem->setObjectName("rem");
        rem->setGeometry(QRect(130, 200, 421, 151));
        rem->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);
        obs = new QLabel(gerarrec);
        obs->setObjectName("obs");
        obs->setGeometry(QRect(120, 420, 441, 131));
        obs->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);
        n_med = new QLabel(gerarrec);
        n_med->setObjectName("n_med");
        n_med->setGeometry(QRect(190, 760, 301, 21));
        crm = new QLabel(gerarrec);
        crm->setObjectName("crm");
        crm->setGeometry(QRect(180, 780, 151, 16));
        pushButton = new QPushButton(gerarrec);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(580, 870, 93, 29));

        retranslateUi(gerarrec);

        QMetaObject::connectSlotsByName(gerarrec);
    } // setupUi

    void retranslateUi(QDialog *gerarrec)
    {
        gerarrec->setWindowTitle(QCoreApplication::translate("gerarrec", "Dialog", nullptr));
        label->setText(QString());
        n_pac->setText(QString());
        rem->setText(QString());
        obs->setText(QString());
        n_med->setText(QString());
        crm->setText(QString());
        pushButton->setText(QCoreApplication::translate("gerarrec", "Atualizar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class gerarrec: public Ui_gerarrec {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GERARREC_H
