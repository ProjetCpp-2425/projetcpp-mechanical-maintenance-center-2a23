#include "employe.h"
#include <QSqlQuery>
#include <QSqlError>

Employe::Employe(QString a,QString z,QString e,QString r,QString t,QString y,int u,QString i,int o){
    nom=a;
    prenom=z;
    sexe=e;
    date_emb=r;
    poste=t;
    URl_img=y;
    cin=u;
    tel=i;
    age=o;

}
Employe::Employe(QString a,QString z,QString e,QString r,QString t,int u,QString i,int o){
    nom=a;
    prenom=z;
    sexe=e;
    date_emb=r;
    poste=t;
    //URl_img=y;
    cin=u;
    tel=i;
    age=o;

}
bool Employe::ajout(){
    QSqlQuery query;

    /*QString res = QString::number(cin);
    QString res1 = QString::number(tel);
    QString res2 = QString::number(age);*/

    // prepare() prend la requête en paramètre pour la préparer à l'exécution.
    query.prepare("insert into EMPLOYE (CIN,NOM,PRENOM,AGE,SEXE,TEL,DATEDEMBAUCHE,TYPE,URl)values (:cin,:nom,:prenom,:age,:sexe,:tel,:date_emb,:poste,:url) ");

    // Création des variables liées
    query.bindValue(":cin", cin);
    query.bindValue(":nom", nom);
    query.bindValue(":prenom", prenom);
    query.bindValue(":age", age);
    query.bindValue(":sexe", sexe);
    query.bindValue(":tel", tel);
    query.bindValue(":date_emb", date_emb);
    query.bindValue(":poste", poste);
    query.bindValue(":url", URl_img);

    return query.exec();
    }

bool Employe::supprimer(int cin){
    QSqlQuery query;
    //QString res = QString::number(id);

    query.prepare("DELETE FROM EMPLOYE WHERE CIN = :cin");
    query.bindValue(":cin", cin);

    return query.exec();
}

