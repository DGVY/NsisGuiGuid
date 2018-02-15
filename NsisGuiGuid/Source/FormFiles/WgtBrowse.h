#pragma once

#include <QWidget>

class WgtBrowse : public QWidget
{
    Q_OBJECT

public:
    // 文件类型
    enum FilterType {
        mFNull = 1,
        mFloder,
        mExe,
        mIco,
        mBmp
    };

    // 保存or打开
    enum SaveOpenType {
        mSNull = 1,
        mSave,
        mOpen
    };

    WgtBrowse(QWidget *parent);
    WgtBrowse(enum FilterType fType, enum SaveOpenType soType, QWidget *parent);
    ~WgtBrowse();

private:
    QHBoxLayout                 *m_Layout;

    QLineEdit                   *m_PathEdit;

    QPushButton                 *m_Browse;

    enum FilterType             m_fType;
    QString                     *m_FilterType;

    QString                     *m_Path;
    QString                     *m_FileName;
    QString                     *m_FilePath;

    enum SaveOpenType           m_soType;

private slots:
    void slotEditPath(void);
    void slotOpenBrowse(void);

signals:
    void sigChangePath(WgtBrowse *);

private:
    void InitWidget(void);
    bool IsPathValid(QString const& path);
    
public:
    void setFilterType(enum FilterType const& type);
    void setSaveOpenType(enum SaveOpenType const& type);

    bool setPath(QString const& path);

    QString const& getPath(void);
    QString const& getFileName(void);
    QString const& getFilePath(void);

};
