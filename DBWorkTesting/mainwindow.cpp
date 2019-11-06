#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>
#include <QDebug>
#include <QFileDialog>
#include <QTextStream>
#include <QSqlQuery>
#include <QString>
#include <QModelIndex>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    userLogin="csduser_01";
    userPassword="Nx16bx8";
    userHost="178.74.209.90";
    localPortDB=53306;
    remotePort=2233;

    db=QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("178.74.209.90");
    db.setPort(53306);
    db.setDatabaseName("CSD_db1");
    db.setUserName("csduser_01");
    db.setPassword("Nx16bx8");

}

MainWindow::~MainWindow()
{
    delete countryModel;
    delete regionModel;
    delete ui;
}

void MainWindow::on_connectButton_released()
{
    int i;

    DBConnectionState = db.open();

    if(true==DBConnectionState)
       {
         ui->statusString->setText("Подключение выполнено !!!");

         countryModel=new CountryModel(this,db);
         ui->table_country->setModel(countryModel);
         ui->table_country->resizeColumnsToContents();

         regionModel = new RegionModel(this, db);
         ui->table_region->setModel(regionModel);
         ui->table_region->resizeColumnsToContents();

       }
    else
    {
      ui->statusString->setText("Подключение не выполнено."+db.lastError().text());
//      errorLog->AddErrorMessage("Подключение не выполнено."+db.lastError().text());
     qDebug()<<"\nDB Error: "<<db.lastError().text();
    }



}



void MainWindow::on_disconectButton_released()
{
    db.close();
}

void MainWindow::on_add_country_released()
{
    QSqlQuery add;
    add.prepare("INSERT INTO country (country, citizenship) "
                      "VALUES (:country_name, :citizenship_name)");

    QString country_name = ui->input_country->text();
    QString citizenship_name = ui->input_citizenship->text();

    add.bindValue(":country_name", country_name);
    add.bindValue(":citizenship_name", citizenship_name);

    if (!add.exec()) {
        qDebug() << "error";
    }

    countryModel->select();
}

void MainWindow::on_delete_country_released()
{
    QModelIndex field = ui->table_country->currentIndex();

    if(field.isValid()){
        QSqlRecord record = countryModel->record(field.row());
        int Id = record.value(0).toInt();
        QString sql = "DELETE FROM country WHERE country_id=%1;";
        sql = sql.arg(Id);
        QSqlQuery query(db);

        if (!query.exec(sql)) {
            qDebug() << "error";
        }
    }

        countryModel->select();

}

void MainWindow::on_add_region_released()
{
    QSqlQuery add;
    add.prepare("INSERT INTO region (region, country_id) "
                      "VALUES (:region_name, :cauntry_id_name)");

    QString region_name = ui->input_region->text();
    QString cauntry_id_name = ui->input_cauntry_id->text();

    add.bindValue(":region_name", region_name);
    add.bindValue(":cauntry_id_name", cauntry_id_name);

    if (!add.exec()) {
        qDebug() << "error";
    }

    regionModel->select();
}

void MainWindow::on_delete_region_released()
{
    QModelIndex field = ui->table_region->currentIndex();

    if(field.isValid()){
        QSqlRecord record = regionModel->record(field.row());
        int Id = record.value(0).toInt();
        QString sql = "DELETE FROM region WHERE region_id=%1;";
        sql = sql.arg(Id);
        QSqlQuery query(db);


        if (!query.exec(sql)) {
            qDebug() << "error";
        }
    }

        regionModel->select();
}



void MainWindow::on_update_region_released()
{
    regionModel->select();
}

void MainWindow::on_update_country_released()
{
    countryModel->select();
}

void MainWindow::on_save_to_file_region_released()
{
    QString fileName = QFileDialog::getSaveFileName(this,tr("Save file"), "",tr("Txt(*.txt)"));
    QFile file(fileName);
    file.open(QIODevice::WriteOnly);

    QString textData;
    int rows = ui->table_region->model()->rowCount();
    int columns = ui->table_region->model()->columnCount();

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {

                textData += ui->table_region->model()->data(ui->table_region->model()->index(i,j)).toString();
                textData += ", ";
        }
        textData += "\n";
    }
    qDebug() << textData;

    QTextStream out(&file);
    out<<textData;
    file.close();
}

void MainWindow::on_save_to_file_country_released()
{
    QString fileName = QFileDialog::getSaveFileName(this,tr("Save file"), "",tr("Txt(*.txt)"));
    QFile file(fileName);
    file.open(QIODevice::WriteOnly);

    QString textData;
    int rows = ui->table_country->model()->rowCount();
    int columns = ui->table_country->model()->columnCount();

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {

                textData += ui->table_country->model()->data(ui->table_country->model()->index(i,j)).toString();
                textData += ", ";
        }
        textData += "\n";
    }
    qDebug() << textData;

    QTextStream out(&file);
    out<<textData;
    file.close();
}