QSqlQueryModel* Employe::afficher(QString a){
    QSqlQueryModel* model = new QSqlQueryModel();

    if(a=="Salary"){
        model->setQuery("select CIN,NOM,PRENOM,TEL,AGE,SEXE,DATEDEMBAUCHE,TYPE,URL from EMPLOYE ORDER BY HEURE");}
    if(a=="Rate"){
        model->setQuery("select CIN,NOM,PRENOM,TEL,AGE,SEXE,DATEDEMBAUCHE,TYPE,URL from EMPLOYE ORDER BY RATE;");
    }
    if(a=="Seniority"){
        model->setQuery("select CIN,NOM,PRENOM,TEL,AGE,SEXE,DATEDEMBAUCHE,TYPE,URL from EMPLOYE ORDER BY TO_DATE(DATEDEMBAUCHE, 'YYYY-MM-DD');");
    }
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("CIN"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("FIRST NAME"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("LAST NAME"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("PHONE NUMBER"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("AGE"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("SEXE"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("HIRING DATE"));
    model->setHeaderData(7, Qt::Horizontal, QObject::tr("TYPE"));
    model->setHeaderData(8, Qt::Horizontal, QObject::tr("URL"));
    return model;
}
bool Employe::update(){
    QSqlQuery query;
    //QString res = QString::number(id);

    query.prepare("UPDATE EMPLOYE SET CIN=:cin,NOM=:nom,PRENOM=:prenom,AGE=:age,SEXE=:sexe,DATEDEMBAUCHE=:date_emb,TYPE=:poste,TEL=:tel,URL=:url  WHERE CIN=:cin;");

    query.bindValue(":cin", cin);
    query.bindValue(":nom", nom);
    query.bindValue(":prenom", prenom);
    query.bindValue(":age", tel);
    query.bindValue(":sexe", sexe);
    query.bindValue(":tel", age);
    query.bindValue(":date_emb", date_emb);
    query.bindValue(":poste", poste);
    query.bindValue(":url", URl_img);
    return query.exec();
}
bool Employe::update2(){
    QSqlQuery query;
    //QString res = QString::number(id);

    query.prepare("UPDATE EMPLOYE SET CIN=:cin,NOM=:nom,PRENOM=:prenom,AGE=:age,SEXE=:sexe,DATEDEMBAUCHE=:date_emb,TYPE=:poste,TEL=:tel,URL=:url  WHERE CIN=:cin;");

    query.bindValue(":cin", cin);
    query.bindValue(":nom", nom);
    query.bindValue(":prenom", prenom);
    query.bindValue(":age", tel);
    query.bindValue(":sexe", sexe);
    query.bindValue(":tel", age);
    query.bindValue(":date_emb", date_emb);
    query.bindValue(":poste", poste);
    //query.bindValue(":url", URl_img);
    return query.exec();
}
QString Employe::getImageLink(QString cin) {
    QString imageLink;

    // Assuming the database connection is already established


    // Prepare the query
    QSqlQuery query;
    query.prepare("SELECT URl FROM EMPLOYE WHERE CIN = :cin");
    query.bindValue(":cin", cin);

    // Execute the query
    if (query.exec()) {
        // Check if a result was found
        if (query.next()) {
            imageLink = query.value("url").toString();
        } else {
            qWarning() << "No result found for cin:" << cin;
        }
    } else {
        // Print out the error if the query fails
        qWarning() << "Query failed:" << query.lastError().text();
    }

    return imageLink;
}
QString Employe::testfonc(QString nom,QString prenom,QString sexe,QString date_emb,QString poste,QString URl_img,int cin,int tel,int age){
    QString ch="Ajout non effectué.\n Errors : ";
     QRegularExpression regex("\\d");
    if(nom==""||nom.contains(regex)){
        ch=ch+" \n First Name ❌";
    }
    if(prenom==""||prenom.contains(regex)){
        ch=ch+" \n Last Name ❌";
    }
    if(sexe=="Select Gender"){
        ch=ch+" \n Sexe ❌";
    }
    if(poste=="Select job"){
        ch=ch+" \n Job ❌";
    }
    if(URl_img==""){
        ch=ch+" \n Image ❌";
    }
    if(cin>99999999 || cin<10000000){
        ch=ch+" \n Cin ❌";
    }
    if(tel>99999999 || tel<10000000){
        ch=ch+" \n TEL ❌";
    }
    if(age<18){
        ch=ch+" \n Age ❌";
    }
    ch=ch+"\n Click Cancel to exit.";
    return ch;
}
QSqlQueryModel* Employe::afficher2(QString c) {
    QSqlQueryModel* model = new QSqlQueryModel();
    QSqlQuery query;

    // Prepare the query with a placeholder for CIN
    query.prepare("SELECT CIN, NOM, PRENOM, TEL, AGE, SEXE, DATEDEMBAUCHE, TYPE, URL FROM EMPLOYE WHERE CIN like :cin");
    query.bindValue(":cin", c + "%");

    // Execute the query
    query.exec();
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("CIN"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("FIRST NAME"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("LAST NAME"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("PHONE NUMBER"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("AGE"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("SEXE"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("HIRING DATE"));
    model->setHeaderData(7, Qt::Horizontal, QObject::tr("TYPE"));
    model->setHeaderData(8, Qt::Horizontal, QObject::tr("URL"));

    return model;
}
void Employe::exportToPDF(const QString &fileName) {
    // Set up the PDF writer
    QPdfWriter pdfWriter(fileName);
    pdfWriter.setPageSize(QPageSize(QPageSize::A4));
    pdfWriter.setResolution(300);  // Set resolution for quality

    QPainter painter(&pdfWriter);
    painter.setFont(QFont("Arial", 12));

    // Prepare and execute the SQL query
    QSqlQuery query;
    query.prepare("SELECT CIN, NOM, PRENOM, TEL, AGE, SEXE, DATEDEMBAUCHE, TYPE, RATE FROM EMPLOYE");
    if (!query.exec()) {
        QMessageBox::warning(nullptr, "Database Error", query.lastError().text());
        return;
    }

    // Set up initial positions
    int x = 100;          // Starting x position
    int y = 100;          // Starting y position
    int lineHeight = 100;  // Increased height between lines for better readability

    // Header
    painter.drawText(x, y, "Employee Data Export");
    y += lineHeight;

    // Draw table headers
    painter.drawText(x, y, "CIN");
    painter.drawText(x + 300, y, "First Name");
    painter.drawText(x + 600, y, "Last Name");
    painter.drawText(x + 900, y, "Phone Num");
    painter.drawText(x + 1300, y, "Age");
    painter.drawText(x + 1500, y, "Sex");
    painter.drawText(x + 1700, y, "Hiring Date");
    painter.drawText(x + 2100, y, "Job Type");
    painter.drawText(x + 2400, y, "Rate");
    y += lineHeight;

    // Retrieve and draw data rows
    while (query.next()) {
        QString cin = query.value("CIN").toString();
        QString nom = query.value("NOM").toString();
        QString prenom = query.value("PRENOM").toString();
        QString tel = query.value("TEL").toString();
        int age = query.value("AGE").toInt();
        QString sexe = query.value("SEXE").toString();
        QString dateDembauche = query.value("DATEDEMBAUCHE").toDate().toString("yyyy-MM-dd");
        QString type = query.value("TYPE").toString();
        double rate = query.value("RATE").toDouble();

        // Draw the data for each employee
        painter.drawText(x, y, cin);
        painter.drawText(x + 300, y, nom);
        painter.drawText(x + 600, y, prenom);
        painter.drawText(x + 900, y, tel);
        painter.drawText(x + 1200, y, QString::number(age));
        painter.drawText(x + 1500, y, sexe);
        painter.drawText(x + 1800, y, dateDembauche);
        painter.drawText(x + 2100, y, type);
        painter.drawText(x + 2400, y, QString::number(rate, 'f', 2));
        y += lineHeight;

        // Check if the current page is full and add a new page if needed
        if (y > pdfWriter.height() - 100) {
            pdfWriter.newPage();
            y = 100;  // Reset y position for the new page
        }
    }

    painter.end();
}
