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
* SLOT: �������ӡ���ť
\************************************************************************/
void WgtRegister::slotAddRegItem(void)
{
    if (m_RegAddPathEdit->text().isEmpty())
    {
        QMessageBox::critical(this, "����", "ע���·������Ϊ��", QMessageBox::Yes, QMessageBox::Yes);
    }
    else if (m_RegAddItemEdit->text().isEmpty())
    {
        QMessageBox::critical(this, "����", "ע������Ϊ��", QMessageBox::Yes, QMessageBox::Yes);
    }
    else if (m_RegAddValueEdit->text().isEmpty())
    {
        QMessageBox::critical(this, "����", "ע�����ֵ����Ϊ��", QMessageBox::Yes, QMessageBox::Yes);
    }
}

/************************************************************************\
* ��ʼ������
\************************************************************************/
void WgtRegister::InitLayout(void)
{
    m_RegLabel = new QLabel("ע���");
    RegItems = new QMap<QString, RegItem *>();

    m_RegLayout = new QGridLayout(this);

    m_RegAddPathEdit = new QLineEdit();
    m_RegAddPathEdit->setPlaceholderText("ע���·��");
    m_RegAddItemEdit = new QLineEdit();
    m_RegAddItemEdit->setPlaceholderText("ע�����");
    m_RegAddValueEdit = new QLineEdit();
    m_RegAddValueEdit->setPlaceholderText("��ֵ");

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
