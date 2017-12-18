/********************************************************************************
** Form generated from reading UI file 'NsisGuiGuidDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NSISGUIGUIDDLG_H
#define UI_NSISGUIGUIDDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_NsisGuiGuidDlgClass
{
public:

    void setupUi(QDialog *NsisGuiGuidDlgClass)
    {
        if (NsisGuiGuidDlgClass->objectName().isEmpty())
            NsisGuiGuidDlgClass->setObjectName(QStringLiteral("NsisGuiGuidDlgClass"));
        NsisGuiGuidDlgClass->resize(600, 400);

        retranslateUi(NsisGuiGuidDlgClass);

        QMetaObject::connectSlotsByName(NsisGuiGuidDlgClass);
    } // setupUi

    void retranslateUi(QDialog *NsisGuiGuidDlgClass)
    {
        NsisGuiGuidDlgClass->setWindowTitle(QApplication::translate("NsisGuiGuidDlgClass", "NsisGuiGuidDlg", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class NsisGuiGuidDlgClass: public Ui_NsisGuiGuidDlgClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NSISGUIGUIDDLG_H
