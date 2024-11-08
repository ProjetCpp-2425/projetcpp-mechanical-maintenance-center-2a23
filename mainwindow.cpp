#include "mainwindow.h"
#include "ui_mainwindow.h"

#include<QFile>
#include<QDebug>
#include<QTextStream>
#include <QFileDialog>
#include <QDialog>
#include <QVBoxLayout>
#include <QLabel>
#include <QSqlError>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton_14, &QPushButton::clicked, this, &MainWindow::selectFile);
    connect(ui->pushButton_40, &QPushButton::clicked, this, &MainWindow::selectFile);
    ui->tableView_1->setModel(em.afficher(ui->comboBox_2->currentText()));
    QDate dateeee=QDate::currentDate();
    ui->dateEdit->setDate(dateeee);


    //tabdil bin les pages
    connect(ui->pushButton_3, &QPushButton::clicked, [=]() {
        ui->stackedWidget->setCurrentIndex(1); // Go to Page 1
    });


    connect(ui->pushButton_55, &QPushButton::clicked, [=]() {
        ui->stackedWidget->setCurrentIndex(1); // Go to Page 1
    });
    connect(ui->pushButton_56, &QPushButton::clicked, [=]() {
        ui->stackedWidget->setCurrentIndex(2); // Go to Page 1
    });
    connect(ui->pushButton_57, &QPushButton::clicked, [=]() {
        ui->stackedWidget->setCurrentIndex(3); // Go to Page 1
    });
    connect(ui->pushButton_58, &QPushButton::clicked, [=]() {
        ui->stackedWidget->setCurrentIndex(4); // Go to Page 2
    });
    connect(ui->pushButton_59, &QPushButton::clicked, [=]() {
        ui->stackedWidget->setCurrentIndex(5); // Go to Page 2
    });


    connect(ui->pushButton_29, &QPushButton::clicked, [=]() {
        ui->stackedWidget->setCurrentIndex(1); // Go to Page 1
    });
    connect(ui->pushButton_30, &QPushButton::clicked, [=]() {
        ui->stackedWidget->setCurrentIndex(2); // Go to Page 1
    });
    connect(ui->pushButton_31, &QPushButton::clicked, [=]() {
        ui->stackedWidget->setCurrentIndex(3); // Go to Page 1
    });
    connect(ui->pushButton_32, &QPushButton::clicked, [=]() {
        ui->stackedWidget->setCurrentIndex(4); // Go to Page 2
    });
    connect(ui->pushButton_33, &QPushButton::clicked, [=]() {
        ui->stackedWidget->setCurrentIndex(5); // Go to Page 2
    });


    connect(ui->pushButton_4, &QPushButton::clicked, [=]() {
        ui->stackedWidget->setCurrentIndex(1); // Go to Page 1
    });
    connect(ui->pushButton_5, &QPushButton::clicked, [=]() {
        ui->stackedWidget->setCurrentIndex(2); // Go to Page 1
    });
    connect(ui->pushButton_6, &QPushButton::clicked, [=]() {
        ui->stackedWidget->setCurrentIndex(3); // Go to Page 1
    });
    connect(ui->pushButton_7, &QPushButton::clicked, [=]() {
        ui->stackedWidget->setCurrentIndex(4); // Go to Page 2
    });
    connect(ui->pushButton_8, &QPushButton::clicked, [=]() {
        ui->stackedWidget->setCurrentIndex(5); // Go to Page 2
    });


    connect(ui->pushButton_67, &QPushButton::clicked, [=]() {
        ui->stackedWidget->setCurrentIndex(1); // Go to Page 1
    });
    connect(ui->pushButton_68, &QPushButton::clicked, [=]() {
        ui->stackedWidget->setCurrentIndex(2); // Go to Page 1
    });
    connect(ui->pushButton_69, &QPushButton::clicked, [=]() {
        ui->stackedWidget->setCurrentIndex(3); // Go to Page 1
    });
    connect(ui->pushButton_70, &QPushButton::clicked, [=]() {
        ui->stackedWidget->setCurrentIndex(4); // Go to Page 2
    });
    connect(ui->pushButton_71, &QPushButton::clicked, [=]() {
        ui->stackedWidget->setCurrentIndex(5); // Go to Page 2
    });


    connect(ui->pushButton_93, &QPushButton::clicked, [=]() {
        ui->stackedWidget->setCurrentIndex(1); // Go to Page 1
    });
    connect(ui->pushButton_94, &QPushButton::clicked, [=]() {
        ui->stackedWidget->setCurrentIndex(2); // Go to Page 1
    });
    connect(ui->pushButton_95, &QPushButton::clicked, [=]() {
        ui->stackedWidget->setCurrentIndex(3); // Go to Page 1
    });
    connect(ui->pushButton_96, &QPushButton::clicked, [=]() {
        ui->stackedWidget->setCurrentIndex(4); // Go to Page 2
    });
    connect(ui->pushButton_97, &QPushButton::clicked, [=]() {
        ui->stackedWidget->setCurrentIndex(5); // Go to Page 2
    });
    connect(ui->tableView_1, &QTableView::clicked, this, &MainWindow::onTableCellClicked);
    connect(ui->lineEdit_7, &QLineEdit::textChanged, this, [=](const QString &newText) {
        ui->tableView_1->setModel(em.afficher2(newText));
    });
    connect(ui->pushButton_9, &QPushButton::clicked, this, &MainWindow::on_pushButton_9_clicked);
    connect(ui->pushButton_11, &QPushButton::clicked, this, &MainWindow::onExportButtonClicked);

}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::selectFile() {
    // Open a file dialog and get the selected file path
    QString fileName = QFileDialog::getOpenFileName(this, "Select File", "", "PNG Files (*.png);;JPG Files (*.jpg)");

    selectedFilePath=fileName;
    // If a file was selected, display the path in filePathLineEdit
    if (!fileName.isEmpty()) {
        //ui->filePathLineEdit->setText(fileName);
    }
}

