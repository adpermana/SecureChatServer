#include "ChatterBoxServer.h"
#include <QCoreApplication>

int main(int argc, char **argv)
{
    QCoreApplication app(argc, argv);
    int serverPort = 4200;

    ChatterBoxServer *server = new ChatterBoxServer();
    bool success = server->listen(QHostAddress::Any, serverPort);
    if(!success)
    {
        qFatal("Could not listen on port " + serverPort);
    }

    qDebug() << "Ready";

    return app.exec();
}
