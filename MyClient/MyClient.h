#ifndef MYCLIENT_H
#define MYCLIENT_H

#include <QObject>
#include <QTcpSocket>
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>

class MyClient : public QObject
{
    Q_OBJECT
public:
    explicit MyClient(QObject *parent = nullptr);

    // Function to Connect Client with a Server
    void ConnectToHost(QString ip,qint32 port);

    // Disconnect the Client from the Server
    void DisconnectFromHost();

    // Send data from Client to Server
    void SendData(QString data);

signals:
    // To Display Data on Console
    void sendConsole(QString info);

    // Display the State of the Socket on the Console
    void sendStateChanged(QAbstractSocket::SocketState state);

    // Display the Error of the Socket on the Console
    void sendErrorOccurred(QAbstractSocket::SocketError error);

    // Send the data to the Console to be displayed
    void sendReadyRead(QString data);

public slots:
    // Function to be called when the Client is ready to read data from the Server
    void onReadyRead();

    // Function to be called when the Client is connected to the Server
    void onConnected();

    // Function to be called when the Client is disconnected to the Server
    void onDisconnected();

    // Function to be called when the Client socket changes it's state
    void onStateChanged(QAbstractSocket::SocketState state);

    // Function to be called when the Client socket has an error
    void onErrorOccurred(QAbstractSocket::SocketError error);

private:
    // Pointer to Socket to connect Client with Server
    QTcpSocket *socket;

    // IP of the Client
    QString ip;

    // Port Number of the Client
    qint32 port;
};

#endif // MYCLIENT_H
