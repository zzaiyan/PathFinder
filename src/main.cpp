#include "mainwindow.h"

#include <QApplication>
#include <QTranslator>
#include "findpath/astar.h"

int main(int argc, char *argv[]) {
    srand(time(NULL));

    QApplication a(argc, argv);

    QTranslator qt_translator;
    bool IsLoad = qt_translator.load(":/qt_zh_CN.qm");
    if(IsLoad) {
        a.installTranslator(&qt_translator);
    }

    MainWindow w;
    w.show();

    return a.exec();
}
