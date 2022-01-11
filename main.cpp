#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlComponent>
#include <QCursor>

QObject *object;
int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QGuiApplication app(argc, argv);

    app.setOverrideCursor(QCursor(Qt::BlankCursor));

    QQmlEngine engine;
    QQmlComponent component(&engine, "qrc:/OneView.qml");
    object = component.create();

    return app.exec();
}
