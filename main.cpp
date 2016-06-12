#include "qPhotogrammetryDlg.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qPhotogrammetryDlg w;
    w.show();

    return a.exec();
}
