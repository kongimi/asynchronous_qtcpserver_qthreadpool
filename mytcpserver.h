#ifndef MYTCPSERVER_H
#define MYTCPSERVER_H

#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>
#include <QAbstractSocket>
#include "myclient.h"

class MyTcpServer : public QTcpServer
{
public:
    explicit MyTcpServer(QObject *parent = nullptr);
    void startServer();

protected:
    void incomingConnection(qintptr socketDescriptor);

signals:

public slots:

};

#endif // MYTCPSERVER_H
