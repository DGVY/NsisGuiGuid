#include "stdafx.h"
#include "WgtTypeSelect.h"

WgtTypeSelect::WgtTypeSelect(QWidget *parent)
    : QObject(parent),
    m_Parent(parent)
{
    InitLayout();
    connect(m_Setup, SIGNAL(clicked(bool)), SLOT(slotSetupClick(bool)));
    connect(m_Update, SIGNAL(clicked(bool)), SLOT(slotUpdateClick(bool)));
}

WgtTypeSelect::~WgtTypeSelect()
{
}

void WgtTypeSelect::slotSetupClick(bool)
{
    m_fType = true;
    emit sigTypeSelect(m_fType);
}

void WgtTypeSelect::slotUpdateClick(bool)
{
    m_fType = false;
    emit sigTypeSelect(m_fType);
}

void WgtTypeSelect::InitLayout(void)
{
    m_Setup = new QRadioButton("安装包");
    m_Update = new QRadioButton("更新包");

    m_Layout = new QHBoxLayout(m_Parent);
    m_Layout->addWidget(m_Setup);
    m_Layout->addWidget(m_Update);
}