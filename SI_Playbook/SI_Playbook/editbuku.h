#ifndef EDITBUKU_H
#define EDITBUKU_H

#include <QDialog>
#include "bukumanager.h"

namespace Ui {
class editbuku;
}

class editbuku : public QDialog
{
    Q_OBJECT

public:
    explicit editbuku(BukuManager *bukuManager, const QString &judulLama, QWidget *parent = nullptr);
    ~editbuku();

    void setJudul(const QString &judul);
    void setPengarang(const QString &pengarang);
    void setTahunTerbit(const QString &tahunTerbit);
    void setHarga(const QString &harga);

signals:
    void dialogClosed();

private slots:
    void editBuku();

private:
    Ui::editbuku *ui;
    BukuManager *bukuManager;
    QString judulLama;
};

#endif // EDITBUKU_H
