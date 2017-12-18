#pragma once

#include <QtWidgets/QDialog>
#include "ui_NsisGuiGuidDlg.h"

class NsisGuiGuidDlg : public QDialog
{
    Q_OBJECT

public:
    NsisGuiGuidDlg(QWidget *parent = Q_NULLPTR);

private:
    Ui::NsisGuiGuidDlgClass ui;
};
