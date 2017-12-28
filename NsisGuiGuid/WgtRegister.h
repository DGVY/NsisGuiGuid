#pragma once

#include <QWidget>

class WgtRegister : public QWidget
{
    Q_OBJECT

public:
    WgtRegister(QWidget *parent);
    ~WgtRegister();

private:
    QLabel                      *m_RegLabel;

    QGridLayout                 *m_RegLayout;

    typedef struct _RegItem
    {
        QLineEdit                   *m_RegPathEdit;
        QLineEdit                   *m_RegItemEdit;
        QLineEdit                   *m_RegValueEdit;
        QPushButton                 *m_RegRmItem;
    }RegItem;

    QMap<QString, RegItem*>     *RegItems;

    QLineEdit                   *m_RegAddPathEdit;
    QLineEdit                   *m_RegAddItemEdit;
    QLineEdit                   *m_RegAddValueEdit;
    QPushButton                 *m_RegAddItem;

private slots:
    void slotAddRegItem(void);

private:
    void InitLayout(void);
};
