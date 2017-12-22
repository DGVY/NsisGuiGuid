#include "stdafx.h"
#include "NsisGuiGuidDlg.h"
#include "WgtSettingsS.h"
#include "FileSetup.h"

NsisGuiGuidDlg::NsisGuiGuidDlg(QWidget *parent)
    : QDialog(parent)
{
    ui.setupUi(this);
    this->setWindowTitle("NSIS 安装包&更新包 快速制作向导");
    this->setWindowIcon(QIcon("F:\\QT\\NsisGuiGuid\\NsisGuiGuid\\Resources\\install.ico"));

    InitLayout();

}

/************************************************************************\
* SLOT: 选择Package类型
*   true:  安装包
*   false: 更新包
\************************************************************************/
void NsisGuiGuidDlg::slotTypeSelect(bool type)
{

}

/************************************************************************\
* 初始化布局
\************************************************************************/
void NsisGuiGuidDlg::InitLayout(void)
{
    m_SettingsS = new WgtSettingsS(this);
    QIcon iconS(":/NsisGuiGuidDlg/install.ico");
    ui.SettingsWidget->addTab(m_SettingsS, iconS, "安装包");
    ui.SettingsWidget->setTabIcon(1, iconS);

    QIcon iconU(":/NsisGuiGuidDlg/update.ico");
    ui.SettingsWidget->addTab(new QWidget(this), iconU, "更新包");

}