void MainWindow::on_pushButton_15_clicked()
{
    bool test=false;
     //ajoutttt // Récupération des informations saisies dans les 3 champs
    int cin = ui->lineEdit_8->text().toInt(); // Convertir la chaine saisie en un entier car l'attribut id est de type int
    QString nom = ui->lineEdit_9->text();
    QString prenom = ui->lineEdit_11->text();
    QString tel = ui->lineEdit_13->text();
    QString sexe = ui->comboBox_3->currentText();
    int age = ui->lineEdit_10->text().toInt();
    QString date_emb = ui->dateEdit->date().toString("yyyy-MM-dd"); // Formats the date as a string
    QString poste = ui->comboBox_4->currentText();
    QString URl_img=selectedFilePath;
    Employe E(nom, prenom, sexe,date_emb,poste,URl_img,cin,tel,age); // Instancier un objet de la classe étudiant en utilisant les informations saisies dans l'interface
    //E.testfonc(nom, prenom, sexe,date_emb,poste,URl_img,cin,tel.to,age);
    Dialog d(this);
    d.setf(selectedFilePath);
    QString ch=E.testfonc(nom, prenom, sexe,date_emb,poste,URl_img,cin,tel.toInt(),age);
    if(ch=="Ajout non effectué.\n Errors : \n Click Cancel to exit."){
     test= E.ajout(); // Insérer l'objet étudiant instancié dans la table étudiant et récupérer la valeur de retour de query.exec()
    }
    const char* erreur = ch.toStdString().c_str();
    if (test) // Si requête exécutée => QMessageBox::information
    {
        ui->tableView_1->setModel(em.afficher(ui->comboBox_2->currentText()));
        QMessageBox::information(nullptr, QObject::tr("OK"),QObject::tr("Ajout effectué\n""Click Cancel to exit."),QMessageBox::Cancel);
        ui->lineEdit_8->setText("");
        ui->lineEdit_9->setText("");
        ui->lineEdit_11->setText("");
        ui->lineEdit_10->setText("");
        ui->lineEdit_13->setText("");
        ui->comboBox_3->setCurrentText("Select Gender");
        ui->comboBox_4->setCurrentText("Select Job");
        QDate dateeee=QDate::currentDate();
        ui->dateEdit->setDate(dateeee);

    }
    else // Si requête non exécutée => QMessageBox::critical
    {
        QMessageBox::critical(nullptr, QObject::tr("Not OK"),QObject::tr(erreur),QMessageBox::Cancel);
    }
    /*suprimeeee
    int cin = ui->lineEdit_8->text().toInt(); // Convertir la chaine saisie en un entier car l'attribut id est de type int
    bool test = em.supprimer(cin); // Appel de la méthode supprimer() via l'attribut Etmp

    if (test)
    {
        ui->tableView_1->setModel(em.afficher());
        QMessageBox::information(nullptr, QObject::tr("OK"),
                                 QObject::tr("Suppression effectuée\n""Click Cancel to exit."),
                                 QMessageBox::Cancel);
    }
    else
    {
        QMessageBox::critical(nullptr, QObject::tr("Not OK"),
                              QObject::tr("Suppression non effectuée.\n""Click Cancel to exit."),
                              QMessageBox::Cancel);
    }*/
    /*int cin = ui->lineEdit_8->text().toInt(); // Convertir la chaine saisie en un entier car l'attribut id est de type int
    QString nom = ui->lineEdit_9->text();
    QString prenom = ui->lineEdit_11->text();
    QString tel = ui->lineEdit_10->text();
    QString sexe = ui->comboBox_3->currentText();
    int age = ui->lineEdit_13->text().toInt();
    QString date_emb = ui->dateEdit->date().toString("yyyy-MM-dd"); // Formats the date as a string
    QString poste = ui->comboBox_4->currentText();
    QString URl_img=selectedFilePath;
    Employe E(nom, prenom, sexe,date_emb,poste,URl_img,cin,tel,age); // Instancier un objet de la classe étudiant en utilisant les informations saisies dans l'interface

    bool test = E.update(); // Insérer l'objet étudiant instancié dans la table étudiant et récupérer la valeur de retour de query.exec()

    if (test) // Si requête exécutée => QMessageBox::information
    {
        ui->tableView_1->setModel(em.afficher());
        QMessageBox::information(nullptr, QObject::tr("OK"),QObject::tr("Ajout effectué\n""Click Cancel to exit."),QMessageBox::Cancel);
    }
    else // Si requête non exécutée => QMessageBox::critical
    {
        QMessageBox::critical(nullptr, QObject::tr("Not OK"),QObject::tr("Ajout non effectué.\n""Click Cancel to exit."),QMessageBox::Cancel);
    }
    Dialog d(this);
    QDate date(2024, 11, 3);
    //d.sett("22","22","22","Female","22","22","Mechanic",date);
    d.exec();*/
}




