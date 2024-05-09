/********************************************************************************
** Form generated from reading UI file 'tambahbuku.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAMBAHBUKU_H
#define UI_TAMBAHBUKU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_tambahbuku
{
public:
    QPushButton *btn_tambahbuku;
    QLineEdit *tf_tahun;
    QLabel *label;
    QLineEdit *tf_harga;
    QLineEdit *tf_judul;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_2;
    QLineEdit *tf_pengarang;

    void setupUi(QDialog *tambahbuku)
    {
        if (tambahbuku->objectName().isEmpty())
            tambahbuku->setObjectName("tambahbuku");
        tambahbuku->resize(400, 300);
        btn_tambahbuku = new QPushButton(tambahbuku);
        btn_tambahbuku->setObjectName("btn_tambahbuku");
        btn_tambahbuku->setGeometry(QRect(170, 240, 83, 29));
        tf_tahun = new QLineEdit(tambahbuku);
        tf_tahun->setObjectName("tf_tahun");
        tf_tahun->setGeometry(QRect(170, 130, 161, 28));
        label = new QLabel(tambahbuku);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 50, 63, 20));
        tf_harga = new QLineEdit(tambahbuku);
        tf_harga->setObjectName("tf_harga");
        tf_harga->setGeometry(QRect(170, 170, 161, 28));
        tf_judul = new QLineEdit(tambahbuku);
        tf_judul->setObjectName("tf_judul");
        tf_judul->setGeometry(QRect(170, 50, 161, 28));
        label_3 = new QLabel(tambahbuku);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(70, 130, 101, 20));
        label_4 = new QLabel(tambahbuku);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(70, 170, 101, 20));
        label_2 = new QLabel(tambahbuku);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(70, 90, 101, 20));
        tf_pengarang = new QLineEdit(tambahbuku);
        tf_pengarang->setObjectName("tf_pengarang");
        tf_pengarang->setGeometry(QRect(170, 90, 161, 28));

        retranslateUi(tambahbuku);
        QObject::connect(btn_tambahbuku, SIGNAL(clicked()), tambahbuku, SLOT(tambahBuku()));

        QMetaObject::connectSlotsByName(tambahbuku);
    } // setupUi

    void retranslateUi(QDialog *tambahbuku)
    {
        tambahbuku->setWindowTitle(QCoreApplication::translate("tambahbuku", "Dialog", nullptr));
        btn_tambahbuku->setText(QCoreApplication::translate("tambahbuku", "Tambah", nullptr));
        label->setText(QCoreApplication::translate("tambahbuku", "Judul", nullptr));
        label_3->setText(QCoreApplication::translate("tambahbuku", "Tahun Terbit", nullptr));
        label_4->setText(QCoreApplication::translate("tambahbuku", "Harga", nullptr));
        label_2->setText(QCoreApplication::translate("tambahbuku", "Pengarang", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tambahbuku: public Ui_tambahbuku {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAMBAHBUKU_H
