#include "client.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
Client::Client(QString m,QString t,QString n,QString p,QString a,QString pa,QString d,QString u)
{
    tel=t;
    mat=m;
    nom=n;
    prenom=p;
    date=d;
    ad=a;
    panne=pa;
    url=u;
}

Client::Client(QString m,QString t,QString n,QString p,QString a,QString pa,QString d)
{
    tel=t;
    mat=m;
    nom=n;
    prenom=p;
    date=d;
    ad=a;
    panne=pa;

}

bool Client::ajouter()
{
    QSqlQuery query;

    // res = QString::number(tel);
    // prepare() prend la requête en paramètre pour la préparer à l'exécution.
    query.prepare("insert into CLIENT (MATRICULE, NOM, PRENOM, TEL ,ADRESSE, PANNE, DATEE, URL) "
                  "values (:mat, :nom, :prenom, :tel, :ad, :panne, :date, :url)");

    // Création des variables liées
    query.bindValue(":mat", mat);
    query.bindValue(":nom", nom);
    query.bindValue(":prenom", prenom);
    query.bindValue(":tel", tel);
    query.bindValue(":ad", ad);
    query.bindValue(":panne", panne);
    query.bindValue(":date", date);
    query.bindValue(":url", url);


    if (!query.exec()) { // Si la requête échoue, affiche l'erreur
        /*QString erreurDetaillee = query.lastError().text();
        QMessageBox::critical(nullptr, QObject::tr("Erreur"),
                              QObject::tr("Échec de l'ajout :\n%1").arg(erreurDetaillee),
                              QMessageBox::Cancel);*/
        return false;
    }
    return true;
}

