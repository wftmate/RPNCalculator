/********************************************************************************
** Form generated from reading UI file 'Calculator.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QPushButton *Divide;
    QPushButton *NaturalLog;
    QPushButton *Swap;
    QPushButton *Inverse;
    QPushButton *RollUp;
    QPushButton *LogBase2;
    QPushButton *Subtract;
    QPushButton *Button3;
    QPushButton *LogBase10;
    QPushButton *Button9;
    QPushButton *SquareRoot;
    QListWidget *Display;
    QLabel *Input;
    QPushButton *Button1;
    QPushButton *DecimalPoint;
    QPushButton *Drop;
    QPushButton *Square;
    QPushButton *Add;
    QPushButton *Button0;
    QPushButton *Button2;
    QPushButton *Button8;
    QPushButton *ChangeSign;
    QPushButton *Enter;
    QPushButton *YtoX;
    QPushButton *Button7;
    QPushButton *Button6;
    QPushButton *Multiply;
    QPushButton *Button5;
    QPushButton *ClearAll;
    QPushButton *Button4;
    QPushButton *RollDn;
    QGraphicsView *graphicsView;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QButtonGroup *stackFunctionGroup;
    QButtonGroup *mathFunctionGroup;
    QButtonGroup *numberGroup;

    void setupUi(QMainWindow *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName(QString::fromUtf8("Calculator"));
        Calculator->resize(330, 530);
        centralWidget = new QWidget(Calculator);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        Divide = new QPushButton(centralWidget);
        mathFunctionGroup = new QButtonGroup(Calculator);
        mathFunctionGroup->setObjectName(QString::fromUtf8("mathFunctionGroup"));
        mathFunctionGroup->addButton(Divide);
        Divide->setObjectName(QString::fromUtf8("Divide"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Divide->sizePolicy().hasHeightForWidth());
        Divide->setSizePolicy(sizePolicy);
        Divide->setFocusPolicy(Qt::NoFocus);
        Divide->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #1E8449;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #196F3D;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Divide, 6, 3, 1, 1);

        NaturalLog = new QPushButton(centralWidget);
        mathFunctionGroup->addButton(NaturalLog);
        NaturalLog->setObjectName(QString::fromUtf8("NaturalLog"));
        sizePolicy.setHeightForWidth(NaturalLog->sizePolicy().hasHeightForWidth());
        NaturalLog->setSizePolicy(sizePolicy);
        NaturalLog->setFocusPolicy(Qt::NoFocus);
        NaturalLog->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #1E8449;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #196F3D;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(NaturalLog, 5, 1, 1, 1);

        Swap = new QPushButton(centralWidget);
        stackFunctionGroup = new QButtonGroup(Calculator);
        stackFunctionGroup->setObjectName(QString::fromUtf8("stackFunctionGroup"));
        stackFunctionGroup->addButton(Swap);
        Swap->setObjectName(QString::fromUtf8("Swap"));
        sizePolicy.setHeightForWidth(Swap->sizePolicy().hasHeightForWidth());
        Swap->setSizePolicy(sizePolicy);
        Swap->setFocusPolicy(Qt::NoFocus);
        Swap->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #FFA500;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #D68910;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Swap, 3, 2, 1, 1);

        Inverse = new QPushButton(centralWidget);
        mathFunctionGroup->addButton(Inverse);
        Inverse->setObjectName(QString::fromUtf8("Inverse"));
        sizePolicy.setHeightForWidth(Inverse->sizePolicy().hasHeightForWidth());
        Inverse->setSizePolicy(sizePolicy);
        Inverse->setFocusPolicy(Qt::NoFocus);
        Inverse->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #1E8449;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #196F3D;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Inverse, 4, 3, 1, 1);

        RollUp = new QPushButton(centralWidget);
        stackFunctionGroup->addButton(RollUp);
        RollUp->setObjectName(QString::fromUtf8("RollUp"));
        sizePolicy.setHeightForWidth(RollUp->sizePolicy().hasHeightForWidth());
        RollUp->setSizePolicy(sizePolicy);
        RollUp->setFocusPolicy(Qt::NoFocus);
        RollUp->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #FFA500;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #D68910;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(RollUp, 3, 0, 1, 1);

        LogBase2 = new QPushButton(centralWidget);
        mathFunctionGroup->addButton(LogBase2);
        LogBase2->setObjectName(QString::fromUtf8("LogBase2"));
        sizePolicy.setHeightForWidth(LogBase2->sizePolicy().hasHeightForWidth());
        LogBase2->setSizePolicy(sizePolicy);
        LogBase2->setFocusPolicy(Qt::NoFocus);
        LogBase2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #1E8449;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #196F3D;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(LogBase2, 5, 3, 1, 1);

        Subtract = new QPushButton(centralWidget);
        mathFunctionGroup->addButton(Subtract);
        Subtract->setObjectName(QString::fromUtf8("Subtract"));
        sizePolicy.setHeightForWidth(Subtract->sizePolicy().hasHeightForWidth());
        Subtract->setSizePolicy(sizePolicy);
        Subtract->setFocusPolicy(Qt::NoFocus);
        Subtract->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #1E8449;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #196F3D;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Subtract, 10, 3, 1, 1);

        Button3 = new QPushButton(centralWidget);
        numberGroup = new QButtonGroup(Calculator);
        numberGroup->setObjectName(QString::fromUtf8("numberGroup"));
        numberGroup->addButton(Button3);
        Button3->setObjectName(QString::fromUtf8("Button3"));
        sizePolicy.setHeightForWidth(Button3->sizePolicy().hasHeightForWidth());
        Button3->setSizePolicy(sizePolicy);
        Button3->setFocusPolicy(Qt::ClickFocus);
        Button3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: darkgray;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: Dimgray;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button3, 10, 2, 1, 1);

        LogBase10 = new QPushButton(centralWidget);
        mathFunctionGroup->addButton(LogBase10);
        LogBase10->setObjectName(QString::fromUtf8("LogBase10"));
        sizePolicy.setHeightForWidth(LogBase10->sizePolicy().hasHeightForWidth());
        LogBase10->setSizePolicy(sizePolicy);
        LogBase10->setFocusPolicy(Qt::NoFocus);
        LogBase10->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #1E8449;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #196F3D;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(LogBase10, 5, 2, 1, 1);

        Button9 = new QPushButton(centralWidget);
        numberGroup->addButton(Button9);
        Button9->setObjectName(QString::fromUtf8("Button9"));
        sizePolicy.setHeightForWidth(Button9->sizePolicy().hasHeightForWidth());
        Button9->setSizePolicy(sizePolicy);
        Button9->setFocusPolicy(Qt::ClickFocus);
        Button9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: darkgray;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: Dimgray;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button9, 6, 2, 1, 1);

        SquareRoot = new QPushButton(centralWidget);
        mathFunctionGroup->addButton(SquareRoot);
        SquareRoot->setObjectName(QString::fromUtf8("SquareRoot"));
        sizePolicy.setHeightForWidth(SquareRoot->sizePolicy().hasHeightForWidth());
        SquareRoot->setSizePolicy(sizePolicy);
        SquareRoot->setFocusPolicy(Qt::NoFocus);
        SquareRoot->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #1E8449;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #196F3D;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(SquareRoot, 4, 1, 1, 1);

        Display = new QListWidget(centralWidget);
        Display->setObjectName(QString::fromUtf8("Display"));
        Display->setFocusPolicy(Qt::NoFocus);
        Display->setLayoutDirection(Qt::RightToLeft);
        Display->setAlternatingRowColors(true);
        Display->setFlow(QListView::TopToBottom);
        Display->setItemAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignRight|Qt::AlignTrailing);

        gridLayout->addWidget(Display, 1, 0, 1, 5);

        Input = new QLabel(centralWidget);
        Input->setObjectName(QString::fromUtf8("Input"));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        Input->setFont(font);
        Input->setStyleSheet(QString::fromUtf8("background-color: #fff;"));
        Input->setScaledContents(false);
        Input->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Input->setMargin(2);
        Input->setIndent(5);

        gridLayout->addWidget(Input, 2, 0, 1, 5);

        Button1 = new QPushButton(centralWidget);
        numberGroup->addButton(Button1);
        Button1->setObjectName(QString::fromUtf8("Button1"));
        sizePolicy.setHeightForWidth(Button1->sizePolicy().hasHeightForWidth());
        Button1->setSizePolicy(sizePolicy);
        Button1->setFocusPolicy(Qt::ClickFocus);
        Button1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: darkgray;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: Dimgray;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button1, 10, 0, 1, 1);

        DecimalPoint = new QPushButton(centralWidget);
        numberGroup->addButton(DecimalPoint);
        DecimalPoint->setObjectName(QString::fromUtf8("DecimalPoint"));
        sizePolicy.setHeightForWidth(DecimalPoint->sizePolicy().hasHeightForWidth());
        DecimalPoint->setSizePolicy(sizePolicy);
        DecimalPoint->setFocusPolicy(Qt::ClickFocus);
        DecimalPoint->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: darkgray;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: Dimgray;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(DecimalPoint, 12, 2, 1, 1);

        Drop = new QPushButton(centralWidget);
        stackFunctionGroup->addButton(Drop);
        Drop->setObjectName(QString::fromUtf8("Drop"));
        Drop->setFocusPolicy(Qt::NoFocus);
        Drop->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #FFA500;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #D68910;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Drop, 3, 3, 1, 1);

        Square = new QPushButton(centralWidget);
        mathFunctionGroup->addButton(Square);
        Square->setObjectName(QString::fromUtf8("Square"));
        sizePolicy.setHeightForWidth(Square->sizePolicy().hasHeightForWidth());
        Square->setSizePolicy(sizePolicy);
        Square->setFocusPolicy(Qt::NoFocus);
        Square->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #1E8449;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #196F3D;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Square, 4, 0, 1, 1);

        Add = new QPushButton(centralWidget);
        mathFunctionGroup->addButton(Add);
        Add->setObjectName(QString::fromUtf8("Add"));
        sizePolicy.setHeightForWidth(Add->sizePolicy().hasHeightForWidth());
        Add->setSizePolicy(sizePolicy);
        Add->setFocusPolicy(Qt::NoFocus);
        Add->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #1E8449;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #196F3D;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Add, 12, 3, 1, 1);

        Button0 = new QPushButton(centralWidget);
        numberGroup->addButton(Button0);
        Button0->setObjectName(QString::fromUtf8("Button0"));
        sizePolicy.setHeightForWidth(Button0->sizePolicy().hasHeightForWidth());
        Button0->setSizePolicy(sizePolicy);
        Button0->setFocusPolicy(Qt::ClickFocus);
        Button0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: darkgray;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: Dimgray;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button0, 12, 0, 1, 2);

        Button2 = new QPushButton(centralWidget);
        numberGroup->addButton(Button2);
        Button2->setObjectName(QString::fromUtf8("Button2"));
        sizePolicy.setHeightForWidth(Button2->sizePolicy().hasHeightForWidth());
        Button2->setSizePolicy(sizePolicy);
        Button2->setFocusPolicy(Qt::ClickFocus);
        Button2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: darkgray;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: Dimgray;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button2, 10, 1, 1, 1);

        Button8 = new QPushButton(centralWidget);
        numberGroup->addButton(Button8);
        Button8->setObjectName(QString::fromUtf8("Button8"));
        sizePolicy.setHeightForWidth(Button8->sizePolicy().hasHeightForWidth());
        Button8->setSizePolicy(sizePolicy);
        Button8->setFocusPolicy(Qt::ClickFocus);
        Button8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: darkgray;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: Dimgray;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button8, 6, 1, 1, 1);

        ChangeSign = new QPushButton(centralWidget);
        mathFunctionGroup->addButton(ChangeSign);
        ChangeSign->setObjectName(QString::fromUtf8("ChangeSign"));
        sizePolicy.setHeightForWidth(ChangeSign->sizePolicy().hasHeightForWidth());
        ChangeSign->setSizePolicy(sizePolicy);
        ChangeSign->setFocusPolicy(Qt::NoFocus);
        ChangeSign->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #1E8449;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #196F3D;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(ChangeSign, 5, 0, 1, 1);

        Enter = new QPushButton(centralWidget);
        stackFunctionGroup->addButton(Enter);
        Enter->setObjectName(QString::fromUtf8("Enter"));
        sizePolicy.setHeightForWidth(Enter->sizePolicy().hasHeightForWidth());
        Enter->setSizePolicy(sizePolicy);
        Enter->setFocusPolicy(Qt::NoFocus);
        Enter->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #FFA500;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #D68910;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Enter, 4, 4, 9, 1);

        YtoX = new QPushButton(centralWidget);
        mathFunctionGroup->addButton(YtoX);
        YtoX->setObjectName(QString::fromUtf8("YtoX"));
        sizePolicy.setHeightForWidth(YtoX->sizePolicy().hasHeightForWidth());
        YtoX->setSizePolicy(sizePolicy);
        YtoX->setFocusPolicy(Qt::NoFocus);
        YtoX->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #1E8449;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #196F3D;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(YtoX, 4, 2, 1, 1);

        Button7 = new QPushButton(centralWidget);
        numberGroup->addButton(Button7);
        Button7->setObjectName(QString::fromUtf8("Button7"));
        sizePolicy.setHeightForWidth(Button7->sizePolicy().hasHeightForWidth());
        Button7->setSizePolicy(sizePolicy);
        Button7->setFocusPolicy(Qt::ClickFocus);
        Button7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: darkgray;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: Dimgray;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button7, 6, 0, 1, 1);

        Button6 = new QPushButton(centralWidget);
        numberGroup->addButton(Button6);
        Button6->setObjectName(QString::fromUtf8("Button6"));
        sizePolicy.setHeightForWidth(Button6->sizePolicy().hasHeightForWidth());
        Button6->setSizePolicy(sizePolicy);
        Button6->setFocusPolicy(Qt::ClickFocus);
        Button6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: darkgray;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: Dimgray;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button6, 8, 2, 1, 1);

        Multiply = new QPushButton(centralWidget);
        mathFunctionGroup->addButton(Multiply);
        Multiply->setObjectName(QString::fromUtf8("Multiply"));
        sizePolicy.setHeightForWidth(Multiply->sizePolicy().hasHeightForWidth());
        Multiply->setSizePolicy(sizePolicy);
        Multiply->setFocusPolicy(Qt::NoFocus);
        Multiply->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #1E8449;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #196F3D;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Multiply, 8, 3, 1, 1);

        Button5 = new QPushButton(centralWidget);
        numberGroup->addButton(Button5);
        Button5->setObjectName(QString::fromUtf8("Button5"));
        sizePolicy.setHeightForWidth(Button5->sizePolicy().hasHeightForWidth());
        Button5->setSizePolicy(sizePolicy);
        Button5->setFocusPolicy(Qt::ClickFocus);
        Button5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: darkgray;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: Dimgray;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button5, 8, 1, 1, 1);

        ClearAll = new QPushButton(centralWidget);
        stackFunctionGroup->addButton(ClearAll);
        ClearAll->setObjectName(QString::fromUtf8("ClearAll"));
        sizePolicy.setHeightForWidth(ClearAll->sizePolicy().hasHeightForWidth());
        ClearAll->setSizePolicy(sizePolicy);
        ClearAll->setFocusPolicy(Qt::NoFocus);
        ClearAll->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #FFA500;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #D68910;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(ClearAll, 3, 4, 1, 1);

        Button4 = new QPushButton(centralWidget);
        numberGroup->addButton(Button4);
        Button4->setObjectName(QString::fromUtf8("Button4"));
        sizePolicy.setHeightForWidth(Button4->sizePolicy().hasHeightForWidth());
        Button4->setSizePolicy(sizePolicy);
        Button4->setFocusPolicy(Qt::ClickFocus);
        Button4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: darkgray;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: Dimgray;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button4, 8, 0, 1, 1);

        RollDn = new QPushButton(centralWidget);
        stackFunctionGroup->addButton(RollDn);
        RollDn->setObjectName(QString::fromUtf8("RollDn"));
        sizePolicy.setHeightForWidth(RollDn->sizePolicy().hasHeightForWidth());
        RollDn->setSizePolicy(sizePolicy);
        RollDn->setFocusPolicy(Qt::NoFocus);
        RollDn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #FFA500;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #D68910;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(RollDn, 3, 1, 1, 1);

        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));

        gridLayout->addWidget(graphicsView, 0, 0, 1, 5);

        Calculator->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Calculator);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 330, 30));
        Calculator->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Calculator);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Calculator->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Calculator);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Calculator->setStatusBar(statusBar);

        retranslateUi(Calculator);

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QMainWindow *Calculator)
    {
        Calculator->setWindowTitle(QCoreApplication::translate("Calculator", "MainWindow", nullptr));
        Divide->setText(QCoreApplication::translate("Calculator", "/", nullptr));
        NaturalLog->setText(QCoreApplication::translate("Calculator", "ln", nullptr));
        Swap->setText(QCoreApplication::translate("Calculator", "Swap", nullptr));
        Inverse->setText(QCoreApplication::translate("Calculator", "1/x", nullptr));
        RollUp->setText(QCoreApplication::translate("Calculator", "Up", nullptr));
        LogBase2->setText(QCoreApplication::translate("Calculator", "log_2", nullptr));
        Subtract->setText(QCoreApplication::translate("Calculator", "-", nullptr));
        Button3->setText(QCoreApplication::translate("Calculator", "3", nullptr));
        LogBase10->setText(QCoreApplication::translate("Calculator", "log_10", nullptr));
        Button9->setText(QCoreApplication::translate("Calculator", "9", nullptr));
        SquareRoot->setText(QCoreApplication::translate("Calculator", "sqrt", nullptr));
        Input->setText(QCoreApplication::translate("Calculator", "TextLabel", nullptr));
        Button1->setText(QCoreApplication::translate("Calculator", "1", nullptr));
        DecimalPoint->setText(QCoreApplication::translate("Calculator", ".", nullptr));
        Drop->setText(QCoreApplication::translate("Calculator", "Drop", nullptr));
        Square->setText(QCoreApplication::translate("Calculator", "x^2", nullptr));
        Add->setText(QCoreApplication::translate("Calculator", "+", nullptr));
        Button0->setText(QCoreApplication::translate("Calculator", "0", nullptr));
        Button2->setText(QCoreApplication::translate("Calculator", "2", nullptr));
        Button8->setText(QCoreApplication::translate("Calculator", "8", nullptr));
        ChangeSign->setText(QCoreApplication::translate("Calculator", "+/-", nullptr));
        Enter->setText(QCoreApplication::translate("Calculator", "ENTER", nullptr));
        YtoX->setText(QCoreApplication::translate("Calculator", "y^x", nullptr));
        Button7->setText(QCoreApplication::translate("Calculator", "7", nullptr));
        Button6->setText(QCoreApplication::translate("Calculator", "6", nullptr));
        Multiply->setText(QCoreApplication::translate("Calculator", "*", nullptr));
        Button5->setText(QCoreApplication::translate("Calculator", "5", nullptr));
        ClearAll->setText(QCoreApplication::translate("Calculator", "CLA", nullptr));
        Button4->setText(QCoreApplication::translate("Calculator", "4", nullptr));
        RollDn->setText(QCoreApplication::translate("Calculator", "Dn", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
