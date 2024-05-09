/********************************************************************************
** Form generated from reading UI file 'admindashboard.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINDASHBOARD_H
#define UI_ADMINDASHBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_admindashboard
{
public:
    QWidget *centralwidget;
    QPushButton *btn_edit;
    QPushButton *btn_hapus;
    QPushButton *btn_tambah;
    QPushButton *btn_refresh;
    QLabel *label;
    QTableWidget *tableWidget;
    QPushButton *btn_logout;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *admindashboard)
    {
        if (admindashboard->objectName().isEmpty())
            admindashboard->setObjectName("admindashboard");
        admindashboard->resize(800, 600);
        centralwidget = new QWidget(admindashboard);
        centralwidget->setObjectName("centralwidget");
        btn_edit = new QPushButton(centralwidget);
        btn_edit->setObjectName("btn_edit");
        btn_edit->setGeometry(QRect(390, 530, 83, 29));
        btn_hapus = new QPushButton(centralwidget);
        btn_hapus->setObjectName("btn_hapus");
        btn_hapus->setGeometry(QRect(660, 530, 83, 29));
        btn_tambah = new QPushButton(centralwidget);
        btn_tambah->setObjectName("btn_tambah");
        btn_tambah->setGeometry(QRect(110, 530, 83, 29));
        btn_refresh = new QPushButton(centralwidget);
        btn_refresh->setObjectName("btn_refresh");
        btn_refresh->setGeometry(QRect(110, 130, 83, 29));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(320, 70, 221, 81));
        QFont font;
        font.setPointSize(24);
        font.setBold(true);
        label->setFont(font);
        tableWidget = new QTableWidget(centralwidget);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(110, 170, 631, 341));
        btn_logout = new QPushButton(centralwidget);
        btn_logout->setObjectName("btn_logout");
        btn_logout->setGeometry(QRect(710, 10, 83, 29));
        admindashboard->setCentralWidget(centralwidget);
        menubar = new QMenuBar(admindashboard);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        admindashboard->setMenuBar(menubar);
        statusbar = new QStatusBar(admindashboard);
        statusbar->setObjectName("statusbar");
        admindashboard->setStatusBar(statusbar);

        retranslateUi(admindashboard);
        QObject::connect(btn_refresh, SIGNAL(clicked()), admindashboard, SLOT(refreshTableWidget()));

        QMetaObject::connectSlotsByName(admindashboard);
    } // setupUi

    void retranslateUi(QMainWindow *admindashboard)
    {
        admindashboard->setWindowTitle(QCoreApplication::translate("admindashboard", "MainWindow", nullptr));
        btn_edit->setText(QCoreApplication::translate("admindashboard", "Edit", nullptr));
        btn_hapus->setText(QCoreApplication::translate("admindashboard", "Hapus", nullptr));
        btn_tambah->setText(QCoreApplication::translate("admindashboard", "Tambah", nullptr));
        btn_refresh->setText(QCoreApplication::translate("admindashboard", "Refresh", nullptr));
        label->setText(QCoreApplication::translate("admindashboard", "CRUD Buku", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("admindashboard", "Judul Buku", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("admindashboard", "Pengarang", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("admindashboard", "Tahun Terbit", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("admindashboard", "Harga", nullptr));
        btn_logout->setText(QCoreApplication::translate("admindashboard", "Logout", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admindashboard: public Ui_admindashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINDASHBOARD_H
