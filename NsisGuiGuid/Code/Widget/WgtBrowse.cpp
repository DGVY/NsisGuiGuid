#include "stdafx.h"
#include "WgtBrowse.h"

WgtBrowse::WgtBrowse(QWidget *parent)
    : QWidget(parent)
{
    InitWidget();

    setFilterType(mFloder);
    setSaveOpenType(mOpen);
}

WgtBrowse::WgtBrowse(enum FilterType fType, enum SaveOpenType soType, QWidget *parent)
    : QWidget(parent)
{
    InitWidget();

    setFilterType(fType);
    setSaveOpenType(soType);
}

WgtBrowse::~WgtBrowse()
{
}

/************************************************************************\
* SLOT: ʹ��LineEdit�޸�·��
\************************************************************************/
void WgtBrowse::slotEditPath(void)
{
    QString path = m_PathEdit->text();

    // ·����ʽ��ȷ���ſɽ����޸�
    if (IsPathValid(path))
    {
        *m_Path = path;
        emit sigChangePath(this);
    }
    // ·�������󣬲����޸�
    else
    {
        m_PathEdit->setText(*m_Path);
    }
}
/************************************************************************\
* SLOT: ������������ť
\************************************************************************/
void WgtBrowse::slotOpenBrowse(void)
{
    switch (m_fType)
    {
    case WgtBrowse::mFNull:
        break;
    case WgtBrowse::mFloder:
    {
        *m_Path = QFileDialog::getExistingDirectory(
            NULL,
            "���",
            *m_Path
        );
        break;
    }
    case WgtBrowse::mExe:
    case WgtBrowse::mIco:
    case WgtBrowse::mBmp:
    {
        // ���ļ�
        if (m_soType == mOpen)
        {
            *m_Path = QFileDialog::getOpenFileName(
                nullptr,
                "���",
                *m_Path,
                *m_FilterType
            );
        } 
        // �����ļ�
        else if(m_soType == mSave)
        {
            *m_Path = QFileDialog::getSaveFileName(
                nullptr,
                "���",
                *m_Path,
                *m_FilterType
            );
        }
        break;
    }
    default:
        break;
    }

    // ·��������Ϊ�գ�����������������ʾ
    if (m_Path->isEmpty() || m_fType == mFNull)
    {
        return;
    }

    m_PathEdit->setText(*m_Path);

    emit sigChangePath(this);
}

/************************************************************************\
* ��ʼ��Widget
\************************************************************************/
void WgtBrowse::InitWidget(void)
{
    m_Layout = new QHBoxLayout(this);
    m_PathEdit = new QLineEdit(this);
    m_Layout->addWidget(m_PathEdit, 5);
    m_Browse = new QPushButton("���");
    m_Browse->setMinimumWidth(30);
    m_Layout->addWidget(m_Browse, 1);
    m_Layout->setMargin(0);

    m_FilterType = new QString();
    m_Path = new QString();
    m_FileName = new QString();
    m_FilePath = new QString();

    connect(m_Browse, SIGNAL(pressed()), this, SLOT(slotOpenBrowse()));
    connect(m_PathEdit, SIGNAL(editingFinished()), this, SLOT(slotEditPath()));
}

/************************************************************************\
* �ж�·����ʽ�Ƿ���ȷ
\************************************************************************/
bool WgtBrowse::IsPathValid(QString const & path)
{
    bool re = false;
    QFileInfo info(path);

    // �ж�·����ʽ�Ƿ���ȷ
    switch (m_fType)
    {
    case WgtBrowse::mFNull:
        break;
    case WgtBrowse::mFloder:
    {
        // �ж��ļ���·���Ƿ���ȷ
        if (info.isDir())
            re = true;
        else
            re = false;
        break;
    }
    case WgtBrowse::mExe:
    case WgtBrowse::mIco:
    case WgtBrowse::mBmp:
    {
        // �ж��ļ�·���Ƿ���ȷ
        if (info.isFile())
            re = true;
        else
            re = false;
        break;
    }
    default:
        break;
    }

    return re;
}

/************************************************************************\
* ���ô򿪵��ļ�����
\************************************************************************/
void WgtBrowse::setFilterType(enum FilterType const& type)
{
    m_fType = type;

    switch (type)
    {
    case WgtBrowse::mFNull:
        *m_FilterType = "";
        break;
    case WgtBrowse::mFloder:
        *m_FilterType = "";
        break;
    case WgtBrowse::mExe:
        *m_FilterType = "*.exe";
        break;
    case WgtBrowse::mIco:
        *m_FilterType = "*.ico";
        break;
    case WgtBrowse::mBmp:
        *m_FilterType = "*.bmp";
        break;
    default:
        break;
    }
}

void WgtBrowse::setSaveOpenType(SaveOpenType const & type)
{
    m_soType = type;
}

/************************************************************************\
* ����·��
\************************************************************************/
bool WgtBrowse::setPath(QString const & path)
{
    // �ж�·����ʽ�Ƿ���ȷ
    if (IsPathValid(path))
    {
        m_PathEdit->setText(path);
        return true;
    }
    else
    {
        return false;
    }
}

/************************************************************************\
* ��ȡ�ļ�(�ļ���)����·��
\************************************************************************/
QString const & WgtBrowse::getPath(void)
{
    return *m_Path;
}

/************************************************************************\
* ��ȡ�ļ������ļ���·��
\************************************************************************/
QString const & WgtBrowse::getFileName(void)
{
    if (m_fType == mFloder)
    {
        *m_FileName = "";
    }
    else
    {
        QFileInfo fileinfo(*m_Path);
        *m_FileName = fileinfo.fileName();
    }

    return *m_FileName;
}

/************************************************************************\
* ��ȡ�ļ���
\************************************************************************/
QString const & WgtBrowse::getFilePath(void)
{
    if (m_fType == mFloder)
    {
        *m_FileName = "";
    }
    else
    {
        QFileInfo fileinfo(*m_Path);
        *m_FilePath = fileinfo.filePath();
    }

    return *m_FilePath;
}
