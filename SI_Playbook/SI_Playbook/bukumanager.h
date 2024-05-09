#ifndef BUKUMANAGER_H
#define BUKUMANAGER_H

#include <QObject>
#include <QTableWidget>
#include <QDebug>

struct Buku {
    QString judul;
    QString pengarang;
    QString tahunTerbit;
    QString harga;
    Buku* next;
};

class BukuManager : public QObject
{
    Q_OBJECT
public:
    explicit BukuManager(QObject *parent = nullptr);
    ~BukuManager();

    void tambahBuku(const QString& judul, const QString& pengarang, const QString& tahunTerbit, const QString& harga);
    void tampilkanDataBuku(QTableWidget* tableWidget);
    void tampilkanDataBuku();
    void hapusBuku(const QString& judul);
    void tampilkanDataBukuUser(QTableWidget* tableWidget);
    void tambahBeberapaBuku();
    void perbaruiBuku(const QString& judulLama, const QString& judulBaru, const QString& pengarangBaru, const QString& tahunTerbitBaru, const QString& hargaBaru);
    void pencarianBukuUser(const QString& kataKunci, QTableWidget* tableWidget);

private:
    Buku* head;
};

#endif // BUKUMANAGER_H
