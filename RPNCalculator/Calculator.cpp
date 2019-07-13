#include "Calculator.h"
//#include "ui_mainwindow.h"
#include "ui_Calculator.h"

//#include <QtWidgets>
#include <QWidget>
#include <cmath>

//create 2D list/array to hold stack with [line # : element]
double StackValue = 0.0;
double Stack[100];

Calculator::Calculator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Calculator)
{
    ui->setupUi(this);

    // Display stack value in display widget
    ui->Display->setText(QString::number(StackValue));

    // create array for pushbuttons
    QPushButton *numButtons[10];
    for(int i = 0; i < 10; ++i)
    {
        QString buttonName = "Button" + QString::number(i);
        numButtons[i] = Calculator::findChild<QPushButton *>(buttonName);
        connect(numButtons[i], SIGNAL(released()), this, SLOT(NumPressed()));
    }
}

//Destructor
Calculator::~Calculator()
{
    delete ui;
}

// I really want numbers to remain on the lineEdit until enter is pressed
// then they get added to the bottom of the stack

// This function determines what to do when a number button is pressed
void Calculator::NumPressed(){
    // -- This handles accepting numbers into the lineEdit

    int scientificNotation = 6;

    QPushButton *button = (QPushButton *)sender();
    QString buttonValue = button->text();
    QString displayValue = ui->Display->text();
    if(displayValue.toDouble() == 0 || displayValue.toDouble() == 0.0)
    {
        ui->Display->setText(buttonValue);
    }
    else
    {
        QString newValue = displayValue + buttonValue;
        double dblNewValue = newValue.toDouble();
        ui->Display->setText(QString::number(dblNewValue, 'g', scientificNotation));
    }
    // -- This handles accepting numbers into the lineEdit
}

// This function determines what to do when an operator button is pressed
void Calculator::MathButtons(){

}

// This function handles the RollUp, RollDn, Swap, and Drop buttons
void Calculator::StackButtons(){

}
