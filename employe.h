#ifndef EMPLOYE_H
#define EMPLOYE_H
#include<QString>
#include<QSqlQuery>
#include<QSqlQueryModel>
#include <QPdfWriter>
#include <QPainter>
#include <QMessageBox>
#include <QFont>
#include <QDate>
#include <QRegularExpression>

class Employe
{
    private:
        QString nom,prenom,sexe,date_emb,poste,URl_img,tel;
        int cin,age;
        float salaire,rate;
        QString imgfile;
        const int prix=10;
    public:
        //constructeurs
        Employe(){};
        Employe(QString,QString,QString,QString,QString,QString,int,QString,int);
        Employe(QString a,QString z,QString e,QString r,QString t,int u,QString i,int o);
        //destructeur


        //Getters
        QString getnom(){return nom;}
        QString getprenom(){return prenom;}
        QString getsexe(){return sexe;}
        QString getdate_emb(){return date_emb;}
        QString getposte(){return poste;}
        QString getURl_img(){return URl_img;}
        QString gettel(){return tel;}
        int getcin(){return cin;}
        int getage(){return age;}
        float getrate(){return rate;}
        float getsalaire(){return salaire;}

        //setters
        void setnom(QString a){nom=a;}
        void setprenom(QString a){prenom=a;}
        void setsexe(QString a){sexe=a;}
        void setdate_emb(QString a){date_emb=a;}
        void setposte(QString a){poste=a;}
        void setURl_img(QString a){URl_img=a;}
        void settel(QString a){tel=a;}
        void setcin(int a){cin=a;}
        void setage(int a){age=a;}
        void setrate(float a){rate=a;}
        void setsalaire(float a){salaire=a;}
        //crud
        bool ajout();
        QSqlQueryModel* afficher(QString);
        QSqlQueryModel* afficher2(QString c);
        bool supprimer(int);
        bool update();
        bool update2();
        QString getImageLink(QString cin);
        QString testfonc(QString nom,QString prenom,QString sexe,QString date_emb,QString poste,QString URl_img,int cin,int tel,int age);
        void exportToPDF(const QString &fileName);

};

#endif // EMPLOYE_H
