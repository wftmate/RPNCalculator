#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>
#include <QKeyEvent>
#include <QAbstractButton>

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
    void NumPressed(QAbstractButton *button);
    void MathButtonPressed(QAbstractButton *button);
    void StackButtonPressed(QAbstractButton *button);
        //void RollUp();
        //void RollDn();
        //void Swap();
        //void Drop();
    //void Undo();
    //void ClearAll();
    void EnterPressed();
    void SquarePressed();

protected:
    void keyPressEvent(QKeyEvent *event);

void StackOperations(int);
void ShiftUp();
void ShiftDown();
void Swap();

void PopulateDisplay();
bool InputHasText();
};

#endif // Calculator_H
