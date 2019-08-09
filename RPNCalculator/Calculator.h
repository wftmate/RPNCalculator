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
    explicit Calculator(QWidget *parent = Q_NULLPTR);
    ~Calculator();

private:
    Ui::Calculator *ui;

private slots:
    void NumPressed(QAbstractButton *button);
    void MathButtonPressed(QAbstractButton *button);
    void StackButtonPressed(QAbstractButton *button);
    void EnterPressed();

protected:
    void keyPressEvent(QKeyEvent *event);
    void StackOperations(int);
    void PopulateDisplay();
    bool InputHasText();
    void BackspacePressed();
};

#endif // Calculator_H
