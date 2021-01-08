#ifndef MYCLIENT_H
#define MYCLIENT_H

#include <QObject>
#include <QTcpSocket>
#include <QDebug>
#include <QThreadPool>
#include "mytask.h"
#include <QString>

class MyClient : public QObject
{
    Q_OBJECT
public:
    explicit MyClient(QObject *parent = nullptr);
    void setSocket(qintptr Descriptor);
    QString clientText;

signals:

public slots:
    void connected();
    void disconnected();
    void readyRead();

    // make the server fully ascynchronous
    // by doing time consuming task
    void TaskResult(int Number);


private:
    QTcpSocket *socket;
};

#endif // MYCLIENT_H
