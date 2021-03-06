#ifndef DEVMENU_H
#define DEVMENU_H

#include <QDialog>
#include "adddefect.h"
#include "defecttracker.h"

namespace Ui {
class devMenu;
}

class devMenu : public QDialog
{
    Q_OBJECT

public:
    explicit devMenu(QWidget *parent = nullptr);
    ~devMenu();

private slots:
    void on_viewDefBtn_clicked();
    void on_reportDefBtn_clicked();
    void on_logOutBtn_clicked();

private:
    Ui::devMenu *ui;
    addDefect *window3;
    defectTracker *window4;
};

#endif // DEVMENU_H
