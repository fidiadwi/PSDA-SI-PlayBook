#ifndef ADMINDASHBOARD_H
#define ADMINDASHBOARD_H

#include <QMainWindow>
#include <QTableWidget>
#include "bukumanager.h"

namespace Ui {
class admindashboard;
}

class admindashboard : public QMainWindow
{
    Q_OBJECT

public:
    explicit admindashboard(QWidget *parent = nullptr);
    ~admindashboard();

private slots:
    void on_btn_tambah_clicked();
    void refreshTableWidget();
    void on_btn_edit_clicked();
    void on_btn_hapus_clicked();
    void on_btn_logout_clicked();

private:
    void tampilkanDataBuku();

    Ui::admindashboard *ui;
    BukuManager *bukuManager;
};

#endif
