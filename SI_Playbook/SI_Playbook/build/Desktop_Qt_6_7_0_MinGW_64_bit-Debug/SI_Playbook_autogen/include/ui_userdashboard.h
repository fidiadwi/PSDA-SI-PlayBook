/********************************************************************************
** Form generated from reading UI file 'userdashboard.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERDASHBOARD_H
#define UI_USERDASHBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_userdashboard
{
public:
    QWidget *centralwidget;
    QTableWidget *tableWidget;
    QPushButton *pushButton_3;
    QLabel *label;
    QLineEdit *tf_cari;
    QPushButton *btn_cari;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *userdashboard)
    {
        if (userdashboard->objectName().isEmpty())
            userdashboard->setObjectName("userdashboard");
        userdashboard->resize(430, 600);
        centralwidget = new QWidget(userdashboard);
        centralwidget->setObjectName("centralwidget");
        tableWidget = new QTableWidget(centralwidget);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(80, 240, 261, 281));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(300, 30, 91, 29));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(130, 60, 161, 121));
        QFont font;
        font.setFamilies({QString::fromUtf8("Agency FB")});
        font.setPointSize(24);
        font.setBold(true);
        label->setFont(font);
        tf_cari = new QLineEdit(centralwidget);
        tf_cari->setObjectName("tf_cari");
        tf_cari->setGeometry(QRect(80, 200, 171, 28));
        btn_cari = new QPushButton(centralwidget);
        btn_cari->setObjectName("btn_cari");
        btn_cari->setGeometry(QRect(260, 200, 83, 29));
        userdashboard->setCentralWidget(centralwidget);
        menubar = new QMenuBar(userdashboard);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 430, 25));
        userdashboard->setMenuBar(menubar);
        statusbar = new QStatusBar(userdashboard);
        statusbar->setObjectName("statusbar");
        userdashboard->setStatusBar(statusbar);

        retranslateUi(userdashboard);
        QObject::connect(pushButton_3, SIGNAL(clicked()), userdashboard, SLOT(on_btn_logout_clicked()));

        QMetaObject::connectSlotsByName(userdashboard);
    } // setupUi

    void retranslateUi(QMainWindow *userdashboard)
    {
        userdashboard->setWindowTitle(QCoreApplication::translate("userdashboard", "MainWindow", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("userdashboard", "Judul", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("userdashboard", "Harga", nullptr));
        pushButton_3->setText(QCoreApplication::translate("userdashboard", "Logout", nullptr));
        label->setText(QCoreApplication::translate("userdashboard", "Daftar Buku", nullptr));
        btn_cari->setText(QCoreApplication::translate("userdashboard", "Cari", nullptr));
    } // retranslateUi

};

namespace Ui {
    class userdashboard: public Ui_userdashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERDASHBOARD_H
