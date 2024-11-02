/********************************************************************************
** Form generated from reading UI file 'workshop.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORKSHOP_H
#define UI_WORKSHOP_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_workshop
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QComboBox *comboBox;
    QPushButton *pushButton_6;
    QTableWidget *tableWidget;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_7;
    QPushButton *pushButton_10;
    QPushButton *pushButton_13;
    QWidget *tab_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit_2;
    QLabel *label_5;
    QLineEdit *lineEdit_3;
    QLabel *label_10;
    QLabel *label_11;
    QPushButton *pushButton_12;
    QLabel *label_12;
    QSpinBox *spinBox;
    QSpinBox *spinBox_2;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_5;
    QWidget *tab_3;
    QGraphicsView *graphicsView;
    QGraphicsView *graphicsView_2;

    void setupUi(QWidget *workshop)
    {
        if (workshop->objectName().isEmpty())
            workshop->setObjectName(QString::fromUtf8("workshop"));
        workshop->resize(1657, 987);
        groupBox = new QGroupBox(workshop);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(-20, -40, 261, 871));
        groupBox->setStyleSheet(QString::fromUtf8("#groupBox{\n"
"background:white;}"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 50, 181, 81));
        label->setPixmap(QPixmap(QString::fromUtf8(":/image/ressource/fix-it.png")));
        label->setScaledContents(true);
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(-20, 190, 291, 81));
        pushButton->setStyleSheet(QString::fromUtf8("#pushButton{\n"
"  text-decoration: none;\n"
"  border:none;\n"
"  font-size: 20px;\n"
"  color: #555;\n"
"\n"
"}\n"
"#pushButton:hover{\n"
"background-color: #e9ecef;\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/ressource/gestion des employes.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(50, 50));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(-60, 290, 331, 81));
        pushButton_2->setStyleSheet(QString::fromUtf8("#pushButton_2{\n"
"  text-decoration: none;\n"
"  border:none;\n"
"  font-size: 20px;\n"
"  color: #555;\n"
"}\n"
"#pushButton_2:hover{\n"
" background-color: #e9ecef;\n"
"}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/image/ressource/gestion des clients.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);
        pushButton_2->setIconSize(QSize(50, 50));
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(-10, 390, 291, 81));
        pushButton_3->setStyleSheet(QString::fromUtf8("#pushButton_3\n"
"{\n"
"  text-decoration: none;\n"
"  border:none;\n"
"  font-size: 20px;\n"
"  color: #555;\n"
"}\n"
"#pushButton_3:hover{\n"
" background-color: #e9ecef;\n"
"}"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/image/ressource/gestion des equipements.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon2);
        pushButton_3->setIconSize(QSize(50, 50));
        pushButton_4 = new QPushButton(groupBox);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(-20, 490, 291, 81));
        pushButton_4->setStyleSheet(QString::fromUtf8("#pushButton_4\n"
"{\n"
"  text-decoration: none;\n"
"  border:none;\n"
"  font-size: 20px;\n"
"  color: #555;\n"
"}\n"
"#pushButton_4:hover{\n"
" background-color: #e9ecef;\n"
"}"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/image/ressource/gestion des services.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon3);
        pushButton_4->setIconSize(QSize(50, 50));
        pushButton_5 = new QPushButton(groupBox);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(-20, 590, 301, 81));
        pushButton_5->setStyleSheet(QString::fromUtf8("#pushButton_5\n"
"{\n"
"  text-decoration: none;\n"
"  border:none;\n"
"  font-size: 20px;\n"
"  color: #555;\n"
"background-color:#F8943F;\n"
"}\n"
"#pushButton_5:hover{\n"
"  background-color: #dd914f;\n"
"}"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/image/ressource/gestion des ateliers.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon4);
        pushButton_5->setIconSize(QSize(50, 50));
        tabWidget = new QTabWidget(workshop);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setEnabled(true);
        tabWidget->setGeometry(QRect(400, 100, 931, 641));
        tabWidget->setStyleSheet(QString::fromUtf8("QTabWidget::pane {\n"
"    border: 1px solid #e0e0e0;\n"
"    border-radius: 6px;\n"
"    margin-top: -1px;\n"
"    background: #ffffff;\n"
"}\n"
"\n"
"QTabBar::tab {\n"
"    background: #f7f7f7;\n"
"    border: 1px solid #dcdcdc;\n"
"    padding: 10px 15px;\n"
"    margin-right: 35px;\n"
"	margin-left:60px;\n"
"	border-bottom:none;\n"
"    border-top-left-radius: 6px;\n"
"    border-top-right-radius: 6px;\n"
"    width:180px;\n"
"}\n"
"\n"
"QTabBar::tab:selected {\n"
"    background: #ffffff;\n"
"    border-color: #e0e0e0;\n"
"}\n"
"\n"
"QTabBar::tab:hover {\n"
"    background-color: #dd914f;\n"
"  color: white;\n"
"}\n"
"\n"
"QTabBar {\n"
"    alignment: center;\n"
"}\n"
"QTabBar::tab:selected:hover {\n"
"   background: #ffffff;\n"
"   color: black;\n"
"}"));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setIconSize(QSize(30, 30));
        tabWidget->setElideMode(Qt::ElideNone);
        tabWidget->setDocumentMode(false);
        tabWidget->setTabsClosable(false);
        tabWidget->setMovable(false);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tab->setEnabled(true);
        lineEdit = new QLineEdit(tab);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(190, 45, 351, 41));
        lineEdit->setStyleSheet(QString::fromUtf8("#lineEdit{\n"
"  border: 2px solid #F8943F;\n"
"  border-radius: 15px;\n"
"}"));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(500, 50, 31, 31));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/image/ressource/rech.png")));
        label_2->setScaledContents(true);
        comboBox = new QComboBox(tab);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(570, 48, 111, 35));
        comboBox->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    background-color: white; \n"
"    border: 1px solid #cccccc; \n"
"    border-radius: 5px; \n"
"    padding: 5px 10px; \n"
"    font: 14px \"Arial\"; \n"
"    color: #333333;\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 20px;\n"
"    border-left: 1px solid #cccccc; /* Divider between text and arrow */\n"
"	border-left:none;\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"    image: url(../../ressource/icon.png); /* Custom arrow icon */\n"
"    width: 10px;\n"
"    height: 10px;\n"
"	\n"
"}\n"
"\n"
"QComboBox QAbstractItemView {\n"
"    border: 1px solid #cccccc; /* Border for dropdown */\n"
"    background-color: #ffffff; /* White background for the list */\n"
"    selection-background-color: #0078d7; /* Blue background for selected item */\n"
"    selection-color: #ffffff; /* White text for selected item */\n"
"	\n"
"}"));
        pushButton_6 = new QPushButton(tab);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(710, 50, 71, 29));
        pushButton_6->setStyleSheet(QString::fromUtf8("#pushButton_6{\n"
"padding: 8px 16px;\n"
"  background-color: #F8943F;\n"
"  color: white;\n"
"  border: none;\n"
"  border-radius: 7px;\n"
"}\n"
"#pushButton_6:hover{\n"
"background-color: #dd914f;}"));
        tableWidget = new QTableWidget(tab);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        if (tableWidget->rowCount() < 7)
            tableWidget->setRowCount(7);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(5, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(6, __qtablewidgetitem9);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(290, 130, 311, 241));
        tableWidget->setStyleSheet(QString::fromUtf8("#tableWidget{\n"
"border: 0.5px solid black;\n"
"}\n"
""));
        pushButton_8 = new QPushButton(tab);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(470, 450, 131, 31));
        pushButton_8->setStyleSheet(QString::fromUtf8("#pushButton_8\n"
"{\n"
"padding: 8px 16px;\n"
"  background-color: #F8943F;\n"
"  color: white;\n"
"  border: none;\n"
"  border-radius:7px;\n"
"}\n"
"#pushButton_8:hover{\n"
"background-color: #dd914f;}"));
        pushButton_9 = new QPushButton(tab);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(290, 450, 131, 31));
        pushButton_9->setStyleSheet(QString::fromUtf8("#pushButton_9\n"
"{\n"
"padding: 8px 16px;\n"
"  background-color: #F8943F;\n"
"  color: white;\n"
"  border: none;\n"
"  border-radius: 7px;\n"
"}\n"
"#pushButton_9:hover{\n"
"background-color: #dd914f;}"));
        pushButton_7 = new QPushButton(tab);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(690, 500, 81, 29));
        pushButton_7->setStyleSheet(QString::fromUtf8("#pushButton_7\n"
"{\n"
"padding: 8px 16px;\n"
"  background-color: #F8943F;\n"
"  color: white;\n"
"  border: none;\n"
"  border-radius: 7px;\n"
"}\n"
"#pushButton_7:hover{\n"
"background-color: #dd914f;}"));
        pushButton_10 = new QPushButton(tab);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(790, 500, 71, 29));
        pushButton_10->setStyleSheet(QString::fromUtf8("#pushButton_10\n"
"{\n"
"padding: 8px 16px;\n"
"  background-color: #F8943F;\n"
"  color: white;\n"
"  border: none;\n"
"  border-radius: 7px;\n"
"}\n"
"#pushButton_10:hover{\n"
"background-color: #dd914f;}"));
        pushButton_13 = new QPushButton(tab);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        pushButton_13->setGeometry(QRect(640, 450, 131, 31));
        pushButton_13->setStyleSheet(QString::fromUtf8("#pushButton_13\n"
"{\n"
"padding: 8px 16px;\n"
"  background-color: #F8943F;\n"
"  color: white;\n"
"  border: none;\n"
"  border-radius:7px;\n"
"}\n"
"#pushButton_13:hover{\n"
"background-color: #dd914f;}"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/image/ressource/list.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab, icon5, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tab_2->setEnabled(true);
        tab_2->setStyleSheet(QString::fromUtf8("margin:50px"));
        label_3 = new QLabel(tab_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(-10, 30, 941, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Verdana")});
        font.setPointSize(19);
        font.setBold(false);
        font.setKerning(true);
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("#label_3{\n"
"border:none;\n"
"border-top: 2px solid #dd914f;\n"
"}"));
        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(90, 130, 81, 51));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Verdana")});
        font1.setPointSize(12);
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("margin:0px;"));
        label_4->setScaledContents(false);
        lineEdit_2 = new QLineEdit(tab_2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(220, 140, 251, 41));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit_2->sizePolicy().hasHeightForWidth());
        lineEdit_2->setSizePolicy(sizePolicy);
        lineEdit_2->setAcceptDrops(true);
        lineEdit_2->setStyleSheet(QString::fromUtf8("\n"
"#lineEdit_2{\n"
"	border: 1px solid #ccc;\n"
"    border-radius: 8px;\n"
"    font-size: 16px;\n"
"    background-color: #f9f9f9;\n"
"	margin:0px;\n"
"	padding:0px;margin:0px;\n"
"}\n"
"#lineEdit_2:focus{\n"
"border-color: #dd914f;\n"
"    outline: none;\n"
"    background-color: #fff;\n"
"}"));
        lineEdit_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_5 = new QLabel(tab_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(90, 180, 121, 51));
        label_5->setFont(font1);
        label_5->setStyleSheet(QString::fromUtf8("margin:0px;"));
        label_5->setScaledContents(false);
        lineEdit_3 = new QLineEdit(tab_2);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(220, 190, 251, 41));
        sizePolicy.setHeightForWidth(lineEdit_3->sizePolicy().hasHeightForWidth());
        lineEdit_3->setSizePolicy(sizePolicy);
        lineEdit_3->setAcceptDrops(true);
        lineEdit_3->setStyleSheet(QString::fromUtf8("\n"
"#lineEdit_3{\n"
"	border: 1px solid #ccc;\n"
"    border-radius: 8px;\n"
"    font-size: 16px;\n"
"    background-color: #f9f9f9;\n"
"	margin:0px;\n"
"	padding:0px;margin:0px;\n"
"}\n"
"#lineEdit_3:focus{\n"
"border-color: #dd914f;\n"
"    outline: none;\n"
"    background-color: #fff;\n"
"}"));
        lineEdit_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_10 = new QLabel(tab_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(500, 180, 121, 51));
        label_10->setFont(font1);
        label_10->setStyleSheet(QString::fromUtf8("margin:0px;"));
        label_10->setScaledContents(false);
        label_11 = new QLabel(tab_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(500, 130, 151, 51));
        label_11->setFont(font1);
        label_11->setStyleSheet(QString::fromUtf8("margin:0px;"));
        label_11->setScaledContents(false);
        pushButton_12 = new QPushButton(tab_2);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setGeometry(QRect(370, 480, 181, 51));
        pushButton_12->setStyleSheet(QString::fromUtf8("#pushButton_12\n"
"{\n"
"	margin:0px;\n"
"padding: 8px 16px;\n"
"  background-color: #dd914f;\n"
"  color: white;\n"
"  border: none;\n"
"  border-radius: 10px;\n"
"}\n"
"#pushButton_12:hover{\n"
"background-color: #c87f42;}"));
        label_12 = new QLabel(tab_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(90, 240, 121, 51));
        label_12->setFont(font1);
        label_12->setStyleSheet(QString::fromUtf8("margin:0px;"));
        label_12->setScaledContents(false);
        spinBox = new QSpinBox(tab_2);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(660, 140, 251, 31));
        spinBox->setStyleSheet(QString::fromUtf8("\n"
"#spinBox{\n"
"	border: 1px solid #ccc;\n"
"    border-radius: 8px;\n"
"    font-size: 16px;\n"
"    background-color: #f9f9f9;\n"
"	margin:0px;\n"
"	padding:0px;margin:0px;\n"
"}\n"
"#spinBox:focus{\n"
"border-color: #dd914f;\n"
"    outline: none;\n"
"    background-color: #fff;\n"
"}"));
        spinBox_2 = new QSpinBox(tab_2);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setGeometry(QRect(660, 190, 251, 31));
        spinBox_2->setStyleSheet(QString::fromUtf8("\n"
"#spinBox_2{\n"
"	border: 1px solid #ccc;\n"
"    border-radius: 8px;\n"
"    font-size: 16px;\n"
"    background-color: #f9f9f9;\n"
"	margin:0px;\n"
"	padding:0px;margin:0px;\n"
"}\n"
"#spinBox_2:focus{\n"
"border-color: #dd914f;\n"
"    outline: none;\n"
"    background-color: #fff;\n"
"}"));
        checkBox = new QCheckBox(tab_2);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(220, 260, 161, 24));
        checkBox->setStyleSheet(QString::fromUtf8("margin:0px;"));
        checkBox_2 = new QCheckBox(tab_2);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setGeometry(QRect(220, 290, 221, 51));
        checkBox_2->setStyleSheet(QString::fromUtf8("margin:0px;"));
        checkBox_3 = new QCheckBox(tab_2);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));
        checkBox_3->setGeometry(QRect(220, 340, 121, 51));
        checkBox_3->setStyleSheet(QString::fromUtf8("margin:0px;"));
        checkBox_4 = new QCheckBox(tab_2);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));
        checkBox_4->setGeometry(QRect(220, 400, 131, 24));
        checkBox_4->setStyleSheet(QString::fromUtf8("margin:0px;"));
        checkBox_5 = new QCheckBox(tab_2);
        checkBox_5->setObjectName(QString::fromUtf8("checkBox_5"));
        checkBox_5->setGeometry(QRect(220, 440, 101, 24));
        checkBox_5->setStyleSheet(QString::fromUtf8("margin:0px;"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/image/ressource/ajout.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab_2, icon6, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        graphicsView = new QGraphicsView(tab_3);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(80, 30, 361, 541));
        graphicsView->setStyleSheet(QString::fromUtf8("#graphicsView{border-radius: 13px;background-color:#eae6e6}\n"
""));
        graphicsView_2 = new QGraphicsView(tab_3);
        graphicsView_2->setObjectName(QString::fromUtf8("graphicsView_2"));
        graphicsView_2->setGeometry(QRect(530, 30, 361, 541));
        graphicsView_2->setStyleSheet(QString::fromUtf8("#graphicsView_2{border-radius: 13px;background-color:#eae6e6}\n"
""));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/image/ressource/stat.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab_3, icon7, QString());

        retranslateUi(workshop);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(workshop);
    } // setupUi

    void retranslateUi(QWidget *workshop)
    {
        workshop->setWindowTitle(QCoreApplication::translate("workshop", "Form", nullptr));
        groupBox->setTitle(QString());
        label->setText(QString());
        pushButton->setText(QCoreApplication::translate("workshop", "    Employees", nullptr));
        pushButton_2->setText(QCoreApplication::translate("workshop", "    Clients", nullptr));
        pushButton_3->setText(QCoreApplication::translate("workshop", "   Equipements", nullptr));
        pushButton_4->setText(QCoreApplication::translate("workshop", "    Services ", nullptr));
        pushButton_5->setText(QCoreApplication::translate("workshop", "    Workshops", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("workshop", " Search", nullptr));
        label_2->setText(QString());
        comboBox->setItemText(0, QCoreApplication::translate("workshop", "      ID", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("workshop", "      Adresse", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("workshop", "      Type Of Service", nullptr));

        pushButton_6->setText(QCoreApplication::translate("workshop", "Filter", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("workshop", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("workshop", "Adresse", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("workshop", "Type Of Service", nullptr));
        pushButton_8->setText(QCoreApplication::translate("workshop", "Chat-Bot", nullptr));
        pushButton_9->setText(QCoreApplication::translate("workshop", "Generate PDF", nullptr));
        pushButton_7->setText(QCoreApplication::translate("workshop", "Update", nullptr));
        pushButton_10->setText(QCoreApplication::translate("workshop", "Delete", nullptr));
        pushButton_13->setText(QCoreApplication::translate("workshop", "Alert", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("workshop", "List Of Workshop", nullptr));
        label_3->setText(QCoreApplication::translate("workshop", "                                    EMPLOYEE FORM", nullptr));
        label_4->setText(QCoreApplication::translate("workshop", "ID", nullptr));
        lineEdit_2->setPlaceholderText(QCoreApplication::translate("workshop", "  Enter ID", nullptr));
        label_5->setText(QCoreApplication::translate("workshop", "Address", nullptr));
        lineEdit_3->setPlaceholderText(QCoreApplication::translate("workshop", "  Enter Address", nullptr));
        label_10->setText(QCoreApplication::translate("workshop", "Number of \n"
" Services", nullptr));
        label_11->setText(QCoreApplication::translate("workshop", "Capacity", nullptr));
        pushButton_12->setText(QCoreApplication::translate("workshop", "Confirm Add", nullptr));
        label_12->setText(QCoreApplication::translate("workshop", "Job", nullptr));
        checkBox->setText(QCoreApplication::translate("workshop", "Engine Diagnostics", nullptr));
        checkBox_2->setText(QCoreApplication::translate("workshop", "Electrical System \n"
" Diagnostics", nullptr));
        checkBox_3->setText(QCoreApplication::translate("workshop", "Break System \n"
" Diagnostics", nullptr));
        checkBox_4->setText(QCoreApplication::translate("workshop", "Tire Inspection", nullptr));
        checkBox_5->setText(QCoreApplication::translate("workshop", "Painting Job", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("workshop", "Add Workshop", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("workshop", "Statistics", nullptr));
    } // retranslateUi

};

namespace Ui {
    class workshop: public Ui_workshop {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORKSHOP_H
