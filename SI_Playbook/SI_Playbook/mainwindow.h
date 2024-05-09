#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "admindashboard.h"
#include "userdashboard.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btn_login_clicked();

private:
    Ui::MainWindow *ui;

    struct User {
        QString username;
        QString password;
    };

    User users[4];
    admindashboard *adminDashboard = nullptr;
    UserDashboard *userDashboard = nullptr;

};

#endif
