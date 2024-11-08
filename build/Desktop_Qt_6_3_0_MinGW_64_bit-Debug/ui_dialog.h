/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGroupBox *groupBox;
    QLabel *label_14;
    QLabel *label_18;
    QComboBox *comboBox_4;
    QComboBox *comboBox_3;
    QLabel *label_22;
    QLineEdit *lineEdit_9;
    QLineEdit *lineEdit_8;
    QLabel *label_17;
    QLineEdit *lineEdit_11;
    QLabel *label_16;
    QLabel *label_20;
    QLineEdit *lineEdit_13;
    QLabel *label_15;
    QLineEdit *lineEdit_10;
    QDateEdit *dateEdit;
    QLabel *label_21;
    QPushButton *pushButton_15;
    QPushButton *pushButton_16;
    QLabel *label;
    QWidget *page_2;
    QLabel *label_2;
    QGroupBox *groupBox_2;
    QLabel *label_30;
    QLabel *label_32;
    QLineEdit *lineEdit_18;
    QLineEdit *lineEdit_19;
    QLabel *label_33;
    QLineEdit *lineEdit_20;
    QLabel *label_34;
    QLabel *label_35;
    QLineEdit *lineEdit_21;
    QLabel *label_36;
    QDateEdit *dateEdit_3;
    QLabel *label_37;
    QPushButton *pushButton_19;
    QPushButton *pushButton_20;
    QLineEdit *lineEdit_23;
    QComboBox *comboBox_8;
    QLabel *label_3;

    void setupUi(QWidget *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(844, 773);
        stackedWidget = new QStackedWidget(Dialog);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(60, 0, 801, 781));
        stackedWidget->setStyleSheet(QString::fromUtf8("margin:0px"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        groupBox = new QGroupBox(page);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 90, 691, 671));
        groupBox->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-radius:20px;\n"
