#ifndef USERDASHBOARD_H
#define USERDASHBOARD_H

#include <QMainWindow>
#include "bukumanager.h"
#include "ui_userdashboard.h"

namespace Ui {
class userdashboard;
}

class UserDashboard : public QMainWindow
{
    Q_OBJECT

public:
    explicit UserDashboard(QWidget *parent = nullptr);
    ~UserDashboard();

public slots:
    void on_btn_cari_clicked();
    void on_btn_logout_clicked();


private slots:
    void on_btn_beli_clicked();

private:
    Ui::userdashboard *ui;
    BukuManager *bukuManager;
    void refreshTableWidget();
    void tampilkanDataBuku();
};

#endif // USERDASHBOARD_H