void MainWindow::onTableCellClicked(const QModelIndex &index) {
    if (!index.isValid()) return;

    // Extract values from the selected row
    QString c = index.sibling(index.row(), 0).data().toString(); // CIN
    QString fn = index.sibling(index.row(), 1).data().toString(); // NOM (First Name)
    QString ln = index.sibling(index.row(), 2).data().toString(); // PRENOM (Last Name)
    QString  a= index.sibling(index.row(), 3).data().toString(); // TEL (Phone Number)
    QString pn = index.sibling(index.row(), 4).data().toString();  // AGE
    QString g = index.sibling(index.row(), 5).data().toString();  // SEXE (Gender)
    QDate dh = index.sibling(index.row(), 6).data().toDate();     // DATE D'EMBAUCHE (Date of Hire)
    QString j = index.sibling(index.row(), 7).data().toString();  // TYPE (Job Type)
    QString url = index.sibling(index.row(), 8).data().toString();
    Dialog dialog(this);
    dialog.sett(c, fn, ln, g, a, pn, j, dh,url);
    //QString url=em.getImageLink(c);
    dialog.setf(url);
    int result=dialog.exec();
    if(dialog.getok()==true){dialog.close();}
    if (result == QDialog::Rejected) {
        ui->tableView_1->setModel(em.afficher(ui->comboBox_2->currentText()));


    }
}
void MainWindow::on_pushButton_9_clicked()
{
    QString arg1=ui->comboBox_2->currentText();
    ui->tableView_1->setModel(em.afficher(arg1));
}
void MainWindow::onExportButtonClicked() {
    // Prompt the user to select a file location
    QString fileName = QFileDialog::getSaveFileName(this, "Save PDF", "", "*.pdf");
    if (fileName.isEmpty())
        return;

    // Ensure the file has a .pdf extension
    if (!fileName.endsWith(".pdf", Qt::CaseInsensitive))
        fileName += ".pdf";

    // Export PDF using ExportPDF class
    em.exportToPDF(fileName);

    // Show a message box confirming that the file was saved
    QMessageBox::information(this, "PDF Saved", "The PDF file was saved successfully!");
}
