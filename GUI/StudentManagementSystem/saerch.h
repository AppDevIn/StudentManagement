#ifndef SAERCH_H
#define SAERCH_H

#include <QMainWindow>

namespace Ui {
class Saerch;
}

class Saerch : public QMainWindow
{
    Q_OBJECT

public:
    explicit Saerch(QWidget *parent = nullptr);
    ~Saerch();

private:
    Ui::Saerch *ui;
};

#endif // SAERCH_H
