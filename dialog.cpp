#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent),  // Change QWidget to QDialog here
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}
void Dialog::sett(QString c,QString fn,QString ln,QString g,QString a,QString pn,QString j,QDate dh,QString url2){
    ui->lineEdit_8->setText(c);
    ui->lineEdit_9->setText(fn);
    ui->lineEdit_11->setText(ln);
    ui->comboBox_3->setCurrentText(g);
    ui->lineEdit_10->setText(a);
    //ui->lineEdit_12->setText(e);
    ui->lineEdit_13->setText(pn);
    ui->comboBox_4->setCurrentText(j);
    ui->dateEdit->setDate(dh);
    // Step 1: Load the QPixmap with a safer method and handle any errors
    url=url2;
    QPixmap pixmap(url2);
    ui->label->setPixmap(pixmap.scaled(ui->label->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));
}

void Dialog::on_pushButton_15_clicked()
{
    ok=false;
    int cin = ui->lineEdit_8->text().toInt(); // Convertir la chaine saisie en un entier car l'attribut id est de type int
    QString nom = ui->lineEdit_9->text();
    QString prenom = ui->lineEdit_11->text();
    QString tel = ui->lineEdit_10->text();
    QString sexe = ui->comboBox_3->currentText();
    int age = ui->lineEdit_13->text().toInt();
    QString date_emb = ui->dateEdit->date().toString("yyyy-MM-dd"); // Formats the date as a string
    QString poste = ui->comboBox_4->currentText();
    QString URl_img=url;
    Employe E(nom, prenom, sexe,date_emb,poste,cin,tel,age); // Instancier un objet de la classe étudiant en utilisant les informations saisies dans l'interface

    bool test = E.update2(); // Insérer l'objet étudiant instancié dans la table étudiant et récupérer la valeur de retour de query.exec()

    if (test) // Si requête exécutée => QMessageBox::information
    {
        //ui->tableView_1->setModel(em.afficher());
        QMessageBox::information(nullptr, QObject::tr("OK"),QObject::tr("Ajout effectué\n""Click Cancel to exit."),QMessageBox::Cancel);
        close();
    }
    else // Si requête non exécutée => QMessageBox::critical
    {
        QMessageBox::critical(nullptr, QObject::tr("Not OK"),QObject::tr("Ajout non effectué.\n""Click Cancel to exit."),QMessageBox::Cancel);
    }
}


void Dialog::on_pushButton_16_clicked()
{
    Employe em;
    int cin = ui->lineEdit_8->text().toInt(); // Convertir la chaine saisie en un entier car l'attribut id est de type int
    bool test = em.supprimer(cin); // Appel de la méthode supprimer() via l'attribut Etmp
    ok=false;
    if (test)
    {
        //ui->tableView_1->setModel(em.afficher());
        QMessageBox::information(nullptr, QObject::tr("OK"),
                                 QObject::tr("Suppression effectuée\n""Click Cancel to exit."),
                                 QMessageBox::Cancel);
        close();
    }
    else
    {
        QMessageBox::critical(nullptr, QObject::tr("Not OK"),
                              QObject::tr("Suppression non effectuée.\n""Click Cancel to exit."),
                              QMessageBox::Cancel);
    }
}

void Dialog::setf(QString f){
    file=f;
}
