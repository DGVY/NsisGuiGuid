#pragma once

#include <QObject>

class WgtTypeSelect : public QObject
{
    Q_OBJECT

public:
    WgtTypeSelect(QWidget *parent);
    ~WgtTypeSelect();

private:
    QWidget                     *m_Parent;

    QHBoxLayout                 *m_Layout;
    QRadioButton                *m_Setup;
    QRadioButton                *m_Update;

    // Package¿‡–Õ
    // Setup  -- true
    // Update -- false
    bool                        m_fType;

    private slots:
    void slotSetupClick(bool);
    void slotUpdateClick(bool);

signals:
    void sigTypeSelect(bool);

private:
    void InitLayout(void);

};
