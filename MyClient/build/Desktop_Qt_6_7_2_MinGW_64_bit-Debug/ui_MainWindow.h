/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_4;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *MyClientGB;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *IPL;
    QLineEdit *IPLE;
    QHBoxLayout *horizontalLayout_2;
    QLabel *PortL;
    QLineEdit *PortLE;
    QPushButton *ConnectPB;
    QPushButton *DisconnectPB;
    QLabel *MessageL;
    QLineEdit *MessageLE;
    QPushButton *SendPB;
    QGroupBox *ConsoleDataGB;
    QGridLayout *gridLayout_2;
    QListWidget *ConsoleLW;
    QPushButton *ConsoleClearPB;
    QGroupBox *ReceivedGB;
    QGridLayout *gridLayout_3;
    QListWidget *ReceivedLW;
    QPushButton *ReceivedClearPB;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(841, 630);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout_4 = new QGridLayout(centralwidget);
        gridLayout_4->setObjectName("gridLayout_4");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        MyClientGB = new QGroupBox(centralwidget);
        MyClientGB->setObjectName("MyClientGB");
        gridLayout = new QGridLayout(MyClientGB);
        gridLayout->setObjectName("gridLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        IPL = new QLabel(MyClientGB);
        IPL->setObjectName("IPL");
        IPL->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";"));

        horizontalLayout->addWidget(IPL);

        IPLE = new QLineEdit(MyClientGB);
        IPLE->setObjectName("IPLE");

        horizontalLayout->addWidget(IPLE);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        PortL = new QLabel(MyClientGB);
        PortL->setObjectName("PortL");
        PortL->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";"));

        horizontalLayout_2->addWidget(PortL);

        PortLE = new QLineEdit(MyClientGB);
        PortLE->setObjectName("PortLE");

        horizontalLayout_2->addWidget(PortLE);


        verticalLayout->addLayout(horizontalLayout_2);

        ConnectPB = new QPushButton(MyClientGB);
        ConnectPB->setObjectName("ConnectPB");
        ConnectPB->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 0);\n"
"color: rgb(0, 0, 0);\n"
"font: 12pt \"Segoe UI\";"));

        verticalLayout->addWidget(ConnectPB);

        DisconnectPB = new QPushButton(MyClientGB);
        DisconnectPB->setObjectName("DisconnectPB");
        DisconnectPB->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 0, 0);"));

        verticalLayout->addWidget(DisconnectPB);

        MessageL = new QLabel(MyClientGB);
        MessageL->setObjectName("MessageL");
        MessageL->setStyleSheet(QString::fromUtf8("font: 16pt \"Segoe UI\";"));
        MessageL->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(MessageL);

        MessageLE = new QLineEdit(MyClientGB);
        MessageLE->setObjectName("MessageLE");

        verticalLayout->addWidget(MessageLE);

        SendPB = new QPushButton(MyClientGB);
        SendPB->setObjectName("SendPB");

        verticalLayout->addWidget(SendPB);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        horizontalLayout_3->addWidget(MyClientGB);

        ConsoleDataGB = new QGroupBox(centralwidget);
        ConsoleDataGB->setObjectName("ConsoleDataGB");
        gridLayout_2 = new QGridLayout(ConsoleDataGB);
        gridLayout_2->setObjectName("gridLayout_2");
        ConsoleLW = new QListWidget(ConsoleDataGB);
        ConsoleLW->setObjectName("ConsoleLW");

        gridLayout_2->addWidget(ConsoleLW, 0, 0, 1, 1);

        ConsoleClearPB = new QPushButton(ConsoleDataGB);
        ConsoleClearPB->setObjectName("ConsoleClearPB");

        gridLayout_2->addWidget(ConsoleClearPB, 1, 0, 1, 1);


        horizontalLayout_3->addWidget(ConsoleDataGB);


        verticalLayout_2->addLayout(horizontalLayout_3);

        ReceivedGB = new QGroupBox(centralwidget);
        ReceivedGB->setObjectName("ReceivedGB");
        gridLayout_3 = new QGridLayout(ReceivedGB);
        gridLayout_3->setObjectName("gridLayout_3");
        ReceivedLW = new QListWidget(ReceivedGB);
        ReceivedLW->setObjectName("ReceivedLW");

        gridLayout_3->addWidget(ReceivedLW, 0, 0, 1, 1);

        ReceivedClearPB = new QPushButton(ReceivedGB);
        ReceivedClearPB->setObjectName("ReceivedClearPB");

        gridLayout_3->addWidget(ReceivedClearPB, 1, 0, 1, 1);


        verticalLayout_2->addWidget(ReceivedGB);


        gridLayout_4->addLayout(verticalLayout_2, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 841, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        MyClientGB->setTitle(QCoreApplication::translate("MainWindow", "MyClient", nullptr));
        IPL->setText(QCoreApplication::translate("MainWindow", "IP", nullptr));
        PortL->setText(QCoreApplication::translate("MainWindow", "Port", nullptr));
        ConnectPB->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        DisconnectPB->setText(QCoreApplication::translate("MainWindow", "Disconnect", nullptr));
        MessageL->setText(QCoreApplication::translate("MainWindow", "Enter the Message", nullptr));
        SendPB->setText(QCoreApplication::translate("MainWindow", "Send", nullptr));
        ConsoleDataGB->setTitle(QCoreApplication::translate("MainWindow", "Console Data", nullptr));
        ConsoleClearPB->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        ReceivedGB->setTitle(QCoreApplication::translate("MainWindow", "Received Data", nullptr));
        ReceivedClearPB->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
