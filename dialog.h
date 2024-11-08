#ifndef DIALOG_H
#define DIALOG_H
#include"client.h"
#include <QDialog>
#include <QWidget>
#include<QString>
#include <QLabel>
#include <QLineEdit>
#include <QDate>
#include <QMessageBox>
#include <QPixmap>
namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();
    void sett2(QString mat,QString nom,QString prenom,QString panne,QString ad,QString tel,QDate date,QString url);
    void setf(QString f);
private slots:
    void on_pushButton_19_clicked();

    void on_pushButton_20_clicked();

private:
    Ui::Dialog *ui;
    QString file;
};

#endif // DIALOG_H
