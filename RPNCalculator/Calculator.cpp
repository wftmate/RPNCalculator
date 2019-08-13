#include "Calculator.h"
#include "ui_Calculator.h"

#include <array>
#include <vector>
#include <iostream>

//#include <QtWidgets>
#include <QWidget>
#include <QDebug>
#include <cmath>

//double stackValue = 0.0;

// initialize an array called "stack" of type double and some size
const int stackSize = 10;
//std::array<double, stackSize> stack; // equivalent to: :double stack[10];"

std::vector<double> stack;

const int shiftUp = 1;
const int shiftDn = 2;
const int Swap    = 3;

Calculator::Calculator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Calculator)
{
    ui->setupUi(this);

    connect(ui->Enter, SIGNAL(pressed()), this, SLOT(EnterPressed()));

    // Connect all buttons on widget to functions
    // Connect Stack Functions
    ui->stackFunctionGroup->connect(ui->stackFunctionGroup, SIGNAL(buttonClicked(QAbstractButton*)), this, SLOT(StackButtonPressed(QAbstractButton*)));
    // Connect Math Funtions
    ui->mathFunctionGroup->connect(ui->mathFunctionGroup, SIGNAL(buttonClicked(QAbstractButton*)), this, SLOT(MathButtonPressed(QAbstractButton*)));
    // Connect Number Buttons
    ui->numberGroup->connect(ui->numberGroup, SIGNAL(buttonClicked(QAbstractButton*)), this, SLOT(NumPressed(QAbstractButton*)));

    ui->Input->setText("0");
}

//Destructor
Calculator::~Calculator()
{
    delete ui;
}

// -- SLOTS (Button functions) --------------------------------------------------------------------------------

// This function determines what to do when a number button is pressed
void Calculator::NumPressed(QAbstractButton *button){

    int scientificNotation = 6;

    //QPushButton *button = (QPushButton *)sender();
    QString buttonValue = button->text();
    QString inputValue = ui->Input->text();
    if(inputValue.toDouble() == 0 || inputValue.toDouble() == 0.0)
    {
        ui->Input->setText(buttonValue);  // put the button value in the lineEdit
    }
    else
    {
        QString newValue = inputValue + buttonValue;
        double dblNewValue = newValue.toDouble();
        ui->Input->setText(QString::number(dblNewValue, 'g', scientificNotation));
    }
}

// This function determines what to do when an operator button is pressed
void Calculator::MathButtonPressed(QAbstractButton *button){
    //QPushButton *button = (QPushButton *)sender();
    QString buttonValue = button->text();
    double result = NULL;

    qDebug() << "MathButtonPressed: Button = " + buttonValue;

    // If there's anything sitting on the lineEdit, add that to the stack first
    if(!ui->Input->text().isEmpty())
    {
        qDebug() << "Input has text";
        // if input is not empty, put that value in the stack first
        QString inputValue = ui->Input->text();
        ui->Input->clear();
        StackOperations(shiftUp);
        stack[0] = inputValue.toDouble();
        // then act on the bottom two stack elements
    }
    // if input is empty, just act on the bottom two stack elements
    if(buttonValue == "+"){
        result = stack[0] + stack[1];
    } else if(buttonValue == "-"){
        result = stack[1] - stack[0];
    } else if(buttonValue == "/"){
        result = stack[1] / stack[0];
    } else if(buttonValue == "*"){
        result = stack[1] * stack[0];
    } else if(buttonValue == "x^2"){
        result = pow(stack[0],2);
    } else if(buttonValue == "sqrt"){
        result = sqrt(stack[0]);
    } else if(buttonValue == "y^x"){
        result = pow(stack[1], stack[0]);
    } else if(buttonValue == "1/x"){
        result = 1 / stack[0];
    } else if(buttonValue == "+/-"){
        result = -1 * stack[0];
    } else if(buttonValue == "ln"){
        result = log(stack[0]);
    }else if(buttonValue == "log_10"){
        result = log10(stack[0]);
    } else if(buttonValue == "log_2"){
        result = log2(stack[0]);
    }

    StackOperations(shiftDn);
    stack[0] = result;
    PopulateDisplay();
}

// This function handles the shiftUp, shiftDn, Swap, and Drop buttons
void Calculator::StackButtonPressed(QAbstractButton *button){
    QString buttonValue = button->text();

    double temp;
    if(buttonValue == "Up"){ // roll up
        temp = stack[stack.size()];
        StackOperations(shiftUp);
        stack[0] = temp;
    } else if(buttonValue == "Dn"){ // roll down
        temp = stack[0];
        StackOperations(shiftDn);
        stack[stack.size() + 1] = temp;
    } else if(buttonValue == "Swap"){ // swap
        StackOperations(Swap);
    } else if(buttonValue == "Drop"){ // drop
        StackOperations(shiftDn);
    } else if(buttonValue == "CLA"){  // clear all
        for(int i = 0; i <= static_cast<int>(stack.size()); i++){
            stack.clear();
        }
        ui->Display->clear();
    }
    PopulateDisplay();
}

