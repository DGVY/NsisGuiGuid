/********************************************************************************
** Form generated from reading UI file 'WgtSettingsS.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WGTSETTINGSS_H
#define UI_WGTSETTINGSS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WgtSettingsS
{
public:
    QGridLayout *MainLayout;
    QLineEdit *SetupPathEdit;
    QLabel *label_18;
    QFrame *line;
    QLineEdit *CompanyEdit;
    QLabel *label_7;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_6;
    QSpinBox *VersionEdit1;
    QLabel *label_4;
    QSpinBox *VersionEdit2;
    QLabel *label_5;
    QSpinBox *VersionEdit3;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *ProjectCB;
    QLineEdit *ProjectEdit;
    QLabel *label_17;
    QLabel *label_3;
    QLabel *label_10;
    QLabel *label_15;
    QLabel *label_9;
    QFrame *line_2;
    QLabel *label_8;
    QLabel *label;
    QLabel *label_16;
    QLabel *label_12;
    QHBoxLayout *LanguageLayout;
    QLabel *label_14;
    QLabel *label_13;
    QLabel *label_11;
    QLabel *label_19;
    QCheckBox *PathCB;
    QCheckBox *DependsCB;

    void setupUi(QWidget *WgtSettingsS)
    {
        if (WgtSettingsS->objectName().isEmpty())
            WgtSettingsS->setObjectName(QStringLiteral("WgtSettingsS"));
        WgtSettingsS->resize(350, 500);
        MainLayout = new QGridLayout(WgtSettingsS);
        MainLayout->setSpacing(6);
        MainLayout->setContentsMargins(11, 11, 11, 11);
        MainLayout->setObjectName(QStringLiteral("MainLayout"));
        SetupPathEdit = new QLineEdit(WgtSettingsS);
        SetupPathEdit->setObjectName(QStringLiteral("SetupPathEdit"));

        MainLayout->addWidget(SetupPathEdit, 8, 2, 1, 1);

        label_18 = new QLabel(WgtSettingsS);
        label_18->setObjectName(QStringLiteral("label_18"));

        MainLayout->addWidget(label_18, 14, 0, 1, 1);

        line = new QFrame(WgtSettingsS);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        MainLayout->addWidget(line, 0, 2, 1, 1);

        CompanyEdit = new QLineEdit(WgtSettingsS);
        CompanyEdit->setObjectName(QStringLiteral("CompanyEdit"));

        MainLayout->addWidget(CompanyEdit, 1, 2, 1, 1);

        label_7 = new QLabel(WgtSettingsS);
        label_7->setObjectName(QStringLiteral("label_7"));

        MainLayout->addWidget(label_7, 3, 0, 1, 1);

        label_2 = new QLabel(WgtSettingsS);
        label_2->setObjectName(QStringLiteral("label_2"));

        MainLayout->addWidget(label_2, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_6 = new QLabel(WgtSettingsS);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout->addWidget(label_6);

        VersionEdit1 = new QSpinBox(WgtSettingsS);
        VersionEdit1->setObjectName(QStringLiteral("VersionEdit1"));

        horizontalLayout->addWidget(VersionEdit1);

        label_4 = new QLabel(WgtSettingsS);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout->addWidget(label_4);

        VersionEdit2 = new QSpinBox(WgtSettingsS);
        VersionEdit2->setObjectName(QStringLiteral("VersionEdit2"));

        horizontalLayout->addWidget(VersionEdit2);

        label_5 = new QLabel(WgtSettingsS);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout->addWidget(label_5);

        VersionEdit3 = new QSpinBox(WgtSettingsS);
        VersionEdit3->setObjectName(QStringLiteral("VersionEdit3"));

        horizontalLayout->addWidget(VersionEdit3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        MainLayout->addLayout(horizontalLayout, 2, 2, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        ProjectCB = new QCheckBox(WgtSettingsS);
        ProjectCB->setObjectName(QStringLiteral("ProjectCB"));

        horizontalLayout_2->addWidget(ProjectCB);

        ProjectEdit = new QLineEdit(WgtSettingsS);
        ProjectEdit->setObjectName(QStringLiteral("ProjectEdit"));

        horizontalLayout_2->addWidget(ProjectEdit);


        MainLayout->addLayout(horizontalLayout_2, 3, 2, 1, 1);

        label_17 = new QLabel(WgtSettingsS);
        label_17->setObjectName(QStringLiteral("label_17"));

        MainLayout->addWidget(label_17, 13, 0, 1, 1);

        label_3 = new QLabel(WgtSettingsS);
        label_3->setObjectName(QStringLiteral("label_3"));

        MainLayout->addWidget(label_3, 2, 0, 1, 1);

        label_10 = new QLabel(WgtSettingsS);
        label_10->setObjectName(QStringLiteral("label_10"));

        MainLayout->addWidget(label_10, 6, 0, 1, 1);

        label_15 = new QLabel(WgtSettingsS);
        label_15->setObjectName(QStringLiteral("label_15"));

        MainLayout->addWidget(label_15, 11, 0, 1, 1);

        label_9 = new QLabel(WgtSettingsS);
        label_9->setObjectName(QStringLiteral("label_9"));

        MainLayout->addWidget(label_9, 5, 0, 1, 1);

        line_2 = new QFrame(WgtSettingsS);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        MainLayout->addWidget(line_2, 9, 2, 1, 1);

        label_8 = new QLabel(WgtSettingsS);
        label_8->setObjectName(QStringLiteral("label_8"));

        MainLayout->addWidget(label_8, 4, 0, 1, 1);

        label = new QLabel(WgtSettingsS);
        label->setObjectName(QStringLiteral("label"));

        MainLayout->addWidget(label, 0, 0, 1, 1);

        label_16 = new QLabel(WgtSettingsS);
        label_16->setObjectName(QStringLiteral("label_16"));

        MainLayout->addWidget(label_16, 12, 0, 1, 1);

        label_12 = new QLabel(WgtSettingsS);
        label_12->setObjectName(QStringLiteral("label_12"));

        MainLayout->addWidget(label_12, 8, 0, 1, 1);

        LanguageLayout = new QHBoxLayout();
        LanguageLayout->setSpacing(6);
        LanguageLayout->setObjectName(QStringLiteral("LanguageLayout"));

        MainLayout->addLayout(LanguageLayout, 4, 2, 1, 1);

        label_14 = new QLabel(WgtSettingsS);
        label_14->setObjectName(QStringLiteral("label_14"));

        MainLayout->addWidget(label_14, 10, 0, 1, 1);

        label_13 = new QLabel(WgtSettingsS);
        label_13->setObjectName(QStringLiteral("label_13"));

        MainLayout->addWidget(label_13, 9, 0, 1, 1);

        label_11 = new QLabel(WgtSettingsS);
        label_11->setObjectName(QStringLiteral("label_11"));

        MainLayout->addWidget(label_11, 7, 0, 1, 1);

        label_19 = new QLabel(WgtSettingsS);
        label_19->setObjectName(QStringLiteral("label_19"));

        MainLayout->addWidget(label_19, 15, 0, 1, 1);

        PathCB = new QCheckBox(WgtSettingsS);
        PathCB->setObjectName(QStringLiteral("PathCB"));

        MainLayout->addWidget(PathCB, 14, 2, 1, 1);

        DependsCB = new QCheckBox(WgtSettingsS);
        DependsCB->setObjectName(QStringLiteral("DependsCB"));

        MainLayout->addWidget(DependsCB, 15, 2, 1, 1);


        retranslateUi(WgtSettingsS);

        QMetaObject::connectSlotsByName(WgtSettingsS);
    } // setupUi

    void retranslateUi(QWidget *WgtSettingsS)
    {
        WgtSettingsS->setWindowTitle(QApplication::translate("WgtSettingsS", "WgtSettingsS", Q_NULLPTR));
        SetupPathEdit->setPlaceholderText(QApplication::translate("WgtSettingsS", "\350\256\276\347\275\256\351\273\230\350\256\244\345\256\211\350\243\205\347\233\256\345\275\225\357\274\214\345\210\235\345\247\213\347\233\256\345\275\225: \"c:/HZLH/\"", Q_NULLPTR));
        label_18->setText(QApplication::translate("WgtSettingsS", "\347\216\257\345\242\203\345\217\230\351\207\217", Q_NULLPTR));
        CompanyEdit->setPlaceholderText(QApplication::translate("WgtSettingsS", "\345\205\254\345\217\270\345\220\215", Q_NULLPTR));
        label_7->setText(QApplication::translate("WgtSettingsS", "\351\241\271\347\233\256", Q_NULLPTR));
        label_2->setText(QApplication::translate("WgtSettingsS", "\345\205\254\345\217\270", Q_NULLPTR));
        label_6->setText(QApplication::translate("WgtSettingsS", "v", Q_NULLPTR));
        label_4->setText(QApplication::translate("WgtSettingsS", ".", Q_NULLPTR));
        label_5->setText(QApplication::translate("WgtSettingsS", ".", Q_NULLPTR));
        ProjectCB->setText(QString());
        ProjectEdit->setPlaceholderText(QApplication::translate("WgtSettingsS", "\350\256\276\347\275\256\351\241\271\347\233\256\345\220\215", Q_NULLPTR));
        label_17->setText(QApplication::translate("WgtSettingsS", "\345\206\231\346\263\250\345\206\214\350\241\250", Q_NULLPTR));
        label_3->setText(QApplication::translate("WgtSettingsS", "\347\211\210\346\234\254", Q_NULLPTR));
        label_10->setText(QApplication::translate("WgtSettingsS", "\345\277\253\346\215\267\346\226\271\345\274\217", Q_NULLPTR));
        label_15->setText(QApplication::translate("WgtSettingsS", "\345\215\270\350\275\275\345\233\276\346\240\207", Q_NULLPTR));
        label_9->setText(QApplication::translate("WgtSettingsS", "\346\272\220\346\226\207\344\273\266\345\244\271", Q_NULLPTR));
        label_8->setText(QApplication::translate("WgtSettingsS", "\350\257\255\350\250\200", Q_NULLPTR));
        label->setText(QApplication::translate("WgtSettingsS", "\345\237\272\347\241\200\351\205\215\347\275\256", Q_NULLPTR));
        label_16->setText(QApplication::translate("WgtSettingsS", "HeadBmp", Q_NULLPTR));
        label_12->setText(QApplication::translate("WgtSettingsS", "\345\256\211\350\243\205\347\233\256\345\275\225", Q_NULLPTR));
        label_14->setText(QApplication::translate("WgtSettingsS", "\345\256\211\350\243\205\345\233\276\346\240\207", Q_NULLPTR));
        label_13->setText(QApplication::translate("WgtSettingsS", "\351\253\230\347\272\247\351\205\215\347\275\256", Q_NULLPTR));
        label_11->setText(QApplication::translate("WgtSettingsS", "\350\276\223\345\207\272\346\226\207\344\273\266", Q_NULLPTR));
        label_19->setText(QApplication::translate("WgtSettingsS", "\344\276\235\350\265\226\345\214\205", Q_NULLPTR));
        PathCB->setText(QApplication::translate("WgtSettingsS", "\345\260\206\345\256\211\350\243\205\350\267\257\345\276\204\345\206\231\345\205\245\347\216\257\345\242\203\345\217\230\351\207\217", Q_NULLPTR));
        DependsCB->setText(QApplication::translate("WgtSettingsS", "\346\267\273\345\212\240\344\276\235\350\265\226\345\214\205", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class WgtSettingsS: public Ui_WgtSettingsS {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WGTSETTINGSS_H
