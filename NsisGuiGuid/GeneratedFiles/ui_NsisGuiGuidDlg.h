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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_NsisGuiGuidDlgClass
{
public:
    QGridLayout *gridLayout;
    QGroupBox *GBCompile;
    QGroupBox *Brief;
    QHBoxLayout *horizontalLayout;
    QTextBrowser *textBrowser;
    QGroupBox *Author;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QTabWidget *SettingsWidget;

    void setupUi(QDialog *NsisGuiGuidDlgClass)
    {
        if (NsisGuiGuidDlgClass->objectName().isEmpty())
            NsisGuiGuidDlgClass->setObjectName(QStringLiteral("NsisGuiGuidDlgClass"));
        NsisGuiGuidDlgClass->resize(624, 837);
        gridLayout = new QGridLayout(NsisGuiGuidDlgClass);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        GBCompile = new QGroupBox(NsisGuiGuidDlgClass);
        GBCompile->setObjectName(QStringLiteral("GBCompile"));

        gridLayout->addWidget(GBCompile, 3, 0, 1, 2);

        Brief = new QGroupBox(NsisGuiGuidDlgClass);
        Brief->setObjectName(QStringLiteral("Brief"));
        horizontalLayout = new QHBoxLayout(Brief);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        textBrowser = new QTextBrowser(Brief);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        horizontalLayout->addWidget(textBrowser);


        gridLayout->addWidget(Brief, 1, 1, 2, 1);

        Author = new QGroupBox(NsisGuiGuidDlgClass);
        Author->setObjectName(QStringLiteral("Author"));
        horizontalLayout_2 = new QHBoxLayout(Author);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(Author);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);


        gridLayout->addWidget(Author, 0, 1, 1, 1);

        SettingsWidget = new QTabWidget(NsisGuiGuidDlgClass);
        SettingsWidget->setObjectName(QStringLiteral("SettingsWidget"));

        gridLayout->addWidget(SettingsWidget, 0, 0, 3, 1);

        gridLayout->setColumnStretch(0, 3);
        gridLayout->setColumnStretch(1, 2);

        retranslateUi(NsisGuiGuidDlgClass);

        QMetaObject::connectSlotsByName(NsisGuiGuidDlgClass);
    } // setupUi

    void retranslateUi(QDialog *NsisGuiGuidDlgClass)
    {
        NsisGuiGuidDlgClass->setWindowTitle(QApplication::translate("NsisGuiGuidDlgClass", "NsisGuiGuidDlg", Q_NULLPTR));
        GBCompile->setTitle(QApplication::translate("NsisGuiGuidDlgClass", "\345\216\213\347\274\251\347\274\226\350\257\221", Q_NULLPTR));
        Brief->setTitle(QApplication::translate("NsisGuiGuidDlgClass", "\350\257\264\346\230\216", Q_NULLPTR));
        Author->setTitle(QApplication::translate("NsisGuiGuidDlgClass", "\344\275\234\350\200\205\344\277\241\346\201\257", Q_NULLPTR));
        label->setText(QApplication::translate("NsisGuiGuidDlgClass", "   Author: @DGVY\n"
"\n"
"   Mail  : dgvylk@gmail.com\n"
"\n"
"   Github: github.com/DGVY\n"
"\n"
"   Blog  : dgvy.github.io", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class NsisGuiGuidDlgClass: public Ui_NsisGuiGuidDlgClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NSISGUIGUIDDLG_H
