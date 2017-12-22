#include "stdafx.h"
#include "WgtBaseCfg.h"

WgtBaseCfg::WgtBaseCfg(QWidget *parent)
    : QObject(parent),
    m_Parent(parent)
{
    InitLayout();
}

WgtBaseCfg::~WgtBaseCfg()
{
}

/************************************************************************\
* ��ʼ������
\************************************************************************/
void WgtBaseCfg::InitLayout(void)
{
    int row = 0;        // �м���

    m_Layout = new QGridLayout(m_Parent);

    m_CompanyLabel = new QLabel("��˾");
    m_CompanyEdit = new QLineEdit();
    m_Layout->addWidget(m_CompanyLabel, row, 0);
    m_Layout->addWidget(m_CompanyEdit, row++, 1);

    m_VersionLabel = new QLabel("�汾");
    m_VersionEdit = new QLineEdit();
    m_Layout->addWidget(m_VersionLabel, row, 0);
    m_Layout->addWidget(m_VersionEdit, row++, 1);

    m_ProjectLabel = new QLabel("��Ŀ");
    m_ProjectLayout = new QHBoxLayout();
    m_ProjectCB = new QCheckBox();
    m_ProjectEdit = new QLineEdit();
    m_ProjectLayout->addWidget(m_ProjectCB);
    m_ProjectLayout->addWidget(m_ProjectEdit);
    m_Layout->addWidget(m_ProjectLabel, row, 0);
    m_Layout->addLayout(m_ProjectLayout, row++, 1);

    m_LanguageLabel = new QLabel("����");
    m_LanguageLayout = new QHBoxLayout();
    m_Chinese = new QRadioButton("����", m_Parent);
    m_English = new QRadioButton("English", m_Parent);
    m_LanguageLayout->addWidget(m_Chinese);
    m_LanguageLayout->addWidget(m_English);
    m_Layout->addWidget(m_LanguageLabel, row, 0);
    m_Layout->addLayout(m_LanguageLayout, row++, 1);
    m_bLanguage = true;
    m_Chinese->setChecked(true);

    m_SrcPathLabel = new QLabel("Դ�ļ���");
    m_SrcPathLayout = new QHBoxLayout();
    m_SrcPathEdit = new QLineEdit();
    m_SrcPathBrowse = new QPushButton("���");
    m_SrcPathLayout->addWidget(m_SrcPathEdit);
    m_SrcPathLayout->addWidget(m_SrcPathBrowse);
    m_Layout->addWidget(m_SrcPathLabel, row, 0);
    m_Layout->addLayout(m_SrcPathLayout, row++, 1);

    m_ShortcutLabel = new QLabel("��ݷ�ʽ");
    m_ShortcutLayout = new QHBoxLayout();
    m_ShortcutEdit = new QLineEdit();
    m_ShortcutBrowse = new QPushButton("���");
    m_ShortcutLayout->addWidget(m_ShortcutEdit);
    m_ShortcutLayout->addWidget(m_ShortcutBrowse);
    m_Layout->addWidget(m_ShortcutLabel, row, 0);
    m_Layout->addLayout(m_ShortcutLayout, row++, 1);

    m_OutNameLabel = new QLabel("����ļ�");
    m_OutLayout = new QHBoxLayout();
    m_OutNameEdit = new QLineEdit();
    m_OutExeLabel = new QLabel(".exe");
    m_OutLayout->addWidget(m_OutNameEdit);
    m_OutLayout->addWidget(m_OutExeLabel);
    m_Layout->addWidget(m_OutNameLabel, row, 0);
    m_Layout->addLayout(m_OutLayout, row++, 1);

    m_SetupPathLabel = new QLabel("��װĿ¼");
    m_SetupPathEdit = new QLineEdit();
    m_Layout->addWidget(m_SetupPathLabel, row, 0);
    m_Layout->addWidget(m_SetupPathEdit, row++, 1);
}