QSqlQueryModel* Client::afficher(QString a)
{   QSqlQueryModel* model = new QSqlQueryModel();
    if (a=="First Name")
    // Use SUBSTR(prenom, 1, 1) to order by the first letter of 'prenom'
    model->setQuery("SELECT * FROM CLIENT ORDER BY nom ASC;");
    else if (a=="Last Name")
        model->setQuery("SELECT * FROM CLIENT ORDER BY prenom ASC;");
    else if (a=="Date")
        model->setQuery("SELECT * FROM CLIENT ORDER BY TO_DATE(datee, 'YYYY-MM-DD') ASC;");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("LICENSE PLATE"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("FIRST NAME"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("LAST NAME"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("PHONE NUMBER"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("ADDRESS"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("BREAKDOWN"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("DATE"));
    model->setHeaderData(8, Qt::Horizontal, QObject::tr("URL"));

    return model;

}
bool Client::supprimer(QString mat)
{
    QSqlQuery query;

    query.prepare("DELETE FROM CLIENT WHERE MATRICULE = :mat");
    query.bindValue(":mat", mat);

    return query.exec();
}

bool Client::modifier()
{
    QSqlQuery query;
    //QString res = QString::number(id);

    query.prepare("UPDATE CLIENT SET MATRICULE=:mat,TEL=:tel,NOM=:nom,PRENOM=:prenom,ADRESSE=:ad,PANNE=:panne,DATEE=:date, URL=:url WHERE MATRICULE=:mat;");
    query.bindValue(":mat", mat);
    query.bindValue(":nom", nom);
    query.bindValue(":prenom", prenom);
    query.bindValue(":tel", tel);
    query.bindValue(":ad", ad);
    query.bindValue(":panne", panne);
    query.bindValue(":date", date);
    query.bindValue(":url", url);
    return query.exec();
}

QString Client::testfonc(QString m, int t, QString n, QString p, QString a, QString pa, QString u) {
    QString ch = "Ajout non effectué.\n Errors : ";

    // Condition pour m
    if (!((m.size() == 11 && m[4] == 'T' && m[5] == 'U' &&
           m[0].isDigit() && m[1].isDigit() && m[2].isDigit() &&
           m[7].isDigit() && m[8].isDigit() && m[9].isDigit() && m[10].isDigit()) ||
          m.startsWith("#"))) {
        ch += " \n Licence Plate ❌";
    }

    if (t > 99999999 || t < 10000000) {
        ch += " \n TEL ❌";
    }

    // Vérification du prénom et du nom pour s'assurer qu'ils ne contiennent pas de chiffres
    QRegularExpression regex("\\d"); // Expression régulière pour détecter les chiffres
    if (p.isEmpty() || p.contains(regex)) {
        ch += " \n Last Name ❌";
    }
    if (n.isEmpty() || n.contains(regex)) {
        ch += " \n First Name ❌";
    }

    if (a.isEmpty()) {
        ch += " \n Address ❌";
    }
    if (pa == "Select your Breakdown") {
        ch += " \n Breakdown ❌";
    }
    if (u.isEmpty()) {
        ch += " \n Image ❌";
    }

    ch += "\n Click Cancel to exit.";
    return ch;
}


//Affichage de la recherche
QSqlQueryModel* Client::afficher2(QString arg1) {
    QSqlQueryModel* model = new QSqlQueryModel();
    QSqlQuery query;

    // Prepare the query with LIKE and a placeholder
    query.prepare("SELECT MATRICULE, NOM, PRENOM, TEL, ADRESSE, PANNE, DATEE, URL FROM CLIENT WHERE MATRICULE LIKE :arg1");
    query.bindValue(":arg1", arg1 + "%"); // Bind 'arg1%' to :arg1

    // Execute the query
    if (query.exec()) {
        model->setQuery(query); // Set the executed query on the model
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("LICENSE PLATE"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("FIRST NAME"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("LAST NAME"));
        model->setHeaderData(3, Qt::Horizontal, QObject::tr("PHONE NUMBER"));
        model->setHeaderData(4, Qt::Horizontal, QObject::tr("ADDRESS"));
        model->setHeaderData(5, Qt::Horizontal, QObject::tr("BREAKDOWN"));
        model->setHeaderData(6, Qt::Horizontal, QObject::tr("DATE"));
        model->setHeaderData(8, Qt::Horizontal, QObject::tr("URL"));
    } else {
        qDebug() << "Query failed:" << query.lastError();
    }

    return model;
}

void Client::exportToPDF(const QString &fileName) {
    // Set up the PDF writer
    QPdfWriter pdfWriter(fileName);
    pdfWriter.setPageSize(QPageSize(QPageSize::A4));
    pdfWriter.setResolution(300);

    QPainter painter(&pdfWriter);
    painter.setFont(QFont("Arial", 12));

    // Prepare and execute the SQL query
    QSqlQuery query;
    query.prepare("SELECT MATRICULE, NOM, PRENOM, TEL, ADRESSE, PANNE, DATEE FROM CLIENT");  // Removed URL from the query
    if (!query.exec()) {
        QMessageBox::warning(nullptr, "Database Error", query.lastError().text());
        return;
    }

    // Set up initial positions
    int x = 100;
    int y = 100;
    int lineHeight = 100;

    // Header
    painter.drawText(x, y, "Employee Data Export");
    y += lineHeight;

    // Draw table headers in English
    painter.drawText(x, y, "License Plate");
    painter.drawText(x + 320, y, "First Name");
    painter.drawText(x + 620, y, "Last Name");
    painter.drawText(x + 900, y, "Phone Num");
    painter.drawText(x + 1200, y, "Address");
    painter.drawText(x + 1500, y, "Breakdown");
    painter.drawText(x + 2050, y, "Date");
    y += lineHeight;

    // Retrieve and draw data rows
    while (query.next()) {
        QString licensePlate = query.value("MATRICULE").toString();
        QString firstName = query.value("NOM").toString();
        QString lastName = query.value("PRENOM").toString();
        QString phoneNumber = query.value("TEL").toString();
        QString address = query.value("ADRESSE").toString();
        QString breakdown = query.value("PANNE").toString();
        QString date = query.value("DATEE").toString();

        // Draw the data for each row
        painter.drawText(x, y, licensePlate);
        painter.drawText(x + 320, y, firstName);
        painter.drawText(x + 620, y, lastName);
        painter.drawText(x + 900, y, phoneNumber);
        painter.drawText(x + 1200, y, address);
        painter.drawText(x + 1500, y, breakdown);
        painter.drawText(x + 2050, y, date);
        y += lineHeight;

        // Check if the current page is full and add a new page if needed
        if (y > pdfWriter.height() - 100) {
            pdfWriter.newPage();
            y = 100;
        }
    }

    painter.end();
}
