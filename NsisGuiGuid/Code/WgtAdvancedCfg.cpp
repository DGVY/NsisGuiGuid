#include "stdafx.h"
#include "WgtAdvancedCfg.h"

WgtAdvancedCfg::WgtAdvancedCfg(QWidget *parent)
    : QObject(parent),
    m_Parent(parent)
{
    InitLayout();
}

WgtAdvancedCfg::~WgtAdvancedCfg()
{
}

void WgtAdvancedCfg::InitLayout(void)
{
    int row = 0;        // �м���

    m_Layout = new QGridLayout(m_Parent);

    m_ICOPathLabel = new QLabel("ICO");
    m_ICOPathLayout = new QHBoxLayout();
    m_ICOPathEdit = new QLineEdit();
    m_ICOPathBrowse = new QPushButton("���");
    m_ICOPathLayout->addWidget(m_ICOPathEdit);
    m_ICOPathLayout->addWidget(m_ICOPathBrowse);
    m_Layout->addWidget(m_ICOPathLabel, row, 0);
    m_Layout->addLayout(m_ICOPathLayout, row++, 1);

    m_HeadBmpPathLabel = new QLabel("HeadBmp");
    m_HeadBmpPathLayout = new QHBoxLayout();
    m_HeadBmpPathEdit = new QLineEdit();
    m_HeadBmpPathBrowse = new QPushButton("���");
    m_HeadBmpPathLayout->addWidget(m_HeadBmpPathEdit);
    m_HeadBmpPathLayout->addWidget(m_HeadBmpPathBrowse);
    m_Layout->addWidget(m_HeadBmpPathLabel, row, 0);
    m_Layout->addLayout(m_HeadBmpPathLayout, row++, 1);

    m_RegLabel = new QLabel("ע���");
    RegItems = new QMap<QString, RegItem *>();
    m_RegLayout = new QGridLayout();
    m_RegTempItem = new RegItem();
    m_RegTempItem->m_RegPathEdit.setPlaceholderText("ע���·��");
    m_RegTempItem->m_RegItemEdit.setPlaceholderText("ע�����");
    m_RegTempItem->m_RegValueEdit.setPlaceholderText("��ֵ");
    m_RegTempItem->m_RegRmItem.setText("-");
    m_RegAddItem = new QPushButton("+");
    m_RegAddItem->setMinimumWidth(30);
    m_RegLayout->addWidget(&m_RegTempItem->m_RegPathEdit, 0, 0);
    m_RegLayout->setColumnStretch(0, 4);
    m_RegLayout->addWidget(&m_RegTempItem->m_RegItemEdit, 0, 1);
    m_RegLayout->setColumnStretch(1, 4);
    m_RegLayout->addWidget(&m_RegTempItem->m_RegValueEdit, 0, 2);
    m_RegLayout->setColumnStretch(2, 4);
    m_RegLayout->addWidget(m_RegAddItem, 0, 3);
    m_RegLayout->setColumnStretch(3, 1);
    m_Layout->addWidget(m_RegLabel, row, 0);
    m_Layout->addLayout(m_RegLayout, row++, 1);

    m_EPathLabel = new QLabel("��������");
    m_EPathEdit = new QLineEdit();
    m_EPathEdit->setPlaceholderText("��ͬ�Ļ�������֮����\";\"�ָ�");
    m_Layout->addWidget(m_EPathLabel, row, 0);
    m_Layout->addWidget(m_EPathEdit, row++, 1);
}

