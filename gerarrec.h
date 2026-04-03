#ifndef GERARREC_H
#define GERARREC_H

#include <QDialog>

class Menu;

namespace Ui {
class gerarrec;
}

class gerarrec : public QDialog
{
    Q_OBJECT

public:
    explicit gerarrec(Menu* menuParent, QWidget *parent = nullptr);
    ~gerarrec();

    void carregarDadosReceita();



private slots:
    void on_pushButton_clicked();

private:
    Ui::gerarrec *ui;
    Menu* m_menuParent; // Ponteiro para a janela Menu

};

#endif // GERARREC_H
