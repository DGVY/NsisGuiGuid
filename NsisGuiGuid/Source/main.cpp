#include "stdafx.h"
#include "FormFiles/NsisGuiGuidDlg.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    NsisGuiGuidDlg w;
    w.show();
    return a.exec();
}
