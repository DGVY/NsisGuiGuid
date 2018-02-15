#pragma once

class QString;

class FileSetup
{
public:
    FileSetup();
    ~FileSetup();

private:
    struct ConfigItem
    {
        QString     *m_Define;
        QString     *m_Value;
    };

    QMap<QString, struct ConfigItem> *ConfigItems;

    // 公司名
    QString                 *m_CompanyDef;
    QString                 *m_Company;
          
    // 版本
    QString                 *m_VersionDef;
    QString                 *m_Version;
          
    // 项目名
    QString                 *m_ProjectDef;
    QString                 *m_Project;
          
    // 语言
    QString                 *m_LanguageDef;
    QString                 *m_Language;
          
    // 源文件夹
    QString                 *m_SourceFloderDef;
    QString                 *m_SourceFloder;
          
    // 快捷方式
    QString                 *m_ShortcutDef;
    QString                 *m_Shortcutr;
          
    // 输出文件
    QString                 *m_OutNameDef;
    QString                 *m_OutName;
          
    // 默认安装目录
    QString                 *m_SetupPathDef;
    QString                 *m_SetupPath;
          
    // ICO目录
    QString                 *m_ICODef;
    QString                 *m_ICO;
          
    // HeadBmp目录
    QString                 *m_HeadBmpDef;
    QString                 *m_HeadBmp;
          
    // 注册表
    QString                 *m_RegDef;
    QString                 *m_Reg;
          
    // 环境变量
    QString                 *m_PathDef;
    QString                 *m_Path;
          
    // 其他
    QString                 *m_Other;


private:
    void ReadParam(void);
};