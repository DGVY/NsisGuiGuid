#include "stdafx.h"
#include "WgtRegister.h"

WgtRegister::WgtRegister(QWidget *parent)
    : QWidget(parent)
{
    InitLayout();

    connect(m_RegAddItem, SIGNAL(pressed()), SLOT(slotAddRegItem()));
}

WgtRegister::~WgtRegister()
{
}

/************************************************************************\
* SLOT: 点击“添加”按钮
\************************************************************************/
void WgtRegister::slotAddRegItem(void)
{
    if (m_RegAddPathEdit->text().isEmpty())
    {
        QMessageBox::critical(this, "错误", "注册表路径不能为空", QMessageBox::Yes, QMessageBox::Yes);
    }
    else if (m_RegAddItemEdit->text().isEmpty())
    {
        QMessageBox::critical(this, "错误", "注册表项不能为空", QMessageBox::Yes, QMessageBox::Yes);
    }
    else if (m_RegAddValueEdit->text().isEmpty())
    {
        QMessageBox::critical(this, "错误", "注册表项值不能为空", QMessageBox::Yes, QMessageBox::Yes);
    }
}

/************************************************************************\
* 初始化布局
\************************************************************************/
void WgtRegister::InitLayout(void)
{
    m_RegLabel = new QLabel("注册表");
    RegItems = new QMap<QString, RegItem *>();

    m_RegLayout = new QGridLayout(this);

    m_RegAddPathEdit = new QLineEdit();
    m_RegAddPathEdit->setPlaceholderText("注册表路径");
    m_RegAddItemEdit = new QLineEdit();
    m_RegAddItemEdit->setPlaceholderText("注册表项");
    m_RegAddValueEdit = new QLineEdit();
    m_RegAddValueEdit->setPlaceholderText("项值");

    m_RegAddItem = new QPushButton("+");
    m_RegAddItem->setMinimumWidth(30);

    m_RegLayout->addWidget(m_RegAddPathEdit, 0, 0);
    m_RegLayout->addWidget(m_RegAddItemEdit, 0, 1);
    m_RegLayout->addWidget(m_RegAddValueEdit, 0, 2);
    m_RegLayout->addWidget(m_RegAddItem, 0, 3);

    m_RegLayout->setColumnStretch(0, 4);
    m_RegLayout->setColumnStretch(1, 4);
    m_RegLayout->setColumnStretch(2, 4);
    m_RegLayout->setColumnStretch(3, 1);

    m_RegLayout->setMargin(0);
}
