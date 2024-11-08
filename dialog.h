#ifndef DIALOG_H
#define DIALOG_H
#include"employe.h"
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
    void sett(QString c,QString fn,QString ln,QString g,QString a,QString pn,QString j,QDate dh,QString url);
    void setf(QString f);
    bool getok(){return ok;}
private slots:
    void on_pushButton_15_clicked();

    void on_pushButton_16_clicked();

private:
    Ui::Dialog *ui;
    QString file;
    QString url;
    bool ok;
};

#endif // DIALOG_H
