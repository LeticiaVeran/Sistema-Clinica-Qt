#ifndef VERSAO_H
#define VERSAO_H

#include <QDialog>

namespace Ui {
class versao;
}

class versao : public QDialog
{
    Q_OBJECT

public:
    explicit versao(QWidget *parent = nullptr);
    ~versao();

private:
    Ui::versao *ui;
};

#endif // VERSAO_H
