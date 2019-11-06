/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab_3;
    QTableView *table_country;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *input_country;
    QLabel *label_2;
    QLineEdit *input_citizenship;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *add_country;
    QPushButton *delete_country;
    QWidget *tab;
    QTableView *table_region;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLineEdit *input_region;
    QLabel *label_4;
    QLineEdit *input_cauntry_id;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *add_region;
    QPushButton *delete_region;
    QWidget *tab_4;
    QTableView *table_district;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QLineEdit *input_district;
    QLabel *label_6;
    QLineEdit *input_region_id;
    QWidget *horizontalLayoutWidget_6;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *button_add_district;
    QPushButton *button_delete_district;
    QWidget *tab_5;
    QTableView *table_cities;
    QWidget *horizontalLayoutWidget_7;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_7;
    QLineEdit *input_city;
    QLabel *label_9;
    QLineEdit *input_phone;
    QLabel *label_8;
    QLineEdit *input_disctict_id;
    QWidget *horizontalLayoutWidget_8;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *button_add_city;
    QPushButton *button_delete_city;
    QWidget *tab_2;
    QTextEdit *text_notification;
    QPushButton *save_to_file;
    QPushButton *connectButton;
    QPushButton *disconectButton;
    QLabel *statusString;
    QPushButton *updateButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(945, 646);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(20, 60, 901, 471));
        tabWidget->setMinimumSize(QSize(0, 0));
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        table_country = new QTableView(tab_3);
        table_country->setObjectName(QStringLiteral("table_country"));
        table_country->setGeometry(QRect(25, 21, 721, 221));
        horizontalLayoutWidget = new QWidget(tab_3);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(30, 250, 681, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        input_country = new QLineEdit(horizontalLayoutWidget);
        input_country->setObjectName(QStringLiteral("input_country"));

        horizontalLayout->addWidget(input_country);

        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        input_citizenship = new QLineEdit(horizontalLayoutWidget);
        input_citizenship->setObjectName(QStringLiteral("input_citizenship"));

        horizontalLayout->addWidget(input_citizenship);

        horizontalLayoutWidget_2 = new QWidget(tab_3);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(30, 340, 401, 80));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        add_country = new QPushButton(horizontalLayoutWidget_2);
        add_country->setObjectName(QStringLiteral("add_country"));

        horizontalLayout_2->addWidget(add_country);

        delete_country = new QPushButton(horizontalLayoutWidget_2);
        delete_country->setObjectName(QStringLiteral("delete_country"));

        horizontalLayout_2->addWidget(delete_country);

        tabWidget->addTab(tab_3, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        table_region = new QTableView(tab);
        table_region->setObjectName(QStringLiteral("table_region"));
        table_region->setGeometry(QRect(20, 10, 841, 251));
        horizontalLayoutWidget_3 = new QWidget(tab);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(20, 270, 491, 61));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(horizontalLayoutWidget_3);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_4->addWidget(label_3);

        input_region = new QLineEdit(horizontalLayoutWidget_3);
        input_region->setObjectName(QStringLiteral("input_region"));
        input_region->setMinimumSize(QSize(3, 0));

        horizontalLayout_4->addWidget(input_region);

        label_4 = new QLabel(horizontalLayoutWidget_3);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        input_cauntry_id = new QLineEdit(horizontalLayoutWidget_3);
        input_cauntry_id->setObjectName(QStringLiteral("input_cauntry_id"));

        horizontalLayout_4->addWidget(input_cauntry_id);

        horizontalLayoutWidget_4 = new QWidget(tab);
        horizontalLayoutWidget_4->setObjectName(QStringLiteral("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(20, 340, 291, 61));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        add_region = new QPushButton(horizontalLayoutWidget_4);
        add_region->setObjectName(QStringLiteral("add_region"));

        horizontalLayout_5->addWidget(add_region);

        delete_region = new QPushButton(horizontalLayoutWidget_4);
        delete_region->setObjectName(QStringLiteral("delete_region"));

        horizontalLayout_5->addWidget(delete_region);

        tabWidget->addTab(tab, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        table_district = new QTableView(tab_4);
        table_district->setObjectName(QStringLiteral("table_district"));
        table_district->setGeometry(QRect(20, 10, 651, 291));
        horizontalLayoutWidget_5 = new QWidget(tab_4);
        horizontalLayoutWidget_5->setObjectName(QStringLiteral("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(20, 310, 451, 51));
        horizontalLayout_6 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(horizontalLayoutWidget_5);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_6->addWidget(label_5);

        input_district = new QLineEdit(horizontalLayoutWidget_5);
        input_district->setObjectName(QStringLiteral("input_district"));

        horizontalLayout_6->addWidget(input_district);

        label_6 = new QLabel(horizontalLayoutWidget_5);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_6->addWidget(label_6);

        input_region_id = new QLineEdit(horizontalLayoutWidget_5);
        input_region_id->setObjectName(QStringLiteral("input_region_id"));

        horizontalLayout_6->addWidget(input_region_id);

        horizontalLayoutWidget_6 = new QWidget(tab_4);
        horizontalLayoutWidget_6->setObjectName(QStringLiteral("horizontalLayoutWidget_6"));
        horizontalLayoutWidget_6->setGeometry(QRect(20, 370, 451, 61));
        horizontalLayout_7 = new QHBoxLayout(horizontalLayoutWidget_6);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        button_add_district = new QPushButton(horizontalLayoutWidget_6);
        button_add_district->setObjectName(QStringLiteral("button_add_district"));

        horizontalLayout_7->addWidget(button_add_district);

        button_delete_district = new QPushButton(horizontalLayoutWidget_6);
        button_delete_district->setObjectName(QStringLiteral("button_delete_district"));

        horizontalLayout_7->addWidget(button_delete_district);

        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        table_cities = new QTableView(tab_5);
        table_cities->setObjectName(QStringLiteral("table_cities"));
        table_cities->setGeometry(QRect(0, 10, 681, 301));
        table_cities->setMaximumSize(QSize(16777215, 16777215));
        horizontalLayoutWidget_7 = new QWidget(tab_5);
        horizontalLayoutWidget_7->setObjectName(QStringLiteral("horizontalLayoutWidget_7"));
        horizontalLayoutWidget_7->setGeometry(QRect(0, 320, 551, 51));
        horizontalLayout_8 = new QHBoxLayout(horizontalLayoutWidget_7);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(horizontalLayoutWidget_7);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_8->addWidget(label_7);

        input_city = new QLineEdit(horizontalLayoutWidget_7);
        input_city->setObjectName(QStringLiteral("input_city"));

        horizontalLayout_8->addWidget(input_city);

        label_9 = new QLabel(horizontalLayoutWidget_7);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_8->addWidget(label_9);

        input_phone = new QLineEdit(horizontalLayoutWidget_7);
        input_phone->setObjectName(QStringLiteral("input_phone"));

        horizontalLayout_8->addWidget(input_phone);

        label_8 = new QLabel(horizontalLayoutWidget_7);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_8->addWidget(label_8);

        input_disctict_id = new QLineEdit(horizontalLayoutWidget_7);
        input_disctict_id->setObjectName(QStringLiteral("input_disctict_id"));

        horizontalLayout_8->addWidget(input_disctict_id);

        horizontalLayoutWidget_8 = new QWidget(tab_5);
        horizontalLayoutWidget_8->setObjectName(QStringLiteral("horizontalLayoutWidget_8"));
        horizontalLayoutWidget_8->setGeometry(QRect(0, 380, 341, 51));
        horizontalLayout_9 = new QHBoxLayout(horizontalLayoutWidget_8);
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        button_add_city = new QPushButton(horizontalLayoutWidget_8);
        button_add_city->setObjectName(QStringLiteral("button_add_city"));

        horizontalLayout_9->addWidget(button_add_city);

        button_delete_city = new QPushButton(horizontalLayoutWidget_8);
        button_delete_city->setObjectName(QStringLiteral("button_delete_city"));

        horizontalLayout_9->addWidget(button_delete_city);

        tabWidget->addTab(tab_5, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        text_notification = new QTextEdit(tab_2);
        text_notification->setObjectName(QStringLiteral("text_notification"));
        text_notification->setGeometry(QRect(20, 20, 491, 261));
        save_to_file = new QPushButton(tab_2);
        save_to_file->setObjectName(QStringLiteral("save_to_file"));
        save_to_file->setGeometry(QRect(20, 300, 131, 41));
        save_to_file->setMaximumSize(QSize(16777215, 16777215));
        save_to_file->setAutoRepeatInterval(108);
        tabWidget->addTab(tab_2, QString());
        connectButton = new QPushButton(centralWidget);
        connectButton->setObjectName(QStringLiteral("connectButton"));
        connectButton->setGeometry(QRect(20, 10, 131, 31));
        disconectButton = new QPushButton(centralWidget);
        disconectButton->setObjectName(QStringLiteral("disconectButton"));
        disconectButton->setGeometry(QRect(190, 10, 161, 31));
        statusString = new QLabel(centralWidget);
        statusString->setObjectName(QStringLiteral("statusString"));
        statusString->setGeometry(QRect(20, 550, 841, 41));
        updateButton = new QPushButton(centralWidget);
        updateButton->setObjectName(QStringLiteral("updateButton"));
        updateButton->setGeometry(QRect(380, 10, 111, 31));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 945, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Country", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Citizenship", Q_NULLPTR));
        add_country->setText(QApplication::translate("MainWindow", "Add", Q_NULLPTR));
        delete_country->setText(QApplication::translate("MainWindow", "Delete", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Country", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Region", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "country_id", Q_NULLPTR));
        add_region->setText(QApplication::translate("MainWindow", "Add", Q_NULLPTR));
        delete_region->setText(QApplication::translate("MainWindow", "Delete", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Region", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "District", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "region_id", Q_NULLPTR));
        button_add_district->setText(QApplication::translate("MainWindow", "Add", Q_NULLPTR));
        button_delete_district->setText(QApplication::translate("MainWindow", "Delete", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "District", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "City", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "Phone number", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "district_id", Q_NULLPTR));
        button_add_city->setText(QApplication::translate("MainWindow", "Add", Q_NULLPTR));
        button_delete_city->setText(QApplication::translate("MainWindow", "Delete", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("MainWindow", "City", Q_NULLPTR));
        save_to_file->setText(QApplication::translate("MainWindow", "Save to file", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Notification", Q_NULLPTR));
        connectButton->setText(QApplication::translate("MainWindow", "\320\237\321\226\320\264'\321\224\320\264\320\275\320\260\321\202\320\270\321\201\321\214", Q_NULLPTR));
        disconectButton->setText(QApplication::translate("MainWindow", "\320\222\321\226\320\264'\321\224\320\264\320\275\320\260\321\202\320\270\321\201\321\214", Q_NULLPTR));
        statusString->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        updateButton->setText(QApplication::translate("MainWindow", "Update", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
