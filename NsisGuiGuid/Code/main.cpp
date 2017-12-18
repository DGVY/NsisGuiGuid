#include "stdafx.h"
#include "NsisGuiGuidDlg.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    NsisGuiGuidDlg w;
    w.show();
    return a.exec();
}
