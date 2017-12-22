#include "stdafx.h"
#include "WgtSettingsS.h"
#include "WgtBrowse.h"

WgtSettingsS::WgtSettingsS(QWidget *parent)
    : QWidget(parent)
{
    setupUi(this);
    InitLayout();

    m_Chinese->setChecked(true);
    m_LanguageType = WgtSettingsS::mChinese;

    connect(m_LanguageGroup,
        SIGNAL(buttonToggled(QAbstractButton *, bool)), 
        SLOT(slotLanguage(QAbstractButton *)));
    connect(ProjectCB,
        SIGNAL(clicked(bool)),
        SLOT(slotProjectState(bool)));
}

WgtSettingsS::~WgtSettingsS()
{
}

/************************************************************************\
* SLTO: �Ƿ������Ŀ
\************************************************************************/
void WgtSettingsS::slotProjectState(bool b)
{
    if (b)
    {
        // ʹ����Ŀ���ÿ�
        ProjectEdit->setEnabled(false);
    }
    else
    {
        // ʧ����Ŀ���ÿ�
        ProjectEdit->setEnabled(false);
    }

    m_ProjectState = b;

}

/************************************************************************\
* SLTO: ѡ������
\************************************************************************/
void WgtSettingsS::slotLanguage(QAbstractButton * b)
{
    // ��ֹ��������
    if (b != m_Chinese)
    {
        return;
    }

    // ��������
    if (m_Chinese->isChecked() == true)
    {
        m_LanguageType = WgtSettingsS::mChinese;
    }
    else
    {
        m_LanguageType = WgtSettingsS::mEnglish;
    }
}

/************************************************************************\
* ��ʼ������
\************************************************************************/
void WgtSettingsS::InitLayout(void)
{
    m_LanguageGroup = new QButtonGroup(this);
    m_Chinese = new QRadioButton("����");
    m_English = new QRadioButton("English");
    m_LanguageGroup->addButton(m_Chinese);
    m_LanguageGroup->addButton(m_English);
    LanguageLayout->addWidget(m_Chinese);
    LanguageLayout->addWidget(m_English);

    m_SourcePath   = new WgtBrowse(WgtBrowse::mFloder, WgtBrowse::mOpen, this);
    m_ShortcutPath = new WgtBrowse(WgtBrowse::mExe,    WgtBrowse::mOpen, this);
    m_OutFile      = new WgtBrowse(WgtBrowse::mExe,    WgtBrowse::mSave, this);
    m_InIconPath   = new WgtBrowse(WgtBrowse::mIco,    WgtBrowse::mOpen, this);
    m_UnIconPath   = new WgtBrowse(WgtBrowse::mIco,    WgtBrowse::mOpen, this);
    m_HeadBmpPath  = new WgtBrowse(WgtBrowse::mBmp,    WgtBrowse::mOpen, this);

    MainLayout->addWidget(m_SourcePath, 5, 2, 1, 1);
    MainLayout->addWidget(m_ShortcutPath, 6, 2, 1, 1);
    MainLayout->addWidget(m_OutFile, 7, 2, 1, 1);
    MainLayout->addWidget(m_InIconPath, 10, 2, 1, 1);
    MainLayout->addWidget(m_UnIconPath, 11, 2, 1, 1);
    MainLayout->addWidget(m_HeadBmpPath, 12, 2, 1, 1);
}

/************************************************************************\
* ��˾��
\************************************************************************/
void WgtSettingsS::setCompany(QString const & name)
{
    CompanyEdit->setText(name);
}
QString WgtSettingsS::getCompany(void)
{
    return CompanyEdit->text();
}

/************************************************************************\
* �汾��
\************************************************************************/
void WgtSettingsS::setVersion(QString const & version)
{
    // ���汾���ַ���
    int dot1 = version.indexOf(".", 0);
    int dot2 = version.indexOf(".", dot1+1);
    QString version1 = version.mid(1, dot1);
    QString version2 = version.mid(dot1 + 1, dot2 - dot1 - 1);
    QString version3 = version.mid(dot2 + 1);

    // ��ʾ
    VersionEdit1->setValue(version1.toInt());
    VersionEdit2->setValue(version2.toInt());
    VersionEdit3->setValue(version3.toInt());
}
QString WgtSettingsS::getVersion(void)
{
    int version1 = VersionEdit1->value();
    int version2 = VersionEdit2->value();
    int version3 = VersionEdit3->value();

    return "v" + QString::number(version1) 
        + "." + QString::number(version2) 
        + "." + QString::number(version3);
}

/************************************************************************\
* ��Ŀ
\************************************************************************/
void WgtSettingsS::setProject(QString const & project)
{
    ProjectCB->setEnabled(true);
    ProjectEdit->setText(project);
}
QString WgtSettingsS::getProject(void)
{
    return ProjectEdit->text();
}

/************************************************************************\
* ����
\************************************************************************/
void WgtSettingsS::setLanguage(Language language)
{
    m_LanguageType = language;
    
    if (language == mChinese)
    {
        m_Chinese->setChecked(true);
    } 
    else if(language == mEnglish)
    {
        m_English->setChecked(true);
    }
}
WgtSettingsS::Language WgtSettingsS::getLanguage(void)
{
    return m_LanguageType;
}

/************************************************************************\
* Դ�ļ���
\************************************************************************/
void WgtSettingsS::setSourcePath(QString const & path)
{
    m_SourcePath->setPath(path);
}
QString const& WgtSettingsS::getSourcePath(void)
{
    return m_SourcePath->getPath();
}

/************************************************************************\
* ��ݷ�ʽ
\************************************************************************/
void WgtSettingsS::setShortcut(QString const & file)
{
    m_ShortcutPath->setPath(file);
}
QString WgtSettingsS::getShortcut(void)
{
    QString path = m_ShortcutPath->getPath();

    QFileInfo file(path);

    file.exists();
    
    return path;
}

/************************************************************************\
* ����ļ�
\************************************************************************/
void WgtSettingsS::setOutFile(QString const & file)
{
}

QString WgtSettingsS::getOutFile(void)
{
    return QString();
}

void WgtSettingsS::setSetupPath(QString const & path)
{
}

QString WgtSettingsS::getSetupPath(void)
{
    return QString();
}

void WgtSettingsS::setInICO(QString const & file)
{
}

QString WgtSettingsS::getInICO(void)
{
    return QString();
}

void WgtSettingsS::setUnIco(QString const & file)
{
}

QString WgtSettingsS::getUnICO(void)
{
    return QString();
}

void WgtSettingsS::setHeadBmp(QString const & file)
{
}

QString WgtSettingsS::getHeadBmp(void)
{
    return QString();
}

void WgtSettingsS::writeEPath(bool)
{
}

bool WgtSettingsS::isWriteEPath(void)
{
    return false;
}

void WgtSettingsS::setupDepends(bool)
{
}

void WgtSettingsS::isSetupDepends(void)
{
}
