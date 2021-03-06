#ifndef MAINWIDGET_H
#define MAINWIDGET_H
#define WINDOWSTITLE "鑫疆基业"
#include <QWidget>
#include <QApplication>
#include <QDesktopWidget>
#include <QMessageBox>
#include "cgetinfo.h"
#include "InterfaceControl.h"

namespace Ui {
class mainWidget;
}

class mainWidget : public QWidget
{
    Q_OBJECT

public:
    explicit mainWidget(QWidget *parent = nullptr);
    ~mainWidget();
    void Init();
private slots:
    void slotLognIn();
    void slotAgainPassWord();
private:
    Ui::mainWidget *ui;
    CInterfaceControl* m_cInterfaceControl;
    CGetInfo* m_cGetInfo;
};

#endif // MAINWIDGET_H
