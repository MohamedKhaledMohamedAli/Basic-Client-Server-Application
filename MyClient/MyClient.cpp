#include "MyClient.h"

MyClient::MyClient(QObject *parent)
    : QObject{parent}
{
    // Create Socket for this class
    socket = new QTcpSocket(this);

    ////// Connect some of Signals of socket to Slots in MyClient class //////
    connect(socket,&QTcpSocket::connected,this,&MyClient::onConnected);
    connect(socket,&QTcpSocket::disconnected,this,&MyClient::onDisconnected);
    connect(socket,&QTcpSocket::stateChanged,this,&MyClient::onStateChanged);
    connect(socket,&QTcpSocket::errorOccurred,this,&MyClient::onErrorOccurred);
    connect(socket,&QTcpSocket::readyRead,this,&MyClient::onReadyRead);
}

// Function to Connect Client with a Server
void MyClient::ConnectToHost(QString ip, qint32 port)
{
    // Check is Socket is Open or not
    if(socket->isOpen())
    {
        // If the Socket is Opened and has the same IP and Port number do nothing
        if((this->ip == ip)&&(this->port == port))
        {
            return;
        }
    }
    else
    {
        // Create Socket to connect different IP and Port number
        this->ip = ip;      // New IP value
        this->port = port;  // New Port number value

        // Open the new Socket that can be Readable and Writeable
        socket->open(QIODevice::ReadWrite);

        // Connect the Socket to the New IP and Port number
        socket->connectToHost(ip,port);
    }
}

// Disconnect the Client from the Server
void MyClient::DisconnectFromHost()
{
    // Check if Socket is Open
    if(socket->isOpen())
    {
        // Close the Socket
        socket->close();
    }
}

// Send data from Client to Server
void MyClient::SendData(QString data)
{
    // We need to convert the data to Json Format
    QJsonObject jsonObject;
    jsonObject["type"] = "message";
    jsonObject["size"] = data.size();
    jsonObject["data"] = data;

    // Convert the Json Object to Json Document then send it to Server by byteArray
    QByteArray byteArray = QJsonDocument(jsonObject).toJson();

    // Send the message to the Server
    socket->write(byteArray);

    // Then Flush the output
    socket->flush();
}

// Function to be called when the Client is ready to read data from the Server
void MyClient::onReadyRead()
{
    // Check if Socket is Open
    if(socket->isOpen())
    {
        // Read the data from the Socket in Json Format
        QByteArray byteArray = socket->readAll();

        // Convert the Json format
        QJsonDocument JsonDoc = QJsonDocument::fromJson(byteArray);
        QJsonObject JsonObject = JsonDoc.object();
        QString type = JsonObject["type"].toString();
        QString data = JsonObject["data"].toString();
        qint32 size = JsonObject["size"].toInt();

        // Check if data is sent correctly if it has the same size
        if(size == data.size())
        {
            // Send the data to the Console to be displayed
            emit sendReadyRead(data);
        }
    }
}

// Function to be called when the Client is Connected to the Server
void MyClient::onConnected()
{
    // Display this message to the Console that the Client is connected to the Server
    emit sendConsole("Connected to the Server.....");
}

// Function to be called when the Client is disconnected to the Server
void MyClient::onDisconnected()
{
    // Check if Socket is Open
    if(socket->isOpen())
    {
        // Close the Socket
        socket->close();
    }

    // Print Message to the Console that the Client is disconnected from the Server
    emit sendConsole("Disconnected from the Server.....");
}

// Function to be called when the Client socket changes it's state
void MyClient::onStateChanged(QAbstractSocket::SocketState state)
{
    // Display the State of the Socket on the Console
    emit sendStateChanged(state);
}

// Function to be called when the Client socket has an error
void MyClient::onErrorOccurred(QAbstractSocket::SocketError error)
{
    // Display the Error of the Socket on the Console
    emit sendErrorOccurred(error);
}
