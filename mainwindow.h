#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include"employe.h"
#include <QMessageBox>
#include <QTableView>
#include <QDialog>
#include"dialog.h"
#include <QModelIndex>
#include <QDate>
#include <QSqlQuery>
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void selectFile();


    void on_pushButton_15_clicked();

    void onTableCellClicked(const QModelIndex &index);
    void onExportButtonClicked();




    void on_pushButton_9_clicked();

private:
    QString selectedFilePath;
    Employe em;
    Ui::MainWindow *ui;
    QString filename;

};
#endif // MAINWINDOW_H
