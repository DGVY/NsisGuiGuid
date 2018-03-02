#pragma once

//#include <QObject>
class QObject;

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

    QPushButton                 *m_StopCompile;

    QIcon                       *m_StateIcon;

//    QTextBrowser                *m_Output;

    QLabel                      *m_StateLabel;

private:
    void InitLayout(void);

};
