#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>

namespace Ui {
class Calculator;
}

class Calculator : public QMainWindow
{
    Q_OBJECT

public:
    explicit Calculator(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::Calculator *ui;

private slots:
    void NumPress();
    void MathButtons();
    //void FncButtons();
    //void RollUp();
    //void RollDn();
    //void Swap();
    //void Undo();
    //void ClearLast();
    //void ClearAll();
    //void Enter();

};

#endif // Calculator_H
