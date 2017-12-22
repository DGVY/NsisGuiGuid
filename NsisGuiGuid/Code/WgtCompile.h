#pragma once

#include <QObject>

class WgtCompile : public QObject
{
    Q_OBJECT

public:
    WgtCompile(QWidget *parent);
    ~WgtCompile();

private:
    QWidget                     *m_Parent;

    QGridLayout                 *m_Layout;

    QPushButton                 *m_StartCompile;

    QTextBrowser                *m_Output;

    QLabel                      *m_State;

private:
    void InitLayout(void);

};
