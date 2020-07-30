#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{

#if (QT_VERSION >= QT_VERSION_CHECK(5, 6, 0))
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif
    QApplication a(argc, argv);
    qRegisterMetaType<uint8_t>("uint8_t");
    qRegisterMetaType<uint16_t>("uint16_t");
    qRegisterMetaType<uint32_t>("uint32_t");
    qRegisterMetaType<int32_t>("int32_t");
    qRegisterMetaType<QByteArray>("QByteArray");
	qRegisterMetaType< QList<float> >( "QList<float>" );
    
    MainWindow w;
    w.show();

    return a.exec();
}
