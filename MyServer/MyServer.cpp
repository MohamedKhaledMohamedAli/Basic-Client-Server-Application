#include "MyServer.h"

MyServer::MyServer(QObject *parent)
    : QTcpServer{parent}
{}

// Function to make Server start Listening to a certain Port
void MyServer::StartServer(qint32 port)
{
    // Check if there is no other Server is lintening on this port of Any IP address and
    // also tells the server to listen for incoming connections on name.
    if(this->listen(QHostAddress::Any,port))
    {
        // If there is NO server listening on this port then print "Server is up"
        emit sendConsole(QString("Server is up and listenning to port => %1").arg(port));
    }
    else
    {
        // If there a server listening on this port then print "Server can't listen"
        emit sendConsole(QString("Server can't listen to port => %1").arg(port));
    }
}

// Connecting Server with Client
void MyServer::incomingConnection(qintptr handle)
{
    // Creating TCP socket
    QTcpSocket *newSocket = new QTcpSocket();

    // connect created socket with Client
    newSocket->open(QIODevice::ReadWrite);  // We open the socket and configure it to be Readable and Writeable
    newSocket->setSocketDescriptor(handle); // handle == SocketDescriptor --> Is a Unique ID for the Socket and here we Set SocketDescriptor to this unique ID for socket

    // Connect created socket signals with MyServer class slots
    connect(newSocket,&QTcpSocket::readyRead,this,&MyServer::onReadyRead);
    connect(newSocket,&QTcpSocket::disconnected,this,&MyServer::onDisconnect);

    // Create Static Variable to count number of clients
    static qint32 counter = 0;
    counter++;

    // Display the Client Number
    QString name = QString("Client_%1").arg(counter);

    // Store the Socket and refer to it using "name" variable
    clients[name] = newSocket;

    // Send a Welcome Message from Server to Client
    sendMessage(name,QString("Welcome from server dear %1").arg(name));
}

// Function to send data from Server to Client
void MyServer::sendMessage(QString name, QString message)
{
    // Check if the Client port is Open
    if(clients[name]->isOpen())
    {
        // Send the Message in Json Format
        QJsonObject jsonObject;             // Create Json Object
        jsonObject["type"] = "message";
        jsonObject["size"] = message.size();
        jsonObject["data"] = message;

        // Convert the Message to byteArray in Json format
        QByteArray byteArray = QJsonDocument(jsonObject).toJson();

        // Send message(data) in Json format from Server to Client
        clients[name]->write(byteArray);

        // Then Flush the output
        clients[name]->flush();
    }
}

// Slot to be called when Client send a message
void MyServer::onReadyRead()
{
    // Create Socket to store the Client socket that sent the message
    QTcpSocket* socket = qobject_cast<QTcpSocket*>(sender());

    // Read the message sent by Client in byteArray format
    QByteArray byteArray = socket->readAll();

    // Message was sent in Json format, therefore we need to convert message from Json format to strings
    QJsonDocument jsonDoc = QJsonDocument::fromJson(byteArray); // Convert byteArray to Json
    QJsonObject jsonObject = jsonDoc.object();                  // Convert Json to Json Objects
    QString type = jsonObject["type"].toString();
    qint32 size = jsonObject["size"].toInt();
    QString data = jsonObject["data"].toString();

    // Check if data Size is correct or not
    if(size == data.size())
    {
        // Display on Received Display the Received message from the Client
        emit sendReadyRead(data);
    }
}

// Slot to be called when Client is Disconnected from the Server
void MyServer::onDisconnect()
{
    // Create Socket to store the Client socket that was disconnected
    QTcpSocket* socket = qobject_cast<QTcpSocket*>(sender());

    // If Socket was open then Close it
    if(socket->isOpen())
    {
        // Close the Socket
        socket->close();
    }

    // Send to the Sender Display that the Client is disconnected from the Server
    emit sendDisconnect();
}
