#include "Calculator.h"
#include "ui_mainwindow.h"
//#include "ui_Calculator.h"

//#include <QtWidgets>
#include <QWidget>
#include <cmath>

//create 2D list/array to hold stack with [line # : element]
double StackValue = 0.0;
double Stack[] = Null;

Calculator::Calculator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Calculator)
{
    ui->setupUi(this);

    // Display stack value in display widget
    ui->/*DisplayWidgetName*/->setText(QString::number(StackValue));

    // create array for pushbuttons
    QPushButton *numButtons[10];
    for(int i = 0; i < 10; ++i)
    {
        QString buttonName = "Button" + QString::number(i);
        numButtons[i] = calculator::findChild<QPushButton *>(buttonName);
        connect(numButtons[i], SIGNAL(released()), this, SLOT(NumPressed));
    }
}

//Deconstructor
Calculator::~Calculator()
{
    delete ui;
}
