#include <QApplication>
#include <QQmlApplicationEngine>
#include <QQuickWindow>
#include <QObject>
#include <QQmlContext>
#include "myclass.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    class MyClass myClass;
    engine.rootContext()->setContextProperty("myClass", &myClass);

    return app.exec();
}