"border: solid 5px black;"));
        label_14 = new QLabel(groupBox);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(150, 130, 81, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Verdana")});
        font.setPointSize(12);
        label_14->setFont(font);
        label_14->setStyleSheet(QString::fromUtf8("margin:0px;"));
        label_14->setScaledContents(false);
        label_18 = new QLabel(groupBox);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(150, 330, 81, 51));
        label_18->setFont(font);
        label_18->setStyleSheet(QString::fromUtf8("margin:0px;"));
        label_18->setScaledContents(false);
        comboBox_4 = new QComboBox(groupBox);
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->setObjectName(QString::fromUtf8("comboBox_4"));
        comboBox_4->setGeometry(QRect(310, 440, 251, 41));
        comboBox_4->setStyleSheet(QString::fromUtf8("#comboBox_4 {\n"
"    border: 1px solid #ccc; /* Use the same border color */\n"
"    border-radius: 8px; /* Match border radius with lineEdit_7 */\n"
"    background-color: #f9f9f9; /* Same background color as lineEdit_7 */\n"
"    padding: 0px; /* Adjust padding to match */\n"
"    margin: 0px; /* Consistent margin */\n"
"    font-size: 16px; /* Match font size */\n"
"}\n"
"\n"
"#comboBox_4::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 20px;\n"
"    border-left: none; /* No left border */\n"
"}\n"
"\n"
"#comboBox_4::down-arrow {\n"
"    image: url(../../ressource/icon.png); /* Custom arrow icon */\n"
"    width: 10px;\n"
"    height: 10px;\n"
"}\n"
"\n"
"#comboBox_4 QAbstractItemView {\n"
"    border: 1px solid #ccc; /* Use the same border color */\n"
"    background-color: #ffffff; /* White background for the list */\n"
"    selection-background-color: #0078d7; /* Blue background for selected item */\n"
"    selection-color: #ffffff; /* White text fo"
                        "r selected item */\n"
"    padding: 5px; /* Padding around each item */\n"
"    font-size: 14px; /* Font size for dropdown items */\n"
"    min-width: 120px; /* Minimum width to avoid truncation */\n"
"    border-radius: 8px; /* Match border radius with lineEdit_7 */\n"
"    margin: 0px; /* Consistent margin */\n"
"}\n"
"\n"
"#comboBox_3 QAbstractItemView::item {\n"
"    padding: 3px 15px; /* Adjust item padding for better spacing */\n"
"    text-align: center; /* Center-align text within each item */\n"
"    margin: 0px; /* Consistent margin */\n"
"}\n"
""));
        comboBox_3 = new QComboBox(groupBox);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
        comboBox_3->setGeometry(QRect(310, 290, 251, 41));
        comboBox_3->setStyleSheet(QString::fromUtf8("#comboBox_3 {\n"
"    border: 1px solid #ccc; /* Use the same border color */\n"
"    border-radius: 8px; /* Match border radius with lineEdit_7 */\n"
"    background-color: #f9f9f9; /* Same background color as lineEdit_7 */\n"
"    padding: 0px; /* Adjust padding to match */\n"
"    margin: 0px; /* Consistent margin */\n"
"    font-size: 16px; /* Match font size */\n"
"}\n"
"\n"
"#comboBox_3::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 20px;\n"
"    border-left: none; /* No left border */\n"
"}\n"
"\n"
"#comboBox_3::down-arrow {\n"
"    image: url(../../ressource/icon.png); /* Custom arrow icon */\n"
"    width: 10px;\n"
"    height: 10px;\n"
"}\n"
"\n"
"#comboBox_3 QAbstractItemView {\n"
"    border: 1px solid #ccc; /* Use the same border color */\n"
"    background-color: #ffffff; /* White background for the list */\n"
"    selection-background-color: #0078d7; /* Blue background for selected item */\n"
"    selection-color: #ffffff; /* White text fo"
                        "r selected item */\n"
"    padding: 5px; /* Padding around each item */\n"
"    font-size: 14px; /* Font size for dropdown items */\n"
"    min-width: 120px; /* Minimum width to avoid truncation */\n"
"    border-radius: 8px; /* Match border radius with lineEdit_7 */\n"
"    margin: 0px; /* Consistent margin */\n"
"}\n"
"\n"
"#comboBox_3 QAbstractItemView::item {\n"
"    padding: 3px 15px; /* Adjust item padding for better spacing */\n"
"    text-align: center; /* Center-align text within each item */\n"
"    margin: 0px; /* Consistent margin */\n"
"}\n"
""));
        label_22 = new QLabel(groupBox);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(150, 480, 141, 51));
        label_22->setFont(font);
        label_22->setStyleSheet(QString::fromUtf8("margin:0px;"));
        label_22->setScaledContents(false);
        lineEdit_9 = new QLineEdit(groupBox);
        lineEdit_9->setObjectName(QString::fromUtf8("lineEdit_9"));
        lineEdit_9->setGeometry(QRect(310, 190, 251, 41));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit_9->sizePolicy().hasHeightForWidth());
        lineEdit_9->setSizePolicy(sizePolicy);
        lineEdit_9->setAcceptDrops(true);
        lineEdit_9->setStyleSheet(QString::fromUtf8("\n"
"#lineEdit_9{\n"
"	border: 1px solid #ccc;\n"
"    border-radius: 8px;\n"
"    font-size: 16px;\n"
"    background-color: #f9f9f9;\n"
"	margin:0px;\n"
"	padding:0px;margin:0px;\n"
"}\n"
"#lineEdit_9:focus{\n"
"border-color: #dd914f;\n"
"    outline: none;\n"
"    background-color: #fff;\n"
"}"));
        lineEdit_9->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        lineEdit_8 = new QLineEdit(groupBox);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(310, 140, 251, 41));
        sizePolicy.setHeightForWidth(lineEdit_8->sizePolicy().hasHeightForWidth());
        lineEdit_8->setSizePolicy(sizePolicy);
        lineEdit_8->setAcceptDrops(true);
        lineEdit_8->setStyleSheet(QString::fromUtf8("\n"
"#lineEdit_8{\n"
"	border: 1px solid #ccc;\n"
"    border-radius: 8px;\n"
"    font-size: 16px;\n"
"    background-color: #f9f9f9;\n"
"	margin:0px;\n"
"	padding:0px;margin:0px;\n"
"}\n"
"#lineEdit_8:focus{\n"
"border-color: #dd914f;\n"
"    outline: none;\n"
"    background-color: #fff;\n"
"}"));
        lineEdit_8->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        lineEdit_8->setReadOnly(true);
        label_17 = new QLabel(groupBox);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(150, 280, 81, 51));
        label_17->setFont(font);
        label_17->setStyleSheet(QString::fromUtf8("margin:0px;"));
        label_17->setScaledContents(false);
        lineEdit_11 = new QLineEdit(groupBox);
        lineEdit_11->setObjectName(QString::fromUtf8("lineEdit_11"));
        lineEdit_11->setGeometry(QRect(310, 240, 251, 41));
        sizePolicy.setHeightForWidth(lineEdit_11->sizePolicy().hasHeightForWidth());
        lineEdit_11->setSizePolicy(sizePolicy);
        lineEdit_11->setAcceptDrops(true);
        lineEdit_11->setStyleSheet(QString::fromUtf8("\n"
"#lineEdit_11{\n"
"	border: 1px solid #ccc;\n"
"    border-radius: 8px;\n"
"    font-size: 16px;\n"
"    background-color: #f9f9f9;\n"
"	margin:0px;\n"
"	padding:0px;margin:0px;\n"
"}\n"
"#lineEdit_11:focus{\n"
"border-color: #dd914f;\n"
"    outline: none;\n"
"    background-color: #fff;\n"
"}"));
        lineEdit_11->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        label_16 = new QLabel(groupBox);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(150, 230, 111, 51));
        label_16->setFont(font);
        label_16->setStyleSheet(QString::fromUtf8("margin:0px;"));
        label_16->setScaledContents(false);
        label_20 = new QLabel(groupBox);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(150, 430, 121, 51));
        label_20->setFont(font);
        label_20->setStyleSheet(QString::fromUtf8("margin:0px;"));
        label_20->setScaledContents(false);
        lineEdit_13 = new QLineEdit(groupBox);
        lineEdit_13->setObjectName(QString::fromUtf8("lineEdit_13"));
        lineEdit_13->setGeometry(QRect(310, 390, 251, 41));
        sizePolicy.setHeightForWidth(lineEdit_13->sizePolicy().hasHeightForWidth());
        lineEdit_13->setSizePolicy(sizePolicy);
        lineEdit_13->setAcceptDrops(true);
        lineEdit_13->setStyleSheet(QString::fromUtf8("\n"
"#lineEdit_13{\n"
"	border: 1px solid #ccc;\n"
"    border-radius: 8px;\n"
"    font-size: 16px;\n"
"    background-color: #f9f9f9;\n"
"	margin:0px;\n"
"	padding:0px;margin:0px;\n"
"}\n"
"#lineEdit_13:focus{\n"
"border-color: #dd914f;\n"
"    outline: none;\n"
"    background-color: #fff;\n"
"}"));
        lineEdit_13->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        label_15 = new QLabel(groupBox);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(150, 180, 121, 51));
        label_15->setFont(font);
        label_15->setStyleSheet(QString::fromUtf8("margin:0px;"));
        label_15->setScaledContents(false);
        lineEdit_10 = new QLineEdit(groupBox);
        lineEdit_10->setObjectName(QString::fromUtf8("lineEdit_10"));
        lineEdit_10->setGeometry(QRect(310, 340, 251, 41));
        sizePolicy.setHeightForWidth(lineEdit_10->sizePolicy().hasHeightForWidth());
        lineEdit_10->setSizePolicy(sizePolicy);
        lineEdit_10->setAcceptDrops(true);
        lineEdit_10->setStyleSheet(QString::fromUtf8("\n"
"#lineEdit_10{\n"
"	border: 1px solid #ccc;\n"
"    border-radius: 8px;\n"
"    font-size: 16px;\n"
"    background-color: #f9f9f9;\n"
"	margin:0px;\n"
"	padding:0px;margin:0px;\n"
"}\n"
"#lineEdit_10:focus{\n"
"border-color: #dd914f;\n"
"    outline: none;\n"
"    background-color: #fff;\n"
"}"));
        lineEdit_10->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        dateEdit = new QDateEdit(groupBox);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(320, 490, 241, 31));
        dateEdit->setStyleSheet(QString::fromUtf8("#dateEdit {\n"
"    border: 1px solid #ccc; /* Same border color */\n"
"    border-radius: 8px; /* Match border radius with comboBox_3 */\n"
"    background-color: #f9f9f9; /* Same background color as comboBox_3 */\n"
"    padding: 0px; /* Adjust padding to match */\n"
"    margin: 0px; /* Consistent margin */\n"
"    font-size: 16px; /* Match font size */\n"
"}\n"
"\n"
"#dateEdit:focus {\n"
"    border-color: #dd914f; /* Change border color on focus */\n"
"    outline: none; /* Remove outline */\n"
"    background-color: #ffffff; /* White background on focus */\n"
"}\n"
"\n"
"#dateEdit::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right; /* Position of the drop-down button */\n"
"    width: 20px; /* Width of the drop-down button */\n"
"    border-left: none; /* No left border */\n"
"}\n"
"\n"
"#dateEdit::down-arrow {\n"
"   \n"
"    width: 10px; /* Width of the icon */\n"
"    height: 10px; /* Height of the icon */\n"
"}\n"
"\n"
"#dateEdit QCalendarWidget {\n"
"    border: "
                        "1px solid #ccc; /* Use the same border color */\n"
"    background-color: #ffffff; /* White background for the calendar */\n"
"    selection-background-color: #0078d7; /* Blue background for selected date */\n"
"    selection-color: #ffffff; /* White text for selected date */\n"
"    padding: 5px; /* Padding around the calendar */\n"
"    border-radius: 8px; /* Match border radius with comboBox_3 */\n"
"    margin: 0px; /* Consistent margin */\n"
"}\n"
"\n"
"/* Customize the items in the calendar */\n"
"#dateEdit QCalendarWidget QAbstractItemView {\n"
"    border: none; /* No border for the items */\n"
"    selection-background-color: #0078d7; /* Selected item background */\n"
"    selection-color: #ffffff; /* Selected item text color */\n"
"}\n"
"\n"
"/* Styling for individual calendar days */\n"
"#dateEdit QCalendarWidget QAbstractItemView::item {\n"
"    padding: 8px; /* Padding for calendar items */\n"
"    text-align: center; /* Center-align the text */\n"
"    margin: 0px; /* Consistent margin */\n"
"}\n"
""));
        label_21 = new QLabel(groupBox);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(150, 380, 151, 51));
        label_21->setFont(font);
        label_21->setStyleSheet(QString::fromUtf8("margin:0px;"));
        label_21->setScaledContents(false);
        pushButton_15 = new QPushButton(groupBox);
        pushButton_15->setObjectName(QString::fromUtf8("pushButton_15"));
        pushButton_15->setGeometry(QRect(120, 580, 181, 51));
        pushButton_15->setStyleSheet(QString::fromUtf8("#pushButton_15\n"
"{\n"
"	margin:0px;\n"
"padding: 8px 16px;\n"
"  background-color: #dd914f;\n"
"  color: white;\n"
"  border: none;\n"
"  border-radius: 10px;\n"
"}\n"
"#pushButton_15:hover{\n"
"background-color: #c87f42;}"));
        pushButton_16 = new QPushButton(groupBox);
        pushButton_16->setObjectName(QString::fromUtf8("pushButton_16"));
        pushButton_16->setGeometry(QRect(370, 580, 181, 51));
        pushButton_16->setStyleSheet(QString::fromUtf8("#pushButton_16\n"
"{\n"
"	margin:0px;\n"
"padding: 8px 16px;\n"
"  background-color: #dd914f;\n"
"  color: white;\n"
"  border: none;\n"
"  border-radius: 10px;\n"
"}\n"
"#pushButton_16:hover{\n"
"background-color: #c87f42;}"));
        label = new QLabel(page);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(290, 20, 191, 171));
        label->setStyleSheet(QString::fromUtf8("border-radius: 10px;"));
        label->setScaledContents(true);
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        label_2 = new QLabel(page_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 90, 191, 171));
        label_2->setStyleSheet(QString::fromUtf8("border-radius: 10px;"));
        label_2->setScaledContents(true);
        groupBox_2 = new QGroupBox(page_2);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 90, 691, 671));
        groupBox_2->setStyleSheet(QString::fromUtf8("background: white;\n"
"border-radius:20px;\n"
"border: solid 5px black;"));
        label_30 = new QLabel(groupBox_2);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setGeometry(QRect(150, 150, 151, 51));
        label_30->setFont(font);
        label_30->setStyleSheet(QString::fromUtf8("margin:0px;"));
        label_30->setScaledContents(false);
        label_32 = new QLabel(groupBox_2);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setGeometry(QRect(150, 450, 141, 51));
        label_32->setFont(font);
        label_32->setStyleSheet(QString::fromUtf8("margin:0px;"));
        label_32->setScaledContents(false);
        lineEdit_18 = new QLineEdit(groupBox_2);
        lineEdit_18->setObjectName(QString::fromUtf8("lineEdit_18"));
        lineEdit_18->setGeometry(QRect(310, 210, 251, 41));
        sizePolicy.setHeightForWidth(lineEdit_18->sizePolicy().hasHeightForWidth());
        lineEdit_18->setSizePolicy(sizePolicy);
        lineEdit_18->setAcceptDrops(true);
        lineEdit_18->setStyleSheet(QString::fromUtf8("\n"
"#lineEdit_18{\n"
"	border: 1px solid #ccc;\n"
"    border-radius: 8px;\n"
"    font-size: 16px;\n"
"    background-color: #f9f9f9;\n"
"	margin:0px;\n"
"	padding:0px;margin:0px;\n"
"}\n"
"#lineEdit_18:focus{\n"
"border-color: #dd914f;\n"
"    outline: none;\n"
"    background-color: #fff;\n"
"}"));
        lineEdit_18->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        lineEdit_19 = new QLineEdit(groupBox_2);
        lineEdit_19->setObjectName(QString::fromUtf8("lineEdit_19"));
        lineEdit_19->setGeometry(QRect(310, 160, 251, 41));
        sizePolicy.setHeightForWidth(lineEdit_19->sizePolicy().hasHeightForWidth());
        lineEdit_19->setSizePolicy(sizePolicy);
        lineEdit_19->setAcceptDrops(true);
        lineEdit_19->setStyleSheet(QString::fromUtf8("\n"
"#lineEdit_19{\n"
"	border: 1px solid #ccc;\n"
"    border-radius: 8px;\n"
"    font-size: 16px;\n"
"    background-color: #f9f9f9;\n"
"	margin:0px;\n"
"	padding:0px;margin:0px;\n"
"}\n"
"#lineEdit_19:focus{\n"
"border-color: #dd914f;\n"
"    outline: none;\n"
"    background-color: #fff;\n"
"}"));
        lineEdit_19->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        lineEdit_19->setReadOnly(true);
        label_33 = new QLabel(groupBox_2);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setGeometry(QRect(150, 300, 141, 51));
        label_33->setFont(font);
        label_33->setStyleSheet(QString::fromUtf8("margin:0px;"));
        label_33->setScaledContents(false);
        lineEdit_20 = new QLineEdit(groupBox_2);
        lineEdit_20->setObjectName(QString::fromUtf8("lineEdit_20"));
        lineEdit_20->setGeometry(QRect(310, 260, 251, 41));
        sizePolicy.setHeightForWidth(lineEdit_20->sizePolicy().hasHeightForWidth());
        lineEdit_20->setSizePolicy(sizePolicy);
        lineEdit_20->setAcceptDrops(true);
        lineEdit_20->setStyleSheet(QString::fromUtf8("\n"
"#lineEdit_20{\n"
"	border: 1px solid #ccc;\n"
"    border-radius: 8px;\n"
"    font-size: 16px;\n"
"    background-color: #f9f9f9;\n"
"	margin:0px;\n"
"	padding:0px;margin:0px;\n"
"}\n"
"#lineEdit_20:focus{\n"
"border-color: #dd914f;\n"
"    outline: none;\n"
"    background-color: #fff;\n"
"}"));
        lineEdit_20->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        label_34 = new QLabel(groupBox_2);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setGeometry(QRect(150, 250, 111, 51));
        label_34->setFont(font);
        label_34->setStyleSheet(QString::fromUtf8("margin:0px;"));
        label_34->setScaledContents(false);
        label_35 = new QLabel(groupBox_2);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        label_35->setGeometry(QRect(150, 400, 121, 51));
        label_35->setFont(font);
        label_35->setStyleSheet(QString::fromUtf8("margin:0px;"));
        label_35->setScaledContents(false);
        lineEdit_21 = new QLineEdit(groupBox_2);
        lineEdit_21->setObjectName(QString::fromUtf8("lineEdit_21"));
        lineEdit_21->setGeometry(QRect(310, 360, 251, 41));
        sizePolicy.setHeightForWidth(lineEdit_21->sizePolicy().hasHeightForWidth());
        lineEdit_21->setSizePolicy(sizePolicy);
        lineEdit_21->setAcceptDrops(true);
        lineEdit_21->setStyleSheet(QString::fromUtf8("\n"
"#lineEdit_21{\n"
"	border: 1px solid #ccc;\n"
"    border-radius: 8px;\n"
"    font-size: 16px;\n"
"    background-color: #f9f9f9;\n"
"	margin:0px;\n"
"	padding:0px;margin:0px;\n"
"}\n"
"#lineEdit_21:focus{\n"
"border-color: #dd914f;\n"
"    outline: none;\n"
"    background-color: #fff;\n"
"}"));
        lineEdit_21->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        label_36 = new QLabel(groupBox_2);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        label_36->setGeometry(QRect(150, 200, 121, 51));
        label_36->setFont(font);
        label_36->setStyleSheet(QString::fromUtf8("margin:0px;"));
        label_36->setScaledContents(false);
        dateEdit_3 = new QDateEdit(groupBox_2);
        dateEdit_3->setObjectName(QString::fromUtf8("dateEdit_3"));
        dateEdit_3->setGeometry(QRect(320, 460, 241, 31));
        dateEdit_3->setStyleSheet(QString::fromUtf8("#dateEdit_3 {\n"
"    border: 1px solid #ccc; /* Same border color */\n"
"    border-radius: 8px; /* Match border radius with comboBox_3 */\n"
"    background-color: #f9f9f9; /* Same background color as comboBox_3 */\n"
"    padding: 0px; /* Adjust padding to match */\n"
"    margin: 0px; /* Consistent margin */\n"
"    font-size: 16px; /* Match font size */\n"
"}\n"
"\n"
"#dateEdit:focus {\n"
"    border-color: #dd914f; /* Change border color on focus */\n"
"    outline: none; /* Remove outline */\n"
"    background-color: #ffffff; /* White background on focus */\n"
"}\n"
"\n"
"#dateEdit_3::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right; /* Position of the drop-down button */\n"
"    width: 20px; /* Width of the drop-down button */\n"
"    border-left: none; /* No left border */\n"
"}\n"
"\n"
"#dateEdit_3::down-arrow {\n"
"   \n"
"    width: 10px; /* Width of the icon */\n"
"    height: 10px; /* Height of the icon */\n"
"}\n"
"\n"
"#dateEdit_3 QCalendarWidget {\n"
"    "
                        "border: 1px solid #ccc; /* Use the same border color */\n"
"    background-color: #ffffff; /* White background for the calendar */\n"
"    selection-background-color: #0078d7; /* Blue background for selected date */\n"
"    selection-color: #ffffff; /* White text for selected date */\n"
"    padding: 5px; /* Padding around the calendar */\n"
"    border-radius: 8px; /* Match border radius with comboBox_3 */\n"
"    margin: 0px; /* Consistent margin */\n"
"}\n"
"\n"
"/* Customize the items in the calendar */\n"
"#dateEdit_3 QCalendarWidget QAbstractItemView {\n"
"    border: none; /* No border for the items */\n"
"    selection-background-color: #0078d7; /* Selected item background */\n"
"    selection-color: #ffffff; /* Selected item text color */\n"
"}\n"
"\n"
"/* Styling for individual calendar days */\n"
"#dateEdit_3 QCalendarWidget QAbstractItemView::item {\n"
"    padding: 8px; /* Padding for calendar items */\n"
"    text-align: center; /* Center-align the text */\n"
"    margin: 0px; /* Consistent margi"
                        "n */\n"
"}\n"
""));
        label_37 = new QLabel(groupBox_2);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        label_37->setGeometry(QRect(150, 350, 151, 51));
        label_37->setFont(font);
        label_37->setStyleSheet(QString::fromUtf8("margin:0px;"));
        label_37->setScaledContents(false);
        pushButton_19 = new QPushButton(groupBox_2);
        pushButton_19->setObjectName(QString::fromUtf8("pushButton_19"));
        pushButton_19->setGeometry(QRect(120, 560, 181, 51));
        pushButton_19->setStyleSheet(QString::fromUtf8("#pushButton_19\n"
"{\n"
"	margin:0px;\n"
"padding: 8px 16px;\n"
"  background-color: #dd914f;\n"
"  color: white;\n"
"  border: none;\n"
"  border-radius: 10px;\n"
"}\n"
"#pushButton_19:hover{\n"
"background-color: #c87f42;}"));
        pushButton_20 = new QPushButton(groupBox_2);
        pushButton_20->setObjectName(QString::fromUtf8("pushButton_20"));
        pushButton_20->setGeometry(QRect(370, 560, 181, 51));
        pushButton_20->setStyleSheet(QString::fromUtf8("#pushButton_20\n"
"{\n"
"	margin:0px;\n"
"padding: 8px 16px;\n"
"  background-color: #dd914f;\n"
"  color: white;\n"
"  border: none;\n"
"  border-radius: 10px;\n"
"}\n"
"#pushButton_20:hover{\n"
"background-color: #c87f42;}"));
        lineEdit_23 = new QLineEdit(groupBox_2);
        lineEdit_23->setObjectName(QString::fromUtf8("lineEdit_23"));
        lineEdit_23->setGeometry(QRect(310, 410, 251, 41));
        sizePolicy.setHeightForWidth(lineEdit_23->sizePolicy().hasHeightForWidth());
        lineEdit_23->setSizePolicy(sizePolicy);
        lineEdit_23->setAcceptDrops(true);
        lineEdit_23->setStyleSheet(QString::fromUtf8("\n"
"#lineEdit_23{\n"
"	border: 1px solid #ccc;\n"
"    border-radius: 8px;\n"
"    font-size: 16px;\n"
"    background-color: #f9f9f9;\n"
"	margin:0px;\n"
"	padding:0px;margin:0px;\n"
"}\n"
"#lineEdit_23:focus{\n"
"border-color: #dd914f;\n"
"    outline: none;\n"
"    background-color: #fff;\n"
"}"));
        lineEdit_23->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        comboBox_8 = new QComboBox(groupBox_2);
        comboBox_8->addItem(QString());
        comboBox_8->addItem(QString());
        comboBox_8->addItem(QString());
        comboBox_8->addItem(QString());
        comboBox_8->addItem(QString());
        comboBox_8->addItem(QString());
        comboBox_8->setObjectName(QString::fromUtf8("comboBox_8"));
        comboBox_8->setGeometry(QRect(310, 310, 251, 41));
        comboBox_8->setStyleSheet(QString::fromUtf8("#comboBox_8 {\n"
"    border: 1px solid #ccc; /* Use the same border color */\n"
"    border-radius: 8px; /* Match border radius with lineEdit_7 */\n"
"    background-color: #f9f9f9; /* Same background color as lineEdit_7 */\n"
"    padding: 0px; /* Adjust padding to match */\n"
"    margin: 0px; /* Consistent margin */\n"
"    font-size: 16px; /* Match font size */\n"
"}\n"
"\n"
"#comboBox_8::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 20px;\n"
"    border-left: none; /* No left border */\n"
"}\n"
"\n"
"#comboBox_8::down-arrow {\n"
"    image: url(../../ressource/icon.png); /* Custom arrow icon */\n"
"    width: 10px;\n"
"    height: 10px;\n"
"}\n"
"\n"
"#comboBox_8 QAbstractItemView {\n"
"    border: 1px solid #ccc; /* Use the same border color */\n"
"    background-color: #ffffff; /* White background for the list */\n"
"    selection-background-color: #0078d7; /* Blue background for selected item */\n"
"    selection-color: #ffffff; /* White text fo"
                        "r selected item */\n"
"    padding: 5px; /* Padding around each item */\n"
"    font-size: 14px; /* Font size for dropdown items */\n"
"    min-width: 120px; /* Minimum width to avoid truncation */\n"
"    border-radius: 8px; /* Match border radius with lineEdit_7 */\n"
"    margin: 0px; /* Consistent margin */\n"
"}\n"
"\n"
"#comboBox_8 QAbstractItemView::item {\n"
"    padding: 3px 15px; /* Adjust item padding for better spacing */\n"
"    text-align: center; /* Center-align text within each item */\n"
"    margin: 0px; /* Consistent margin */\n"
"}\n"
""));
        label_3 = new QLabel(page_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(290, 20, 191, 171));
        label_3->setStyleSheet(QString::fromUtf8("border-radius: 10px;"));
        label_3->setScaledContents(true);
        stackedWidget->addWidget(page_2);

        retranslateUi(Dialog);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QWidget *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Form", nullptr));
        groupBox->setTitle(QString());
        label_14->setText(QCoreApplication::translate("Dialog", "CIN", nullptr));
        label_18->setText(QCoreApplication::translate("Dialog", "Age", nullptr));
        comboBox_4->setItemText(0, QCoreApplication::translate("Dialog", "             Select job", nullptr));
        comboBox_4->setItemText(1, QCoreApplication::translate("Dialog", "Mechanic", nullptr));
        comboBox_4->setItemText(2, QCoreApplication::translate("Dialog", "Electrician", nullptr));
        comboBox_4->setItemText(3, QCoreApplication::translate("Dialog", "Worshop Manager", nullptr));
        comboBox_4->setItemText(4, QCoreApplication::translate("Dialog", "Car Painter", nullptr));
        comboBox_4->setItemText(5, QCoreApplication::translate("Dialog", "HR Manager", nullptr));

        comboBox_3->setItemText(0, QCoreApplication::translate("Dialog", "          Select Gender", nullptr));
        comboBox_3->setItemText(1, QCoreApplication::translate("Dialog", "Male", nullptr));
        comboBox_3->setItemText(2, QCoreApplication::translate("Dialog", "Female", nullptr));
        comboBox_3->setItemText(3, QCoreApplication::translate("Dialog", "Other", nullptr));

        comboBox_3->setPlaceholderText(QString());
        label_22->setText(QCoreApplication::translate("Dialog", "Date of Hire", nullptr));
        lineEdit_9->setPlaceholderText(QCoreApplication::translate("Dialog", "  Enter First Name", nullptr));
        lineEdit_8->setPlaceholderText(QCoreApplication::translate("Dialog", "  Enter CIN", nullptr));
        label_17->setText(QCoreApplication::translate("Dialog", "Gender", nullptr));
        lineEdit_11->setPlaceholderText(QCoreApplication::translate("Dialog", "  Enter Last Name", nullptr));
        label_16->setText(QCoreApplication::translate("Dialog", "Last Name", nullptr));
        label_20->setText(QCoreApplication::translate("Dialog", "Job", nullptr));
        lineEdit_13->setPlaceholderText(QCoreApplication::translate("Dialog", "  Enter Phone Number", nullptr));
        label_15->setText(QCoreApplication::translate("Dialog", "First Name", nullptr));
        lineEdit_10->setPlaceholderText(QCoreApplication::translate("Dialog", "  Enter Age", nullptr));
        label_21->setText(QCoreApplication::translate("Dialog", "Phone Number", nullptr));
        pushButton_15->setText(QCoreApplication::translate("Dialog", "Confirm Update", nullptr));
        pushButton_16->setText(QCoreApplication::translate("Dialog", "Delete Employee", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        groupBox_2->setTitle(QString());
        label_30->setText(QCoreApplication::translate("Dialog", "Licence Plate", nullptr));
        label_32->setText(QCoreApplication::translate("Dialog", "Date", nullptr));
        lineEdit_18->setPlaceholderText(QCoreApplication::translate("Dialog", "  Enter First Name", nullptr));
        lineEdit_19->setPlaceholderText(QCoreApplication::translate("Dialog", "  Enter Licence Plate", nullptr));
        label_33->setText(QCoreApplication::translate("Dialog", "Break Down", nullptr));
        lineEdit_20->setPlaceholderText(QCoreApplication::translate("Dialog", "  Enter Last Name", nullptr));
        label_34->setText(QCoreApplication::translate("Dialog", "Last Name", nullptr));
        label_35->setText(QCoreApplication::translate("Dialog", "Address", nullptr));
        lineEdit_21->setPlaceholderText(QCoreApplication::translate("Dialog", "  Enter Phone Number", nullptr));
        label_36->setText(QCoreApplication::translate("Dialog", "First Name", nullptr));
        label_37->setText(QCoreApplication::translate("Dialog", "Phone Number", nullptr));
        pushButton_19->setText(QCoreApplication::translate("Dialog", "Confirm Update", nullptr));
        pushButton_20->setText(QCoreApplication::translate("Dialog", "Delete Client", nullptr));
        lineEdit_23->setPlaceholderText(QCoreApplication::translate("Dialog", "  Enter Address", nullptr));
        comboBox_8->setItemText(0, QCoreApplication::translate("Dialog", "Select your Breakdown", nullptr));
        comboBox_8->setItemText(1, QCoreApplication::translate("Dialog", "Engine Failures", nullptr));
        comboBox_8->setItemText(2, QCoreApplication::translate("Dialog", "Electrical Breakdowns", nullptr));
        comboBox_8->setItemText(3, QCoreApplication::translate("Dialog", "Braking Problems", nullptr));
        comboBox_8->setItemText(4, QCoreApplication::translate("Dialog", "Tire-ralated Breakdowns", nullptr));
        comboBox_8->setItemText(5, QCoreApplication::translate("Dialog", "Other", nullptr));

        comboBox_8->setPlaceholderText(QString());
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
