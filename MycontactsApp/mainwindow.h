#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dbmanager.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    DbManager dbManager = DbManager(DB_PATH);
    ~MainWindow();

private slots:
    void on_save_btn_clicked();

    void on_read_all_btn_clicked();

    void on_delete_btn_clicked();


private:
    Ui::MainWindow *ui;

};
#endif // MAINWINDOW_H
