#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QFile>
#include<QDebug>
#include<QTextStream>
#include <QFileDialog>
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton_14, &QPushButton::clicked, this, &MainWindow::selectFile);
    connect(ui->pushButton_40, &QPushButton::clicked, this, &MainWindow::selectFile);
    ui->tableView->setModel(clt.afficher(ui->comboBox_7->currentText()));
/*
    if ( ui->comboBox_8->currentText()=="First Name")
    {
        ui->tableView->setModel(clt.affichernom());
    }
    if ( ui->comboBox_8->currentText()=="First Name")
    {
        ui->tableView->setModel(clt.affichernom());
    }
    if ( ui->comboBox_8->currentText()=="First Name")
    {
        ui->tableView->setModel(clt.affichernom());
    }*/
    //passage entre les pages
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


    connect(ui->tableView, &QTableView::clicked, this, &MainWindow::onTableCellClicked);


    QDate dateeee=QDate::currentDate();
    ui->dateEdit_3->setDate(dateeee);
    //Recherche
    connect(ui->lineEdit_20, &QLineEdit::textChanged, this, [=](const QString &newText) {
        ui->tableView->setModel(clt.afficher2(newText));

    });
    connect(ui->pushButton_36, &QPushButton::clicked, this, &MainWindow::onExportButtonClicked2);

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

void MainWindow::on_pushButton_41_clicked()
{   // -----------------------------------------------------------------------------------------AJOUT
    bool test=false;
    // Récupération des informations saisies dans les 3 champs
    QString mat = ui->lineEdit_21->text();
    QString nom = ui->lineEdit_22->text();
    QString prenom = ui->lineEdit_23->text();
    QString panne = ui->comboBox_8->currentText();
    QString ad = ui->lineEdit_24->text();
    QString tel = ui->lineEdit_25->text(); // Convertir la chaine saisie en un entier car l'attribut id est de type int
    QString date = ui->dateEdit_3->date().toString("yyyy-MM-dd"); // Formats the date as a string
    QString URl_img=selectedFilePath;

    Client E( mat,tel, nom , prenom, ad, panne, date,URl_img); // Instancier un objet de la classe étudiant en utilisant les informations saisies dans l'interface
    QString ch=E.testfonc(mat,tel.toInt(), nom , prenom, ad, panne,URl_img);
    if ( ch=="Ajout non effectué.\n Errors : \n Click Cancel to exit.")
        test = E.ajouter(); // Insérer l'objet étudiant instancié dans la table étudiant et récupérer la valeur de retour de query.exec()

    const char* erreur = ch.toStdString().c_str();
    if (test  ) // Si requête exécutée => QMessageBox::information
    {
        ui->tableView->setModel(clt.afficher(ui->comboBox_7->currentText()));
        QMessageBox::information(nullptr, QObject::tr("OK"),
                                 QObject::tr("Ajout effectué\n"
                                             "Click Cancel to exit."),
                                 QMessageBox::Cancel);
        //Initialisation de nouveau
        ui->lineEdit_21->setText("");
        ui->lineEdit_22->setText("");
        ui->lineEdit_23->setText("");
        ui->lineEdit_24->setText("");
        ui->lineEdit_25->setText("");
        ui->comboBox_8->setCurrentText("Select your Breakdown");
        QDate dateeee=QDate::currentDate();
        ui->dateEdit->setDate(dateeee);

    }
    else // Si requête non exécutée => QMessageBox::critical
    {
        QMessageBox::critical(nullptr, QObject::tr("Not OK"),
                              QObject::tr(erreur),
                              QMessageBox::Cancel);
    }




    // -----------------------------------------------------------------------------------------SUPPRESSION
    /*QString mat = ui->lineEdit_21->text(); // Convertir la chaine saisie en un entier car l'attribut id est de type int
    bool test = clt.supprimer(mat); // Appel de la méthode supprimer() via l'attribut Etmp

    if (test)
    {
        ui->tableView->setModel(clt.afficher());
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

    // -----------------------------------------------------------------------------------------MODIFICATION

    // Récupération des informations saisies dans les 3 champs
    /*QString mat = ui->lineEdit_21->text();
    QString nom = ui->lineEdit_22->text();
    QString prenom = ui->lineEdit_23->text();
    QString panne = ui->comboBox_8->currentText();
    QString ad = ui->lineEdit_24->text();
    QString tel = ui->lineEdit_25->text(); // Convertir la chaine saisie en un entier car l'attribut id est de type int
    QString date = ui->dateEdit_3->date().toString("yyyy-MM-dd"); // Formats the date as a string
    QString URl_img=selectedFilePath;

    Client E( mat,tel, nom , prenom, ad, panne, date,URl_img); // Instancier un objet de la classe étudiant en utilisant les informations saisies dans l'interface

    bool test = E.modifier(); // Insérer l'objet étudiant instancié dans la table étudiant et récupérer la valeur de retour de query.exec()

    if (test) // Si requête exécutée => QMessageBox::information
    {
        ui->tableView->setModel(clt.afficher());
        QMessageBox::information(nullptr, QObject::tr("OK"),
                                 QObject::tr("Ajout effectué\n"
                                             "Click Cancel to exit."),
                                 QMessageBox::Cancel);
    }
    else // Si requête non exécutée => QMessageBox::critical
    {
        QMessageBox::critical(nullptr, QObject::tr("Not OK"),
                              QObject::tr("Ajout non effectué.\n"
                                          "Click Cancel to exit."),
                              QMessageBox::Cancel);
    }*/


}



void MainWindow::onTableCellClicked(const QModelIndex &index) {
    if (!index.isValid()) return;

    // Extract values from the selected row
    QString mat = index.sibling(index.row(), 0).data().toString();
    QString nom = index.sibling(index.row(), 1).data().toString();
    QString prenom = index.sibling(index.row(), 2).data().toString();
    QString panne = index.sibling(index.row(), 5).data().toString();
    QString tel = index.sibling(index.row(), 3).data().toString();
    QString ad = index.sibling(index.row(), 4).data().toString();
    QDate date = index.sibling(index.row(), 6).data().toDate();
    QString url = index.sibling(index.row(), 7).data().toString();

    // Open dialog and show the details
    Dialog dialog(this);
    dialog.sett2(mat, nom,prenom, panne, ad, tel, date,url);

    int result=dialog.exec();
    if (result == QDialog::Rejected) {
        ui->tableView->setModel(clt.afficher(ui->comboBox_7->currentText()));


    }
}




void MainWindow::on_pushButton_34_clicked()
{
    QString arg1=ui->comboBox_7->currentText();
    ui->tableView->setModel(clt.afficher(arg1));
}








void MainWindow::onExportButtonClicked2() {
    // Prompt the user to select a file location
    QString fileName = QFileDialog::getSaveFileName(this, "Save PDF", "", "*.pdf");
    if (fileName.isEmpty())
        return;

    // Ensure the file has a .pdf extension
    if (!fileName.endsWith(".pdf", Qt::CaseInsensitive))
        fileName += ".pdf";

    // Export PDF using ExportPDF class
    clt.exportToPDF(fileName);

    // Show a message box confirming that the file was saved
    QMessageBox::information(this, "PDF Saved", "The PDF file was saved successfully!");
}
