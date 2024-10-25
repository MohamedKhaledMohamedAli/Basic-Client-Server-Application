/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
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
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBoxServerApp;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *PortLabel;
    QLineEdit *PortLineEdit;
    QPushButton *ListenPushButton;
    QLabel *SendMessageLabel;
    QLabel *label;
    QLineEdit *MessageLineEdit;
    QPushButton *SendPushButton;
    QGroupBox *SentDataDisplayGroupBox;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_2;
    QListWidget *SentDataDisplayListWidget;
    QPushButton *SentDataClearPushButton;
    QGroupBox *RecievedDataDisplayGroupBox;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout;
    QListWidget *ReceivedDataDisplayListWidget;
    QPushButton *ReceivedDataClearPushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(851, 743);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout_4 = new QGridLayout(centralwidget);
        gridLayout_4->setObjectName("gridLayout_4");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        groupBoxServerApp = new QGroupBox(centralwidget);
        groupBoxServerApp->setObjectName("groupBoxServerApp");
        gridLayout = new QGridLayout(groupBoxServerApp);
        gridLayout->setObjectName("gridLayout");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        PortLabel = new QLabel(groupBoxServerApp);
        PortLabel->setObjectName("PortLabel");
        PortLabel->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";"));

        horizontalLayout->addWidget(PortLabel);

        PortLineEdit = new QLineEdit(groupBoxServerApp);
        PortLineEdit->setObjectName("PortLineEdit");

        horizontalLayout->addWidget(PortLineEdit);


        verticalLayout_3->addLayout(horizontalLayout);

        ListenPushButton = new QPushButton(groupBoxServerApp);
        ListenPushButton->setObjectName("ListenPushButton");

        verticalLayout_3->addWidget(ListenPushButton);

        SendMessageLabel = new QLabel(groupBoxServerApp);
        SendMessageLabel->setObjectName("SendMessageLabel");
        SendMessageLabel->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        SendMessageLabel->setStyleSheet(QString::fromUtf8("font: 700 16pt \"Segoe UI\";\n"
""));
        SendMessageLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_3->addWidget(SendMessageLabel);

        label = new QLabel(groupBoxServerApp);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_3->addWidget(label);

        MessageLineEdit = new QLineEdit(groupBoxServerApp);
        MessageLineEdit->setObjectName("MessageLineEdit");

        verticalLayout_3->addWidget(MessageLineEdit);

        SendPushButton = new QPushButton(groupBoxServerApp);
        SendPushButton->setObjectName("SendPushButton");

        verticalLayout_3->addWidget(SendPushButton);


        gridLayout->addLayout(verticalLayout_3, 0, 0, 1, 1);


        horizontalLayout_2->addWidget(groupBoxServerApp);

        SentDataDisplayGroupBox = new QGroupBox(centralwidget);
        SentDataDisplayGroupBox->setObjectName("SentDataDisplayGroupBox");
        gridLayout_2 = new QGridLayout(SentDataDisplayGroupBox);
        gridLayout_2->setObjectName("gridLayout_2");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        SentDataDisplayListWidget = new QListWidget(SentDataDisplayGroupBox);
        SentDataDisplayListWidget->setObjectName("SentDataDisplayListWidget");

        verticalLayout_2->addWidget(SentDataDisplayListWidget);

        SentDataClearPushButton = new QPushButton(SentDataDisplayGroupBox);
        SentDataClearPushButton->setObjectName("SentDataClearPushButton");

        verticalLayout_2->addWidget(SentDataClearPushButton);


        gridLayout_2->addLayout(verticalLayout_2, 0, 0, 1, 1);


        horizontalLayout_2->addWidget(SentDataDisplayGroupBox);


        verticalLayout_4->addLayout(horizontalLayout_2);

        RecievedDataDisplayGroupBox = new QGroupBox(centralwidget);
        RecievedDataDisplayGroupBox->setObjectName("RecievedDataDisplayGroupBox");
        gridLayout_3 = new QGridLayout(RecievedDataDisplayGroupBox);
        gridLayout_3->setObjectName("gridLayout_3");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        ReceivedDataDisplayListWidget = new QListWidget(RecievedDataDisplayGroupBox);
        ReceivedDataDisplayListWidget->setObjectName("ReceivedDataDisplayListWidget");

        verticalLayout->addWidget(ReceivedDataDisplayListWidget);

        ReceivedDataClearPushButton = new QPushButton(RecievedDataDisplayGroupBox);
        ReceivedDataClearPushButton->setObjectName("ReceivedDataClearPushButton");

        verticalLayout->addWidget(ReceivedDataClearPushButton);


        gridLayout_3->addLayout(verticalLayout, 0, 0, 1, 1);


        verticalLayout_4->addWidget(RecievedDataDisplayGroupBox);


        gridLayout_4->addLayout(verticalLayout_4, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 851, 25));
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
        groupBoxServerApp->setTitle(QCoreApplication::translate("MainWindow", "Server Application", nullptr));
        PortLabel->setText(QCoreApplication::translate("MainWindow", "PORT", nullptr));
        ListenPushButton->setText(QCoreApplication::translate("MainWindow", "Listen", nullptr));
        SendMessageLabel->setText(QCoreApplication::translate("MainWindow", "Send Message", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "(Client_Name:Message)", nullptr));
        SendPushButton->setText(QCoreApplication::translate("MainWindow", "Send", nullptr));
        SentDataDisplayGroupBox->setTitle(QCoreApplication::translate("MainWindow", "Sent Data Display", nullptr));
        SentDataClearPushButton->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        RecievedDataDisplayGroupBox->setTitle(QCoreApplication::translate("MainWindow", "Recieved Data Display", nullptr));
        ReceivedDataClearPushButton->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
