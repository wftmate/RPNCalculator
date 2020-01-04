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
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
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
    QListWidget *Display;
    QPushButton *DecimalPoint;
    QPushButton *Add;
    QPushButton *Square;
    QPushButton *Swap;
    QPushButton *Button3;
    QPushButton *Button0;
    QPushButton *Button8;
    QPushButton *LogBase2;
    QPushButton *Button9;
    QPushButton *Button1;
    QPushButton *Drop;
    QPushButton *NaturalLog;
    QPushButton *RollUp;
    QPushButton *Multiply;
    QPushButton *Enter;
    QPushButton *Button5;
    QPushButton *SquareRoot;
    QPushButton *ClearAll;
    QPushButton *RollDn;
    QLabel *Input;
    QPushButton *Inverse;
    QPushButton *Button4;
    QPushButton *Button2;
    QPushButton *ChangeSign;
    QPushButton *Subtract;
    QPushButton *YtoX;
    QPushButton *Button7;
    QPushButton *Divide;
    QPushButton *LogBase10;
    QPushButton *Button6;
    QMenuBar *menuBar;
    QMenu *menuMenu;
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
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Calculator->sizePolicy().hasHeightForWidth());
        Calculator->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../../../Desktop/duck in a tophat.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Calculator->setWindowIcon(icon);
        centralWidget = new QWidget(Calculator);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        Display = new QListWidget(centralWidget);
        Display->setObjectName(QString::fromUtf8("Display"));
        Display->setFocusPolicy(Qt::NoFocus);
        Display->setLayoutDirection(Qt::RightToLeft);
        Display->setAlternatingRowColors(true);
        Display->setFlow(QListView::TopToBottom);
        Display->setItemAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignRight|Qt::AlignTrailing);

        gridLayout->addWidget(Display, 0, 0, 1, 5);

        DecimalPoint = new QPushButton(centralWidget);
        numberGroup = new QButtonGroup(Calculator);
        numberGroup->setObjectName(QString::fromUtf8("numberGroup"));
        numberGroup->addButton(DecimalPoint);
        DecimalPoint->setObjectName(QString::fromUtf8("DecimalPoint"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(DecimalPoint->sizePolicy().hasHeightForWidth());
        DecimalPoint->setSizePolicy(sizePolicy1);
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

        gridLayout->addWidget(DecimalPoint, 11, 2, 1, 1);

        Add = new QPushButton(centralWidget);
        mathFunctionGroup = new QButtonGroup(Calculator);
        mathFunctionGroup->setObjectName(QString::fromUtf8("mathFunctionGroup"));
        mathFunctionGroup->addButton(Add);
        Add->setObjectName(QString::fromUtf8("Add"));
        sizePolicy1.setHeightForWidth(Add->sizePolicy().hasHeightForWidth());
        Add->setSizePolicy(sizePolicy1);
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

        gridLayout->addWidget(Add, 11, 3, 1, 1);

        Square = new QPushButton(centralWidget);
        mathFunctionGroup->addButton(Square);
        Square->setObjectName(QString::fromUtf8("Square"));
        sizePolicy1.setHeightForWidth(Square->sizePolicy().hasHeightForWidth());
        Square->setSizePolicy(sizePolicy1);
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

        gridLayout->addWidget(Square, 3, 0, 1, 1);

        Swap = new QPushButton(centralWidget);
        stackFunctionGroup = new QButtonGroup(Calculator);
        stackFunctionGroup->setObjectName(QString::fromUtf8("stackFunctionGroup"));
        stackFunctionGroup->addButton(Swap);
        Swap->setObjectName(QString::fromUtf8("Swap"));
        sizePolicy1.setHeightForWidth(Swap->sizePolicy().hasHeightForWidth());
        Swap->setSizePolicy(sizePolicy1);
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

        gridLayout->addWidget(Swap, 2, 2, 1, 1);

        Button3 = new QPushButton(centralWidget);
        numberGroup->addButton(Button3);
        Button3->setObjectName(QString::fromUtf8("Button3"));
        sizePolicy1.setHeightForWidth(Button3->sizePolicy().hasHeightForWidth());
        Button3->setSizePolicy(sizePolicy1);
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

        gridLayout->addWidget(Button3, 9, 2, 1, 1);

        Button0 = new QPushButton(centralWidget);
        numberGroup->addButton(Button0);
        Button0->setObjectName(QString::fromUtf8("Button0"));
        sizePolicy1.setHeightForWidth(Button0->sizePolicy().hasHeightForWidth());
        Button0->setSizePolicy(sizePolicy1);
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

        gridLayout->addWidget(Button0, 11, 0, 1, 2);

        Button8 = new QPushButton(centralWidget);
        numberGroup->addButton(Button8);
        Button8->setObjectName(QString::fromUtf8("Button8"));
        sizePolicy1.setHeightForWidth(Button8->sizePolicy().hasHeightForWidth());
        Button8->setSizePolicy(sizePolicy1);
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

        gridLayout->addWidget(Button8, 5, 1, 1, 1);

        LogBase2 = new QPushButton(centralWidget);
        mathFunctionGroup->addButton(LogBase2);
        LogBase2->setObjectName(QString::fromUtf8("LogBase2"));
        sizePolicy1.setHeightForWidth(LogBase2->sizePolicy().hasHeightForWidth());
        LogBase2->setSizePolicy(sizePolicy1);
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

        gridLayout->addWidget(LogBase2, 4, 3, 1, 1);

        Button9 = new QPushButton(centralWidget);
        numberGroup->addButton(Button9);
        Button9->setObjectName(QString::fromUtf8("Button9"));
        sizePolicy1.setHeightForWidth(Button9->sizePolicy().hasHeightForWidth());
        Button9->setSizePolicy(sizePolicy1);
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

        gridLayout->addWidget(Button9, 5, 2, 1, 1);

        Button1 = new QPushButton(centralWidget);
        numberGroup->addButton(Button1);
        Button1->setObjectName(QString::fromUtf8("Button1"));
        sizePolicy1.setHeightForWidth(Button1->sizePolicy().hasHeightForWidth());
        Button1->setSizePolicy(sizePolicy1);
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

        gridLayout->addWidget(Button1, 9, 0, 1, 1);

        Drop = new QPushButton(centralWidget);
        stackFunctionGroup->addButton(Drop);
        Drop->setObjectName(QString::fromUtf8("Drop"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(Drop->sizePolicy().hasHeightForWidth());
        Drop->setSizePolicy(sizePolicy2);
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

        gridLayout->addWidget(Drop, 2, 3, 1, 1);

        NaturalLog = new QPushButton(centralWidget);
        mathFunctionGroup->addButton(NaturalLog);
        NaturalLog->setObjectName(QString::fromUtf8("NaturalLog"));
        sizePolicy1.setHeightForWidth(NaturalLog->sizePolicy().hasHeightForWidth());
        NaturalLog->setSizePolicy(sizePolicy1);
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

        gridLayout->addWidget(NaturalLog, 4, 1, 1, 1);

        RollUp = new QPushButton(centralWidget);
        stackFunctionGroup->addButton(RollUp);
        RollUp->setObjectName(QString::fromUtf8("RollUp"));
        sizePolicy1.setHeightForWidth(RollUp->sizePolicy().hasHeightForWidth());
        RollUp->setSizePolicy(sizePolicy1);
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

        gridLayout->addWidget(RollUp, 2, 0, 1, 1);

        Multiply = new QPushButton(centralWidget);
        mathFunctionGroup->addButton(Multiply);
        Multiply->setObjectName(QString::fromUtf8("Multiply"));
        sizePolicy1.setHeightForWidth(Multiply->sizePolicy().hasHeightForWidth());
        Multiply->setSizePolicy(sizePolicy1);
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

        gridLayout->addWidget(Multiply, 7, 3, 1, 1);

        Enter = new QPushButton(centralWidget);
        stackFunctionGroup->addButton(Enter);
        Enter->setObjectName(QString::fromUtf8("Enter"));
        sizePolicy1.setHeightForWidth(Enter->sizePolicy().hasHeightForWidth());
        Enter->setSizePolicy(sizePolicy1);
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

        gridLayout->addWidget(Enter, 3, 4, 9, 1);

        Button5 = new QPushButton(centralWidget);
        numberGroup->addButton(Button5);
        Button5->setObjectName(QString::fromUtf8("Button5"));
        sizePolicy1.setHeightForWidth(Button5->sizePolicy().hasHeightForWidth());
        Button5->setSizePolicy(sizePolicy1);
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

        gridLayout->addWidget(Button5, 7, 1, 1, 1);

        SquareRoot = new QPushButton(centralWidget);
        mathFunctionGroup->addButton(SquareRoot);
        SquareRoot->setObjectName(QString::fromUtf8("SquareRoot"));
        sizePolicy1.setHeightForWidth(SquareRoot->sizePolicy().hasHeightForWidth());
        SquareRoot->setSizePolicy(sizePolicy1);
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

        gridLayout->addWidget(SquareRoot, 3, 1, 1, 1);

        ClearAll = new QPushButton(centralWidget);
        stackFunctionGroup->addButton(ClearAll);
        ClearAll->setObjectName(QString::fromUtf8("ClearAll"));
        sizePolicy1.setHeightForWidth(ClearAll->sizePolicy().hasHeightForWidth());
        ClearAll->setSizePolicy(sizePolicy1);
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

        gridLayout->addWidget(ClearAll, 2, 4, 1, 1);

        RollDn = new QPushButton(centralWidget);
        stackFunctionGroup->addButton(RollDn);
        RollDn->setObjectName(QString::fromUtf8("RollDn"));
        sizePolicy1.setHeightForWidth(RollDn->sizePolicy().hasHeightForWidth());
        RollDn->setSizePolicy(sizePolicy1);
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

        gridLayout->addWidget(RollDn, 2, 1, 1, 1);

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

        gridLayout->addWidget(Input, 1, 0, 1, 5);

        Inverse = new QPushButton(centralWidget);
        mathFunctionGroup->addButton(Inverse);
        Inverse->setObjectName(QString::fromUtf8("Inverse"));
        sizePolicy1.setHeightForWidth(Inverse->sizePolicy().hasHeightForWidth());
        Inverse->setSizePolicy(sizePolicy1);
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

        gridLayout->addWidget(Inverse, 3, 3, 1, 1);

        Button4 = new QPushButton(centralWidget);
        numberGroup->addButton(Button4);
        Button4->setObjectName(QString::fromUtf8("Button4"));
        sizePolicy1.setHeightForWidth(Button4->sizePolicy().hasHeightForWidth());
        Button4->setSizePolicy(sizePolicy1);
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

        gridLayout->addWidget(Button4, 7, 0, 1, 1);

        Button2 = new QPushButton(centralWidget);
        numberGroup->addButton(Button2);
        Button2->setObjectName(QString::fromUtf8("Button2"));
        sizePolicy1.setHeightForWidth(Button2->sizePolicy().hasHeightForWidth());
        Button2->setSizePolicy(sizePolicy1);
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

        gridLayout->addWidget(Button2, 9, 1, 1, 1);

        ChangeSign = new QPushButton(centralWidget);
        mathFunctionGroup->addButton(ChangeSign);
        ChangeSign->setObjectName(QString::fromUtf8("ChangeSign"));
        sizePolicy1.setHeightForWidth(ChangeSign->sizePolicy().hasHeightForWidth());
        ChangeSign->setSizePolicy(sizePolicy1);
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

        gridLayout->addWidget(ChangeSign, 4, 0, 1, 1);

        Subtract = new QPushButton(centralWidget);
        mathFunctionGroup->addButton(Subtract);
        Subtract->setObjectName(QString::fromUtf8("Subtract"));
        sizePolicy1.setHeightForWidth(Subtract->sizePolicy().hasHeightForWidth());
        Subtract->setSizePolicy(sizePolicy1);
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

        gridLayout->addWidget(Subtract, 9, 3, 1, 1);

        YtoX = new QPushButton(centralWidget);
        mathFunctionGroup->addButton(YtoX);
        YtoX->setObjectName(QString::fromUtf8("YtoX"));
        sizePolicy1.setHeightForWidth(YtoX->sizePolicy().hasHeightForWidth());
        YtoX->setSizePolicy(sizePolicy1);
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

        gridLayout->addWidget(YtoX, 3, 2, 1, 1);

        Button7 = new QPushButton(centralWidget);
        numberGroup->addButton(Button7);
        Button7->setObjectName(QString::fromUtf8("Button7"));
        sizePolicy1.setHeightForWidth(Button7->sizePolicy().hasHeightForWidth());
        Button7->setSizePolicy(sizePolicy1);
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

        gridLayout->addWidget(Button7, 5, 0, 1, 1);

        Divide = new QPushButton(centralWidget);
        mathFunctionGroup->addButton(Divide);
        Divide->setObjectName(QString::fromUtf8("Divide"));
        sizePolicy1.setHeightForWidth(Divide->sizePolicy().hasHeightForWidth());
        Divide->setSizePolicy(sizePolicy1);
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

        gridLayout->addWidget(Divide, 5, 3, 1, 1);

        LogBase10 = new QPushButton(centralWidget);
        mathFunctionGroup->addButton(LogBase10);
        LogBase10->setObjectName(QString::fromUtf8("LogBase10"));
        sizePolicy1.setHeightForWidth(LogBase10->sizePolicy().hasHeightForWidth());
        LogBase10->setSizePolicy(sizePolicy1);
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

        gridLayout->addWidget(LogBase10, 4, 2, 1, 1);

        Button6 = new QPushButton(centralWidget);
        numberGroup->addButton(Button6);
        Button6->setObjectName(QString::fromUtf8("Button6"));
        sizePolicy1.setHeightForWidth(Button6->sizePolicy().hasHeightForWidth());
        Button6->setSizePolicy(sizePolicy1);
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

        gridLayout->addWidget(Button6, 7, 2, 1, 1);

        Calculator->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Calculator);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 330, 21));
        menuMenu = new QMenu(menuBar);
        menuMenu->setObjectName(QString::fromUtf8("menuMenu"));
        sizePolicy1.setHeightForWidth(menuMenu->sizePolicy().hasHeightForWidth());
        menuMenu->setSizePolicy(sizePolicy1);
        Calculator->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Calculator);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Calculator->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Calculator);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Calculator->setStatusBar(statusBar);

        menuBar->addAction(menuMenu->menuAction());

        retranslateUi(Calculator);

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QMainWindow *Calculator)
    {
        Calculator->setWindowTitle(QCoreApplication::translate("Calculator", "RPNCalc", nullptr));
        DecimalPoint->setText(QCoreApplication::translate("Calculator", ".", nullptr));
        Add->setText(QCoreApplication::translate("Calculator", "+", nullptr));
        Square->setText(QCoreApplication::translate("Calculator", "x^2", nullptr));
        Swap->setText(QCoreApplication::translate("Calculator", "Swap", nullptr));
        Button3->setText(QCoreApplication::translate("Calculator", "3", nullptr));
        Button0->setText(QCoreApplication::translate("Calculator", "0", nullptr));
        Button8->setText(QCoreApplication::translate("Calculator", "8", nullptr));
        LogBase2->setText(QCoreApplication::translate("Calculator", "log_2", nullptr));
        Button9->setText(QCoreApplication::translate("Calculator", "9", nullptr));
        Button1->setText(QCoreApplication::translate("Calculator", "1", nullptr));
        Drop->setText(QCoreApplication::translate("Calculator", "Drop", nullptr));
        NaturalLog->setText(QCoreApplication::translate("Calculator", "ln", nullptr));
        RollUp->setText(QCoreApplication::translate("Calculator", "Up", nullptr));
        Multiply->setText(QCoreApplication::translate("Calculator", "*", nullptr));
        Enter->setText(QCoreApplication::translate("Calculator", "ENTER", nullptr));
        Button5->setText(QCoreApplication::translate("Calculator", "5", nullptr));
        SquareRoot->setText(QCoreApplication::translate("Calculator", "sqrt", nullptr));
        ClearAll->setText(QCoreApplication::translate("Calculator", "CLA", nullptr));
        RollDn->setText(QCoreApplication::translate("Calculator", "Dn", nullptr));
        Input->setText(QCoreApplication::translate("Calculator", "TextLabel", nullptr));
        Inverse->setText(QCoreApplication::translate("Calculator", "1/x", nullptr));
        Button4->setText(QCoreApplication::translate("Calculator", "4", nullptr));
        Button2->setText(QCoreApplication::translate("Calculator", "2", nullptr));
        ChangeSign->setText(QCoreApplication::translate("Calculator", "+/-", nullptr));
        Subtract->setText(QCoreApplication::translate("Calculator", "-", nullptr));
        YtoX->setText(QCoreApplication::translate("Calculator", "y^x", nullptr));
        Button7->setText(QCoreApplication::translate("Calculator", "7", nullptr));
        Divide->setText(QCoreApplication::translate("Calculator", "/", nullptr));
        LogBase10->setText(QCoreApplication::translate("Calculator", "log_10", nullptr));
        Button6->setText(QCoreApplication::translate("Calculator", "6", nullptr));
        menuMenu->setTitle(QCoreApplication::translate("Calculator", "Menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
