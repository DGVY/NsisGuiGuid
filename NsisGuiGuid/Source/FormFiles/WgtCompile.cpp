#include "stdafx.h"
#include "WgtCompile.h"

WgtCompile::WgtCompile(QWidget *parent)
    : QObject(parent),
    m_Parent(parent)
{
    InitLayout();
}

WgtCompile::~WgtCompile()
{
}

void WgtCompile::InitLayout(void)
{
    m_Layout = new QGridLayout(m_Parent);

    m_StartCompile = new QPushButton("开始编译");
    m_Layout->addWidget(m_StartCompile, 0, 0, 1, 1);

    m_StopCompile = new QPushButton("Stop编译");
    m_Layout->addWidget(m_StopCompile, 0, 1, 1, 1);

//    m_Output = new QTextBrowser(m_Parent);
//    m_Layout->addWidget(m_Output, 1, 0, 1, 2);

//    m_StateIcon = new QIcon();

    m_StateLabel = new QLabel("准备编译");
    m_Layout->addWidget(m_StateLabel, 1, 1, 1, 1);
}
