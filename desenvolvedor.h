#ifndef DESENVOLVEDOR_H
#define DESENVOLVEDOR_H

#include <QDialog>

namespace Ui {
class Desenvolvedor;
}

class Desenvolvedor : public QDialog
{
    Q_OBJECT

public:
    explicit Desenvolvedor(QWidget *parent = nullptr);
    ~Desenvolvedor();

private:
    Ui::Desenvolvedor *ui;
};

#endif // DESENVOLVEDOR_H
