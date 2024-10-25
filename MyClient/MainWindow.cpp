#include "MainWindow.h"
#include "ui_MainWindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    // Setting Up the GUI
    ui->setupUi(this);

    ///////// Connect Signals of MyServer Class with Slots of MainWindow /////////
    connect(&client, &MyClient::sendConsole, this, &MainWindow::receiveConsole);
    connect(&client, &MyClient::sendStateChanged, this, &MainWindow::receiveStateChanged);
    connect(&client, &MyClient::sendErrorOccurred, this, &MainWindow::receiveErrorOccurred);
    connect(&client, &MyClient::sendReadyRead, this, &MainWindow::receiveReadyRead);
}

MainWindow::~MainWindow()
{
    delete ui;
}

// Fuction Called when Connect Push Button is pressed to connect Client with Server with IP and Port Number written in their Line Edits' widget
void MainWindow::on_ConnectPB_clicked()
{
    // Connect the Client to the Server with IP and Port Number given
    client.ConnectToHost(ui->IPLE->text(), ui->PortLE->text().toInt());
}

// Fuction Called when Disconnect Push Button is pressed to disconnect Client from Server
void MainWindow::on_DisconnectPB_clicked()
{
    // Disconnect Client from Server
    client.DisconnectFromHost();
}

// Fuction Called when Send Push Button is pressed to send data from Client to Server
void MainWindow::on_SendPB_clicked()
{
    // Send data from Client to Server
    client.SendData(ui->MessageLE->text());
}

// Fuction Called when Clear Push Button is pressed to clear list widget
void MainWindow::on_ConsoleClearPB_clicked()
{
    // Clear the List Widget
    ui->ConsoleLW->clear();
}

// Fuction Called when Clear Push Button is pressed to clear list widget
void MainWindow::on_ReceivedClearPB_clicked()
{
    // Clear the List Widget
    ui->ReceivedLW->clear();
}

// To Display Data on Console
void MainWindow::receiveConsole(QString info)
{
    // To Display Data on Console
    ui->ConsoleLW->addItem(info);
}

// Display the State of the Socket on the Console
void MainWindow::receiveStateChanged(QAbstractSocket::SocketState state)
{
    // QMetaEnum to be able to work with Enums of SocketState
    QMetaEnum stateObject = QMetaEnum::fromType<QAbstractSocket::SocketState>();

    // Convert Enum to QString
    QString stateString = stateObject.valueToKey(state);

    // Display the State
    ui->ConsoleLW->addItem(stateString);
}

// Display the Error of the Socket on the Console
void MainWindow::receiveErrorOccurred(QAbstractSocket::SocketError error)
{
    // QMetaEnum to be able to work with Enums of SocketError
    QMetaEnum errorObject = QMetaEnum::fromType<QAbstractSocket::SocketError>();

    // Convert Enum to QString
    QString errorString = errorObject.valueToKey(error);

    // Display the Error
    ui->ConsoleLW->addItem(errorString);
}

// Send the data to the Console to be displayed
void MainWindow::receiveReadyRead(QString data)
{
    // Display the Data
    ui->ReceivedLW->addItem(data);
}

