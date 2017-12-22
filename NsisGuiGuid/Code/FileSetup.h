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

    // ��˾��
    QString                 *m_CompanyDef;
    QString                 *m_Company;
          
    // �汾
    QString                 *m_VersionDef;
    QString                 *m_Version;
          
    // ��Ŀ��
    QString                 *m_ProjectDef;
    QString                 *m_Project;
          
    // ����
    QString                 *m_LanguageDef;
    QString                 *m_Language;
          
    // Դ�ļ���
    QString                 *m_SourceFloderDef;
    QString                 *m_SourceFloder;
          
    // ��ݷ�ʽ
    QString                 *m_ShortcutDef;
    QString                 *m_Shortcutr;
          
    // ����ļ�
    QString                 *m_OutNameDef;
    QString                 *m_OutName;
          
    // Ĭ�ϰ�װĿ¼
    QString                 *m_SetupPathDef;
    QString                 *m_SetupPath;
          
    // ICOĿ¼
    QString                 *m_ICODef;
    QString                 *m_ICO;
          
    // HeadBmpĿ¼
    QString                 *m_HeadBmpDef;
    QString                 *m_HeadBmp;
          
    // ע���
    QString                 *m_RegDef;
    QString                 *m_Reg;
          
    // ��������
    QString                 *m_PathDef;
    QString                 *m_Path;
          
    // ����
    QString                 *m_Other;


private:
    void ReadParam(void);
};