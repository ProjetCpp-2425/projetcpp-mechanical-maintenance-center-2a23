#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include "client.h"
#include "dialog.h"
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
    void onTableCellClicked(const QModelIndex &index);
    void on_pushButton_41_clicked();
    void onExportButtonClicked2();




    void on_pushButton_34_clicked();

private:
    Ui::MainWindow *ui;
    QString selectedFilePath;
    Client clt;
};
#endif // MAINWINDOW_H
