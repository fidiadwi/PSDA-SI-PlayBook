/********************************************************************************
** Form generated from reading UI file 'editbuku.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITBUKU_H
#define UI_EDITBUKU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_editbuku
{
public:
    QLineEdit *tf_pengarang;
    QLineEdit *tf_tahun;
    QPushButton *btn_edit;
    QLineEdit *tf_judul;
    QLabel *label_3;
    QLineEdit *tf_harga;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_2;

    void setupUi(QDialog *editbuku)
    {
        if (editbuku->objectName().isEmpty())
            editbuku->setObjectName("editbuku");
        editbuku->resize(400, 300);
        tf_pengarang = new QLineEdit(editbuku);
        tf_pengarang->setObjectName("tf_pengarang");
        tf_pengarang->setGeometry(QRect(170, 80, 161, 28));
        tf_tahun = new QLineEdit(editbuku);
        tf_tahun->setObjectName("tf_tahun");
        tf_tahun->setGeometry(QRect(170, 120, 161, 28));
        btn_edit = new QPushButton(editbuku);
        btn_edit->setObjectName("btn_edit");
        btn_edit->setGeometry(QRect(170, 230, 83, 29));
        tf_judul = new QLineEdit(editbuku);
        tf_judul->setObjectName("tf_judul");
        tf_judul->setGeometry(QRect(170, 40, 161, 28));
        label_3 = new QLabel(editbuku);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(70, 120, 101, 20));
        tf_harga = new QLineEdit(editbuku);
        tf_harga->setObjectName("tf_harga");
        tf_harga->setGeometry(QRect(170, 160, 161, 28));
        label = new QLabel(editbuku);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 40, 63, 20));
        label_4 = new QLabel(editbuku);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(70, 160, 101, 20));
        label_2 = new QLabel(editbuku);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(70, 80, 101, 20));

        retranslateUi(editbuku);

        QMetaObject::connectSlotsByName(editbuku);
    } // setupUi

    void retranslateUi(QDialog *editbuku)
    {
        editbuku->setWindowTitle(QCoreApplication::translate("editbuku", "Dialog", nullptr));
        tf_pengarang->setText(QString());
        tf_tahun->setText(QString());
        btn_edit->setText(QCoreApplication::translate("editbuku", "Edit", nullptr));
        tf_judul->setText(QString());
        label_3->setText(QCoreApplication::translate("editbuku", "Tahun Terbit", nullptr));
        tf_harga->setText(QString());
        label->setText(QCoreApplication::translate("editbuku", "Judul", nullptr));
        label_4->setText(QCoreApplication::translate("editbuku", "Harga", nullptr));
        label_2->setText(QCoreApplication::translate("editbuku", "Pengarang", nullptr));
    } // retranslateUi

};

namespace Ui {
    class editbuku: public Ui_editbuku {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITBUKU_H
