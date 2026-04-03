#ifndef RECEITA_H
#define RECEITA_H

#include <QDialog>

class Menu;

namespace Ui {
class Receita;
}

class Receita : public QDialog
{
    Q_OBJECT

public:
    explicit Receita(Menu* menuParent, QWidget *parent = nullptr);
    ~Receita();

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_radioButton_3_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_clicked();

    void on_pushButton_clicked();

private:
    Ui::Receita *ui;
    Menu* m_menuParent; // Ponteiro para a janela Menu
};

#endif // RECEITA_H
