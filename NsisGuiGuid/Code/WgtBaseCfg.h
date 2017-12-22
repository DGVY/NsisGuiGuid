#pragma once

#include <QObject>

class WgtBaseCfg : public QObject
{
    Q_OBJECT

public:
    WgtBaseCfg(QWidget *parent);
    ~WgtBaseCfg();

private:
    QWidget                     *m_Parent;

    QGridLayout                 *m_Layout;

    QLabel                      *m_CompanyLabel;
    QLineEdit                   *m_CompanyEdit;

    QLabel                      *m_VersionLabel;
    QLineEdit                   *m_VersionEdit;

    QLabel                      *m_ProjectLabel;
    QCheckBox                   *m_ProjectCB;
    QLineEdit                   *m_ProjectEdit;
    QHBoxLayout                 *m_ProjectLayout;

    QLabel                      *m_LanguageLabel;
    QRadioButton                *m_Chinese;
    QRadioButton                *m_English;
    QHBoxLayout                 *m_LanguageLayout;
    bool                        m_bLanguage;

    QLabel                      *m_SrcPathLabel;
    QLineEdit                   *m_SrcPathEdit;
    QPushButton                 *m_SrcPathBrowse;
    QHBoxLayout                 *m_SrcPathLayout;

    QLabel                      *m_ShortcutLabel;
    QLineEdit                   *m_ShortcutEdit;
    QPushButton                 *m_ShortcutBrowse;
    QHBoxLayout                 *m_ShortcutLayout;

    QLabel                      *m_OutNameLabel;
    QLineEdit                   *m_OutNameEdit;
    QLabel                      *m_OutExeLabel;
    QHBoxLayout                 *m_OutLayout;

    QLabel                      *m_SetupPathLabel;
    QLineEdit                   *m_SetupPathEdit;

signals:
    void sig();

private:
    void InitLayout(void);
};
