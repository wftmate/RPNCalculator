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
    ~Calculator();

private:
    Ui::Calculator *ui;

private slots:
    void NumPressed();
    void MathButtonPressed();
    //void FncButtons();
    void StackButtonPressed();
        //void RollUp();
        //void RollDn();
        //void Swap();
        //void Drop();
    //void Undo();
    //void ClearAll();
    void EnterPressed();

void StackOperations(int);
void ShiftUp();
void ShiftDown();
void Swap();

void PopulateDisplay();
};

#endif // Calculator_H
