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
void Dialog::sett2(QString mat,QString nom,QString prenom,QString panne,QString ad,QString tel,QDate date,QString url){
    ui->lineEdit_19->setText(mat);
    ui->lineEdit_18->setText(nom);
    ui->lineEdit_20->setText(prenom);
    ui->comboBox_8->setCurrentText(panne);
    ui->lineEdit_23->setText(ad);
    ui->lineEdit_21->setText(tel);
    ui->dateEdit_3->setDate(date);
    // Step 1: Load the QPixmap with a safer method and handle any errors
    QPixmap pixmap(url);
    ui->label_3->setPixmap(pixmap.scaled(ui->label_3->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));

}

void Dialog::on_pushButton_19_clicked()// ---------------------------------Modifier
{
    QString mat = ui->lineEdit_19->text();
    QString nom = ui->lineEdit_18->text();
    QString prenom = ui->lineEdit_20->text();
    QString panne = ui->comboBox_8->currentText();
    QString ad = ui->lineEdit_23->text();
    QString tel = ui->lineEdit_21->text(); // Convertir la chaine saisie en un entier car l'attribut id est de type int
    QString date = ui->dateEdit_3->date().toString("yyyy-MM-dd"); // Formats the date as a string
    //QString URl_img=selectedFilePath;

    Client E( mat,tel, nom , prenom, ad, panne, date); // Instancier un objet de la classe étudiant en utilisant les informations saisies dans l'interface

    bool test = E.modifier(); // Insérer l'objet étudiant instancié dans la table étudiant et récupérer la valeur de retour de query.exec()

    if (test) // Si requête exécutée => QMessageBox::information
    {
        //ui->tableView->setModel(clt.afficher());
        QMessageBox::information(nullptr, QObject::tr("OK"),
                                 QObject::tr("Ajout effectué\n"
                                             "Click Cancel to exit."),
                                 QMessageBox::Cancel);
        close();
    }
    else // Si requête non exécutée => QMessageBox::critical
    {
        QMessageBox::critical(nullptr, QObject::tr("Not OK"),
                              QObject::tr("Ajout non effectué.\n"
                                          "Click Cancel to exit."),
                              QMessageBox::Cancel);
    }

}


void Dialog::on_pushButton_20_clicked()//-------------------------------Supprimer
{
    Client clt;
    QString mat = ui->lineEdit_19->text(); // Convertir la chaine saisie en un entier car l'attribut id est de type int
    bool test = clt.supprimer(mat); // Appel de la méthode supprimer() via l'attribut Etmp

    if (test)
    {
        //ui->tableView->setModel(clt.afficher());
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
