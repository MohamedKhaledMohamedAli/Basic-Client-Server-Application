#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    // Setting up the GUI
    ui->setupUi(this);

    ///////// Connect Signals of MyServer Class with Slots of MainWindow /////////
    connect(&server, &MyServer::sendConsole, this, &MainWindow::DisplayOnSenderListWidget);
    connect(&server, &MyServer::sendReadyRead, this, &MainWindow::receiveReadyRead);
    connect(&server, &MyServer::sendDisconnect, this, &MainWindow::receiveDisconnect);
}

MainWindow::~MainWindow()
{
    delete ui;
}

// Display test on Sender List Widget
void MainWindow::DisplayOnSenderListWidget(QString text)
{
    // Display data on Sender List Widget
    ui->SentDataDisplayListWidget->addItem(text);
}

// Display on Received Display the Received message from the Client


// Display on the Sender Display that the Client is disconnected from the Server
void MainWindow::receiveDisconnect()
{
    // Display on the Sender Display that the Client is disconnected from the Server
    ui->SentDataDisplayListWidget->addItem("Client was Disconnected");
}

// Make the Server Listen to the PORT and connect with it
void MainWindow::on_ListenPushButton_clicked()
{
    // Make the Server start Listening to the PORT
    server.StartServer(ui->PortLineEdit->text().toInt());
}

// Send the Data
void MainWindow::on_SendPushButton_clicked()
{
    // Get Message to send to the Client from Line Edit
    QString data = ui->MessageLineEdit->text();

    // We need to determine Client name and Message from the "data" variable
    if(data.contains(":"))
    {
        QString name = data.split(":")[0];
        QString message = data.split(":")[1];

        // Send the Message to the Client
        server.sendMessage(name, message);
    }
}

// Clear Sender Data Display
void MainWindow::on_SentDataClearPushButton_clicked()
{

    // Clear Sender Data Display
    ui->SentDataDisplayListWidget->clear();
}

// Clear Received Data Display
void MainWindow::on_ReceivedDataClearPushButton_clicked()
{

    // Clear Received Data Display
    ui->ReceivedDataDisplayListWidget->clear();
}
