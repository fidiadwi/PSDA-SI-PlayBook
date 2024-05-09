#ifndef TAMBAHBUKU_H
#define TAMBAHBUKU_H

#include <QDialog>
#include "bukumanager.h"

namespace Ui {
class tambahbuku;
}

class tambahbuku : public QDialog
{
    Q_OBJECT

public:
    explicit tambahbuku(BukuManager *bukuManager, QWidget *parent = nullptr);
    ~tambahbuku();

private slots:
    void tambahBuku();

signals:
    void dialogClosed();

private:
    Ui::tambahbuku *ui;
    BukuManager *bukuManager;
};

#endif // TAMBAHBUKU_H
