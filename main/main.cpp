#include <QApplication>
#include <QLocale>
#include <QMainWindow>

int main(int argc, char **argv)
{
    QLocale::setDefault(QLocale(QLocale::English, QLocale::UnitedStates));

    QApplication app(argc, argv);

    QMainWindow win;
    win.show();

    return app.exec();
}
