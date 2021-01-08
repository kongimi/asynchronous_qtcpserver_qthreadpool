#include "mytcpserver.h"

MyTcpServer::MyTcpServer(QObject *parent) :
    QTcpServer(parent)
{
}

void MyTcpServer::startServer()
{
    if(listen(QHostAddress::Any, 1234))
    {
        qDebug() << "Server: started";
    }
    else
    {
        qDebug() << "Server: not started!";
    }
}

void MyTcpServer::incomingConnection(qintptr socketDescriptor)
{
    // At the incoming connection, make a client
    // and set the socket
    MyClient *client = new MyClient(this);
    client->setSocket(socketDescriptor);
}
