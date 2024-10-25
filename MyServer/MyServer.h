#ifndef MYSERVER_H
#define MYSERVER_H

#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>
#include <QMap>
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>

class MyServer : public QTcpServer
{
    Q_OBJECT
public:
    explicit MyServer(QObject *parent = nullptr);

    // Function to make Server start Listening to a certain Port
    void StartServer(qint32 port);

    // Connecting Server with Client
    void incomingConnection(qintptr handle) override;

    // Function to send data from Server to Client
    void sendMessage(QString name,QString message);

public slots:
    // Slot to be called when Client send a message
    void onReadyRead();

    // Slot to be called when Client is Disconnected from the Server
    void onDisconnect();

signals:
    // Used to Send Data to GUI to Display it
    void sendConsole(QString info);

    // Display on Received Display the Received message from the Client
    void sendReadyRead(QString data);

    // Send to the Sender Display that the Client is disconnected from the Server
    void sendDisconnect();

private:
    QMap<QString,QTcpSocket*> clients;
};

#endif // MYSERVER_H
