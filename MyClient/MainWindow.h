#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <MyClient.h>
#include <QMetaEnum> // To be able to work with QTcpSocket Enums

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    // Fuction Called when Connect Push Button is pressed to connect Client with Server with IP and Port Number written in their Line Edits' widget
    void on_ConnectPB_clicked();

    // Fuction Called when Disconnect Push Button is pressed to disconnect Client from Server
    void on_DisconnectPB_clicked();

    // Fuction Called when Send Push Button is pressed to send data from Client to Server
    void on_SendPB_clicked();

    // Fuction Called when Clear Push Button is pressed to clear list widget
    void on_ConsoleClearPB_clicked();

    void on_ReceivedClearPB_clicked();

public slots:
    // To Display Data on Console
    void receiveConsole(QString info);

    // Display the State of the Socket on the Console
    void receiveStateChanged(QAbstractSocket::SocketState state);

    // Display the Error of the Socket on the Console
    void receiveErrorOccurred(QAbstractSocket::SocketError error);

    // Send the data to the Console to be displayed
    void receiveReadyRead(QString data);

private:
    // Create Pointer to the GUI
    Ui::MainWindow *ui;

    // Create Object of MyClient class
    MyClient client;
};
#endif // MAINWINDOW_H
