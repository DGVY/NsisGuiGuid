#pragma once

#include <QObject>

class WgtAdvancedCfg : public QObject
{
    Q_OBJECT

public:
    WgtAdvancedCfg(QWidget *parent);
    ~WgtAdvancedCfg();

private:
    QWidget                     *m_Parent;

    QGridLayout                 *m_Layout;

    QLabel                      *m_ICOPathLabel;
    QHBoxLayout                 *m_ICOPathLayout;
    QLineEdit                   *m_ICOPathEdit;
    QPushButton                 *m_ICOPathBrowse;

    QLabel                      *m_HeadBmpPathLabel;
    QHBoxLayout                 *m_HeadBmpPathLayout;
    QLineEdit                   *m_HeadBmpPathEdit;
    QPushButton                 *m_HeadBmpPathBrowse;

    QLabel                      *m_RegLabel;
    QGridLayout                 *m_RegLayout;
    typedef struct _RegItem
    {
        QLineEdit                   m_RegPathEdit;
        QLineEdit                   m_RegItemEdit;
        QLineEdit                   m_RegValueEdit;
        QPushButton                 m_RegRmItem;
    }RegItem;
    QMap<QString, RegItem*>     *RegItems;
    RegItem                     *m_RegTempItem;
    QPushButton                 *m_RegAddItem;

    QLabel                      *m_EPathLabel;
    QLineEdit                   *m_EPathEdit;

private:
    void InitLayout(void);
};
