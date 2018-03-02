#pragma once

#include <QtWidgets/QDialog>
#include "ui_NsisGuiGuidDlg.h"

class WgtSettingsS;
//class WgtSettingsU;
class FileSetup;
class WgtCompile;

class NsisGuiGuidDlg : public QDialog
{
    Q_OBJECT

public:
    NsisGuiGuidDlg(QWidget *parent = Q_NULLPTR);

private:
    Ui::NsisGuiGuidDlgClass         ui;

    WgtSettingsS                    *m_SettingsS;

    WgtCompile                      *m_Compile;

    // 安装包NSIS文件制作
    FileSetup                       *m_FileSetup;

    // 更新包NSIS文件制作
    //FileUpdate                      *m_FileUpdate;

private slots:
    /**
        SLOT: 选择Package类型
          true:  安装包
          false: 更新包
    */
    void slotTypeSelect(bool);

private:
    /**
        初始化布局
    */
    void InitLayout(void);
};