// This function is responsible only for the ENTER button
void Calculator::EnterPressed(){
    QString inputValue;
    if(!ui->Input->text().isEmpty()){
        inputValue = ui->Input->text(); // take input from the lineEdit
        ui->Input->clear();             // clear text from input lineEdit
        stack.insert(stack.begin(), inputValue.toDouble());
    }
    else {
        StackOperations(shiftUp);
        //stack[0] = stack[1];
        stack.front() = stack.front() + 1;
    }
    PopulateDisplay();

    // -- debug code --
    //qDebug()<<stack[0];
}

// -- END SLOT (Button Functions) ---------------------------------------------------------------------------

void Calculator::BackspacePressed(){
    if(InputHasText()){
        QString inputValue = ui->Input->text();      // get number from Input label as text string
        int length = inputValue.size();              // get length of string
        inputValue = inputValue.remove(length-1, 1); // remove last character
        ui->Input->setText(inputValue);              // send text back to Input label
    }
//    if(InputHasText()){
//        QString inputValue = ui->Input->text(); // get number from Input label as text string
//        double inputNumber = inputValue.toDouble(); // convert text string to double
//        inputNumber = inputNumber / 10.0; // number % 10: this should divide by 10 and drop decimal, effectively removing LSD
//        inputValue = QString::number(inputNumber); // convert number back to string
//        ui->Input->setText(inputValue); // put string back on Input label
//    }
}

// function to check if the Input lineEdit currently has text
bool Calculator::InputHasText(){
    if(!ui->Input->text().isEmpty()){
        return true;  // Input has text
    } else {
        return false; // Input has no text
    }
}

void Calculator::StackOperations(int operation){
    switch(operation)
    {
        // shift up
        case 1: // shift all elements up one;
            // shifts all elements up 1 and inserts a 0 at the 1st position
            stack.insert(stack.begin(), 0);
            break;
        // shift down
        case 2: // shift all elements down one;
            // removes 1st element and shifts all otehrs down 1
            stack.erase(stack.begin());
            break;
        // swapqt
        case 3: // swap the two lowest elements in the stack;
            double temp;
            temp = stack[0];
            stack[0] = stack[1];
            stack[1] = temp;
            break;
        default: // some default action;
            break;
    }
}

void Calculator::PopulateDisplay(){
    ui->Display->clear();
    for(int i = 0; i < static_cast<int>(stack.size()); i++)
    {
        ui->Display->addItem(QString::number(i) + " : " + QString::number(stack[i]));
    }
}

void Calculator::keyPressEvent(QKeyEvent *event){
    switch(event->key()){
        // number keys
        case Qt::Key_0:
            NumPressed(ui->Button0);
            break;
        case Qt::Key_1:
            NumPressed(ui->Button1);
            break;
        case Qt::Key_2:
            NumPressed(ui->Button2);
            break;
        case Qt::Key_3:
            NumPressed(ui->Button3);
            break;
        case Qt::Key_4:
            NumPressed(ui->Button4);
            break;
        case Qt::Key_5:
            NumPressed(ui->Button5);
            break;
        case Qt::Key_6:
            NumPressed(ui->Button6);
            break;
        case Qt::Key_7:
            NumPressed(ui->Button7);
            break;
        case Qt::Key_8:
            NumPressed(ui->Button8);
            break;
        case Qt::Key_9:
            NumPressed(ui->Button9);
            break;
        case Qt::Key_Period:
            NumPressed(ui->DecimalPoint);
            break;
    // Math Functions
        case Qt::Key_Slash:
            MathButtonPressed(ui->Divide);
            break;
        case Qt::Key_Asterisk:
            MathButtonPressed(ui->Multiply);
            break;
        case Qt::Key_Minus:
            MathButtonPressed(ui->Subtract);
            break;
        case Qt::Key_Plus:
            MathButtonPressed(ui->Add);
            break;
    // Stack Functions
        case Qt::Key_Backspace:
            // if there's text in the input, remove last digit/.
            // if there's no text in the input, do nothing
            BackspacePressed();
            break;
        case Qt::Key_Delete:
            // if there's text in the input, remove all
            // if there's no text in the input, drop the lowest item in the stack
            //StackButtonPressed(ui->ClearAll);
            StackButtonPressed(ui->Drop);
            break;
        case Qt::Key_Up:
            //ShiftUp();
            //StackOperations(1);
            StackButtonPressed(ui->RollUp);
            break;
        case Qt::Key_Down:
            //ShiftDown();
            //StackOperations(2);
            StackButtonPressed(ui->RollDn);
            break;
        case Qt::Key_Left:
            StackButtonPressed(ui->Swap);
            break;
        case Qt::Key_Right:
            StackButtonPressed(ui->Swap);
            break;
        case Qt::Key_Return:
            EnterPressed();
            break;
        case Qt::Key_Enter:
            EnterPressed();
            break;
    }
}

