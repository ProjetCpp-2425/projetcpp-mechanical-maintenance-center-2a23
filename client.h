#ifndef CLIENT_H
#define CLIENT_H
#include<QString>
#include<QSqlQuery>
#include<QSqlQueryModel>
#include <QPdfWriter>
#include <QPainter>
#include <QFont>
#include <QRegularExpression>

class Client
{ QString mat,nom,prenom,ad,panne,date,url,tel;

public:

    //Constructeurs
    Client(){};
    Client(QString,QString,QString,QString,QString,QString,QString,QString);
    Client(QString,QString,QString,QString,QString,QString,QString);
    QString testfonc(QString m,int t,QString n,QString p,QString a,QString pa,QString u);
    QSqlQueryModel* afficher2(QString mat);
    //Getters
    QString getMat(){return mat;}
    QString getNom(){return nom;}
    QString getPrenom(){return prenom;}
    QString getAd(){return ad;}
    QString getPanne(){return panne;}
    QString getDate(){return date;}
    QString getUrl(){return url;}
    QString getTel(){return tel;}

    //Setters
    void setMat(QString m){mat=m;}
    void setNom(QString m){nom=m;}
    void setPrenom(QString m){prenom=m;}
    void setAd(QString m){ad=m;}
    void setPanne(QString m){panne=m;}
    void setDate(QString m){date=m;}
    void setUrl(QString m){url=m;}
    void setTel(QString m){tel=m;}

    //CRUD
    bool ajouter();
    QSqlQueryModel * afficher(QString);
    bool supprimer(QString);
    bool modifier();



    void exportToPDF(const QString &fileName);
};

#endif // CLIENT_H
