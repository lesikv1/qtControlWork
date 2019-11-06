#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QProcess>
#include <QtSql>

#include "countrymodel.h"
#include "regionmodel.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_connectButton_released();

    void on_disconectButton_released();

    void on_add_country_released();

    void on_delete_country_released();

    void on_add_region_released();

    void on_delete_region_released();

    void on_update_region_released();

    void on_update_country_released();

    void on_save_to_file_region_released();

    void on_save_to_file_country_released();

private:
    Ui::MainWindow *ui;

protected:
    QSqlDatabase db;
    QString userLogin;
    QString userPassword;
    QString userHost;
    int     localPortDB;
    int     remotePort;
    bool    DBConnectionState;
    CountryModel *countryModel;
    RegionModel *regionModel;
};

#endif // MAINWINDOW_H
