#ifndef CALCMAIN_H
#define CALCMAIN_H

#include <QWidget>

namespace Ui {
class calcmain;
}

class calcmain : public QWidget
{
    Q_OBJECT

public:
    explicit calcmain(QWidget *parent = 0);
    ~calcmain();

private:
    Ui::calcmain *ui;
};

#endif // CALCMAIN_H
