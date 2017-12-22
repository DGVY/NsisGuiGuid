#pragma once

#include <QWidget>
#include "ui_WgtSettingsS.h"

class WgtBrowse;

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

    enum Language           m_LanguageType;
    bool                    m_ProjectState;
    QString                 m_Version;

private slots:
    void slotProjectState(bool);
    void slotLanguage(QAbstractButton *);

private:
    void InitLayout(void);

public:
    /// ��˾��
    void setCompany(QString const& name);
    QString getCompany(void);

    /// �汾
    void setVersion(QString const& version);
    QString getVersion(void);

    /// ��Ŀ
    void setProject(QString const& project);
    QString getProject(void);

    /// ����
    void setLanguage(Language language);
    enum Language getLanguage(void);

    /// Դ�ļ���
    void setSourcePath(QString const& path);
    QString const& getSourcePath(void);

    /// ��ݷ�ʽ
    void setShortcut(QString const& file);
    QString getShortcut(void);

    /// ����ļ�
    void setOutFile(QString const& file);
    QString getOutFile(void);

    /// ��װĿ¼
    void setSetupPath(QString const& path);
    QString getSetupPath(void);

    /// ��װͼ��
    void setInICO(QString const& file);
    QString getInICO(void);

    /// ж��ͼ��
    void setUnIco(QString const& file);
    QString getUnICO(void);

    /// HeadBmp
    void setHeadBmp(QString const& file);
    QString getHeadBmp(void);

    /// ע���


    /// ��������
    void writeEPath(bool);
    bool isWriteEPath(void);

    /// ������
    void setupDepends(bool);
    void isSetupDepends(void);
};
