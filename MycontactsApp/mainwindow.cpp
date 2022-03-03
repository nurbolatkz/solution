#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)


{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_save_btn_clicked()
{
    QString name = ui->lineEditName->text();
    QString surname = ui->lineEditSurname->text();
    QString phone_number = ui->lineEditNumber->text();

    dbManager.addNewInfo(name, surname, phone_number);
}


void MainWindow::on_read_all_btn_clicked()
{
    dbManager.getAllRows();

}


void MainWindow::on_delete_btn_clicked()
{

    QString name = ui->lineEditName->text();
    QString phone_number = ui->lineEditNumber->text();

    dbManager.deleteInfo(name, phone_number);
}

