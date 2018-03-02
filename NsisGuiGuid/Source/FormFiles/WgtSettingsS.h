#pragma once

#include <QWidget>
#include "ui_WgtSettingsS.h"

class WgtBrowse;
class WgtRegister;

class WgtSettingsS : public QWidget, public Ui::WgtSettingsS
{
    Q_OBJECT

public:
    enum Language {
        mChinese,
        mEnglish
    };

    WgtSettingsS(QWidget *parent = Q_NULLPTR);
    ~WgtSettingsS();

private:
    QButtonGroup            *m_LanguageGroup;
    QRadioButton            *m_Chinese;
    QRadioButton            *m_English;

    WgtBrowse               *m_SourcePath;
    WgtBrowse               *m_ShortcutPath;
    WgtBrowse               *m_OutFile;
    WgtBrowse               *m_InIconPath;
    WgtBrowse               *m_UnIconPath;
    WgtBrowse               *m_HeadBmpPath;

    WgtRegister             *m_Register;

    enum Language           m_LanguageType;
    bool                    m_ProjectState;
    QString                 m_Version;

private slots:
    void slotProjectState(bool);
    void slotLanguage(QAbstractButton *);

private:
    void InitLayout(void);

public:
    /// 公司名
    void setCompany(QString const& name);
    QString getCompany(void);

    /// 版本
    void setVersion(QString const& version);
    QString getVersion(void);

    /// 项目
    void setProject(QString const& project);
    QString getProject(void);

    /// 语言
    void setLanguage(Language language);
    enum Language getLanguage(void);

    /// 源文件夹
    void setSourcePath(QString const& path);
    QString const& getSourcePath(void);

    /// 快捷方式
    void setShortcut(QString const& file);
    QString getShortcut(void);

    /// 输出文件
    void setOutFile(QString const& file);
    QString getOutFile(void);

    /// 安装目录
    void setSetupPath(QString const& path);
    QString getSetupPath(void);

    /// 安装图标
    void setInICO(QString const& file);
    QString getInICO(void);

    /// 卸载图标
    void setUnIco(QString const& file);
    QString getUnICO(void);

    /// HeadBmp
    void setHeadBmp(QString const& file);
    QString getHeadBmp(void);

    /// 注册表


    /// 环境变量
    void writeEPath(bool);
    bool isWriteEPath(void);

    /// 依赖包
    void setupDepends(bool);
    void isSetupDepends(void);
};
