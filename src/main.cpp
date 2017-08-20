#include <QApplication>
#include <DApplication>
#include <QTranslator>
#include <QDesktopWidget>
#include "mainwindow.h"
#include <DWidgetUtil>
#include "constant.h"

int main(int argc, char *argv[])
{
    DApplication::loadDXcbPlugin();

    const char *descriptionText = QT_TRANSLATE_NOOP("MainWindow",
                                                    "Remaster Dtk is a backup tool, which can backup you ubuntu linux desktop and create a new livecd iso.");

    const QString acknowledgementLink = "https://github.com/mutse/remastersys-dtk";

    DApplication app(argc, argv);

    if (app.setSingleInstance("remastersys-dtk"))
    {
        app.setOrganizationName("mutse");
        app.setApplicationName(QObject::tr("remastersys-dtk"));
        app.setApplicationVersion("1.0");

        app.setProductIcon(QPixmap::fromImage(QImage(":/res/image/logo.png")));
        app.setProductName(DApplication::translate("MainWindow", "Remastersys Dtk"));
        app.setApplicationDescription(descriptionText);
        app.setApplicationAcknowledgementPage(acknowledgementLink);

        app.setWindowIcon(QIcon(":res/image/logo.png"));

        MainWindow win;
        win.setFixedSize(Constant::MAIN_WINDOW_WIDTH, Constant::MAIN_WINDOW_HEIGHT);
        Dtk::Widget::moveToCenter(&win);
        win.show();
        return app.exec();
    }

    return 0;
}
