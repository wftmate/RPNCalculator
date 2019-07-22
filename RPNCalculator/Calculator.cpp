#include "Calculator.h"
#include "ui_Calculator.h"

#include <array>
#include <iostream>

//#include <QtWidgets>
#include <QWidget>
#include <QDebug>
#include <cmath>

//double stackValue = 0.0;

// initialize an array called "stack" of type double and some size
std::array<double, 10> stack; // equivalent to: :double stack[10];"

Calculator::Calculator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Calculator)
{
    ui->setupUi(this);

    // create array for pushbuttons
    QPushButton *numButtons[10];
    for(int i = 0; i < 10; ++i)
    {
        QString buttonName = "Button" + QString::number(i);
        numButtons[i] = Calculator::findChild<QPushButton *>(buttonName);
        connect(numButtons[i], SIGNAL(released()), this, SLOT(NumPressed()));
    }

// Connect Signals and Slots (connect buttons to subroutines that handle buttons)
//    connect(ui->Add, SIGNAL(released()), this, SLOT(MathButtonPressed()));
//    connect(ui->Subtract, SIGNAL(released()), this, SLOT(MathButtonPressed()));
//    connect(ui->Multiply, SIGNAL(released()), this, SLOT(MathButtonPressed()));
//    connect(ui->Divide, SIGNAL(released()), this, SLOT(MathButtonPressed()));

    connect(ui->Enter, SIGNAL(pressed()), this, SLOT(EnterPressed()));
    connect(ui->ChangeSign, SIGNAL(pressed()), this, SLOT(ChangeSignPressed()));

    // Connect all buttons on widget to functions
    // Connect Stack Functions
    ui->stackFunctionGroup->connect(ui->stackFunctionGroup, SIGNAL(buttonClicked(QAbstractButton*)), this, SLOT(StackButtonPressed(QAbstractButton*)));
    // Connect Math Funtions
    ui->mathFunctionGroup->connect(ui->mathFunctionGroup, SIGNAL(buttonClicked(QAbstractButton*)), this, SLOT(MathButtonPressed(QAbstractButton*)));
    // Connect Number Buttons
    ui->numberGroup->connect(ui->numberGroup, SIGNAL(buttonClicked(QAbstractButton*)), this, SLOT(NumPressed(QAbstractButton*)));
}

//Destructor
Calculator::~Calculator()
{
    delete ui;
}

// I really want numbers to remain on the lineEdit until enter is pressed
// then they get added to the bottom of the stack

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

// -- SLOTS (Button functions) --------------------------------------------------------------------------------

// This function determines what to do when an operator button is pressed
void Calculator::MathButtonPressed(QAbstractButton *button){
    //QPushButton *button = (QPushButton *)sender();
    QString buttonValue = button->text();
    double result = NULL;

    // If there's anything sitting on the lineEdit, add that to the stack first
    if(!ui->Input->text().isEmpty())
    {
        // if input is not empty, put that value in the stack first
        QString inputValue = ui->Input->text();
        // then act on the bottom two stack elements
    }
    // if input is empty, just act on the bottom two stack elements
    if(buttonValue == "Plus"){
        result = stack[0] + stack[1];
    } else if(buttonValue == "Subtract"){
        result = stack[1] - stack[0];
    } else if(buttonValue == "Divide"){
        result = stack[1] / stack[0];
    } else if(buttonValue == "Multiply"){
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

    ShiftUp();
    stack[0] = result;
    PopulateDisplay();
}

// This function handles the RollUp, RollDn, Swap, and Drop buttons
void Calculator::StackButtonPressed(QAbstractButton *button){
    QString buttonValue = button->text();
    double temp;
    if(buttonValue == "UP"){ // roll up
        temp = stack[stack.size()];
        ShiftUp();
        stack[0] = temp;
    } else if(buttonValue == "Down"){ // roll dn
        temp = stack[0];
        ShiftDown();
        stack[stack.size()] = temp;
    } else if(buttonValue == "Swap"){ // swap
        Swap();
    } else if(buttonValue == "Drop"){ // drop
        ShiftDown();
        PopulateDisplay();
    } else if(buttonValue == "CLA"){  // clear all
        for(int i = 0; i <= stack.size(); i++){
            stack[i] = 0;
        }
        ui->Display->clear();
    }
    PopulateDisplay();
}

// This function is responsible only for the ENTER button
void Calculator::EnterPressed(){

    double input = 0.0; // create a variable to temporarily store input from lineEdit

    QString inputValue = ui->Input->text(); // take input from the lineEdit
    ui->Input->clear();                     // clear text from input lineEdit

    int operation = 1;
    StackOperations(operation); // shift all elements in the stack up one
    stack[0] = (double)input;   // store input in Stack[0]
    PopulateDisplay();
}

void Calculator::SquarePressed(){

    // some random test code
//    double number = 789;
//    ui->Input->setText(QString::number(number, 'g', 4));

    // if there's a number in the input, put it in the bottom of the stack
    if(InputHasText()){
        QString inputValue = ui->Input->text(); // get text from input lineEdit
        ShiftUp(); // shift all elements in the stack up one
        stack[0] = inputValue.toDouble(); // store inputValue string in stack as a double
    } else {
        // if there's no number in the input, just act on the first element in the stack
        stack[0] = stack[0] * stack[0];
    }
}

// -- END SLOT (Button Functions) ---------------------------------------------------------------------------

// function to check if the Input lineEdit currently has text
bool Calculator::InputHasText(){
    if(!ui->Input->text().isEmpty()){
        return true;  // Input has text
    } else {
        return false; // Input has no text
    }
}

//-- Start Stack Operations ----------------------------------------------------------------------------------

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

// -- End Stack Operations -----------------------------------------------------------------------------------

void Calculator::PopulateDisplay(){
    //ui->Display->clear();
    ui->Display->addItem(QString::number(stack[0]));

//    for(int i = 0; i < (int)stack.size(); i++)
//    {
//        ui->Display->addItem(QString::number(stack[i]));
//    }
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
    // Math Functions
        case Qt::Key_Slash:
            // call divide
            break;
        case Qt::Key_Asterisk:
            // call multiply
            break;
        case Qt::Key_Minus:
            // call subtract
            break;
        case Qt::Key_Plus:
            // Make addition happen
            break;
    // Stack Functions
        case Qt::Key_Backspace:
            // if there's text in the input, remove last digit/.
            // if there's no text in the input, do nothing
            break;
        case Qt::Key_Delete:
            // if there's text in the input, remove all
            // if there's no text in the input, drop the lowest item in the stack
            break;
        case Qt::Key_Up:
            ShiftUp();
            break;
        case Qt::Key_Down:
            ShiftDown();
            break;
        case Qt::Key_Left:
            Swap();
            break;
        case Qt::Key_Right:
            Swap();
            break;
        case Qt::Key_Return:
            EnterPressed();
            break;
        case Qt::Key_Enter:
            EnterPressed();
            break;
    }
}

