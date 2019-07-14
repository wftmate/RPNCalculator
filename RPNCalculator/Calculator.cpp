#include "Calculator.h"
//#include "ui_mainwindow.h"
#include "ui_Calculator.h"

#include <array>
#include <iostream>

//#include <QtWidgets>
#include <QWidget>
#include <cmath>

double stackValue = 0.0;

// initialize an array called "stack" of type double and some size
std::array<double, 10> stack; // equivalent to: :double stack[10];"

Calculator::Calculator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Calculator)
{
    ui->setupUi(this);

    // Display stack value in display widget
    ui->Input->setText(QString::number(stackValue));

    // create array for pushbuttons
    QPushButton *numButtons[10];
    for(int i = 0; i < 10; ++i)
    {
        QString buttonName = "Button" + QString::number(i);
        numButtons[i] = Calculator::findChild<QPushButton *>(buttonName);
        connect(numButtons[i], SIGNAL(released()), this, SLOT(NumPressed()));
    }

//    connect(ui->Add, SIGNAL(released()), this, SLOT(MathButtonPressed()));
//    connect(ui->Subtract, SIGNAL(released()), this, SLOT(MathButtonPressed()));
//    connect(ui->Multiply, SIGNAL(released()), this, SLOT(MathButtonPressed()));
//    connect(ui->Divide, SIGNAL(released()), this, SLOT(MathButtonPressed()));

    connect(ui->Enter, SIGNAL(released()), this, SLOT(EnterPressed()));
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
    QString inputValue = ui->Input->text();
    if(inputValue.toDouble() == 0 || inputValue.toDouble() == 0.0)
    {
        ui->Input->setText(buttonValue);
        //
    }
    else
    {
        QString newValue = inputValue + buttonValue;
        double dblNewValue = newValue.toDouble();
        ui->Input->setText(QString::number(dblNewValue, 'g', scientificNotation));
    }
    // -- This handles accepting numbers into the lineEdit
}

// This function determines what to do when an operator button is pressed
void Calculator::MathButtonPressed(){

    // /
    // *
    // -
    // +
    // change sign

}

// This function handles the RollUp, RollDn, Swap, and Drop buttons
void Calculator::StackButtonPressed(){

    // roll up
    // roll dn
    // swap
    // drop

}

// This function is responsible only for the ENTER button
void Calculator::EnterPressed(){

    double input = 0.0; // create a variable to temporarily store input from lineEdit
    QString inputValue = ui->Input->text(); // take input from the lineEdit
    int operation = 1;
    StackOperations(operation);// shift all elements in the stack up one
    stack[0] = (double)input; // store input in Stack[0]
    PopulateDisplay();
}

//-------Stack Stuff ----------------------------------------------------------------------------------------

void Calculator::StackOperations(int operation){
    switch(operation)
    {
        // shift up
        case 1: ShiftUp();// shift all elements up one;
                break;
        // shift down
        case 2: ShiftDown();// shift all elements down one;
                break;
        // swap
        case 3: Swap();// swap the two lowest elements in the stack;
                break;
        default: // some default action;
                 break;
    }
}

void Calculator::ShiftUp(){
    // check that the last element of the array has a zero in it
    if(stack[stack.size()] == 0.0)
    {
        for(int i = stack.size(); i >= 0; i--)
        {
            stack[i] = stack[i - 1];
        }
    }
    else // do i even need this????
    {
        return;
    }
}

void Calculator::ShiftDown(){
    for(int i = 0; i > (int)stack.size(); i++)
    {
        stack[i] = stack[i + 1];
    }
}

void Calculator::Swap(){
    double temp;
    temp = stack[0];
    stack[0] = stack[1];
    stack[1] = temp;
}


void Calculator::PopulateDisplay(){
    for(int i = 0; i < (int)stack.size(); i++)
    {
        ui->Display->addItem(QString::number(stack[i]));
    }
}
