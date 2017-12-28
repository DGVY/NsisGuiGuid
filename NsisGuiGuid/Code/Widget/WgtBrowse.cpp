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
* SLOT: 使用LineEdit修改路径
\************************************************************************/
void WgtBrowse::slotEditPath(void)
{
    QString path = m_PathEdit->text();

    // 路径格式正确，才可进行修改
    if (IsPathValid(path))
    {
        *m_Path = path;
        emit sigChangePath(this);
    }
    // 路径有有误，不能修改
    else
    {
        m_PathEdit->setText(*m_Path);
    }
}
/************************************************************************\
* SLOT: 点击“浏览”按钮
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
            "浏览",
            *m_Path
        );
        break;
    }
    case WgtBrowse::mExe:
    case WgtBrowse::mIco:
    case WgtBrowse::mBmp:
    {
        // 打开文件
        if (m_soType == mOpen)
        {
            *m_Path = QFileDialog::getOpenFileName(
                nullptr,
                "浏览",
                *m_Path,
                *m_FilterType
            );
        } 
        // 保存文件
        else if(m_soType == mSave)
        {
            *m_Path = QFileDialog::getSaveFileName(
                nullptr,
                "浏览",
                *m_Path,
                *m_FilterType
            );
        }
        break;
    }
    default:
        break;
    }

    // 路径或类型为空，不符合条件，不显示
    if (m_Path->isEmpty() || m_fType == mFNull)
    {
        return;
    }

    m_PathEdit->setText(*m_Path);

    emit sigChangePath(this);
}

/************************************************************************\
* 初始化Widget
\************************************************************************/
void WgtBrowse::InitWidget(void)
{
    m_Layout = new QHBoxLayout(this);
    m_PathEdit = new QLineEdit(this);
    m_Layout->addWidget(m_PathEdit, 5);
    m_Browse = new QPushButton("浏览");
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
* 判断路径格式是否正确
\************************************************************************/
bool WgtBrowse::IsPathValid(QString const & path)
{
    bool re = false;
    QFileInfo info(path);

    // 判断路径格式是否正确
    switch (m_fType)
    {
    case WgtBrowse::mFNull:
        break;
    case WgtBrowse::mFloder:
    {
        // 判断文件夹路径是否正确
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
        // 判断文件路径是否正确
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
* 设置打开的文件类型
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
* 设置路径
\************************************************************************/
bool WgtBrowse::setPath(QString const & path)
{
    // 判断路径格式是否正确
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
* 获取文件(文件夹)完整路径
\************************************************************************/
QString const & WgtBrowse::getPath(void)
{
    return *m_Path;
}

/************************************************************************\
* 获取文件所在文件夹路径
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
* 获取文件名
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
