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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_NsisGuiGuidDlgClass
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *GBTypeSelect;
    QGroupBox *GBBaseCfg;
    QGroupBox *GBAdvancedCfg;
    QGroupBox *GBCompile;

    void setupUi(QDialog *NsisGuiGuidDlgClass)
    {
        if (NsisGuiGuidDlgClass->objectName().isEmpty())
            NsisGuiGuidDlgClass->setObjectName(QStringLiteral("NsisGuiGuidDlgClass"));
        NsisGuiGuidDlgClass->resize(600, 400);
        verticalLayout = new QVBoxLayout(NsisGuiGuidDlgClass);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        GBTypeSelect = new QGroupBox(NsisGuiGuidDlgClass);
        GBTypeSelect->setObjectName(QStringLiteral("GBTypeSelect"));

        verticalLayout->addWidget(GBTypeSelect);

        GBBaseCfg = new QGroupBox(NsisGuiGuidDlgClass);
        GBBaseCfg->setObjectName(QStringLiteral("GBBaseCfg"));

        verticalLayout->addWidget(GBBaseCfg);

        GBAdvancedCfg = new QGroupBox(NsisGuiGuidDlgClass);
        GBAdvancedCfg->setObjectName(QStringLiteral("GBAdvancedCfg"));

        verticalLayout->addWidget(GBAdvancedCfg);

        GBCompile = new QGroupBox(NsisGuiGuidDlgClass);
        GBCompile->setObjectName(QStringLiteral("GBCompile"));

        verticalLayout->addWidget(GBCompile);


        retranslateUi(NsisGuiGuidDlgClass);

        QMetaObject::connectSlotsByName(NsisGuiGuidDlgClass);
    } // setupUi

    void retranslateUi(QDialog *NsisGuiGuidDlgClass)
    {
        NsisGuiGuidDlgClass->setWindowTitle(QApplication::translate("NsisGuiGuidDlgClass", "NsisGuiGuidDlg", Q_NULLPTR));
        GBTypeSelect->setTitle(QApplication::translate("NsisGuiGuidDlgClass", "\347\261\273\345\236\213\351\200\211\346\213\251", Q_NULLPTR));
        GBBaseCfg->setTitle(QApplication::translate("NsisGuiGuidDlgClass", "\345\237\272\347\241\200\351\205\215\347\275\256", Q_NULLPTR));
        GBAdvancedCfg->setTitle(QApplication::translate("NsisGuiGuidDlgClass", "\351\253\230\347\272\247\351\205\215\347\275\256", Q_NULLPTR));
        GBCompile->setTitle(QApplication::translate("NsisGuiGuidDlgClass", "\345\216\213\347\274\251\347\274\226\350\257\221", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class NsisGuiGuidDlgClass: public Ui_NsisGuiGuidDlgClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NSISGUIGUIDDLG_H
