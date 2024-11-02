/********************************************************************************
** Form generated from reading UI file 'form.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_H
#define UI_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QLabel *label;
    QComboBox *comboBox;
    QGroupBox *groupBox;
    QPushButton *pushButton;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLabel *label_4;
    QLineEdit *lineEdit_2;
    QGroupBox *groupBox_2;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QString::fromUtf8("Form"));
        Form->resize(1371, 810);
        label = new QLabel(Form);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(600, 150, 821, 511));
        label->setPixmap(QPixmap(QString::fromUtf8(":/image/back.png")));
        label->setScaledContents(true);
        comboBox = new QComboBox(Form);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/ressource/icon-english-7-removebg-preview.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBox->addItem(icon, QString());
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/image/ressource/round-french-flag-icon-isolated-on-white-background-the-flag-of-france-in-a-circle-free-vector-removebg-preview.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon1.addFile(QString::fromUtf8(":/image/ressource/round-french-flag-icon-isolated-on-white-background-the-flag-of-france-in-a-circle-free-vector-removebg-preview.png"), QSize(), QIcon::Disabled, QIcon::Off);
        comboBox->addItem(icon1, QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(1350, 20, 121, 31));
        comboBox->setStyleSheet(QString::fromUtf8("#comboBox {\n"
"    background-color: #f0f0f0; /* Light gray background */\n"
"    border: 1px solid #cccccc; /* Gray border */\n"
"    border-radius: 5px; /* Rounded corners */\n"
"    padding: 5px 10px; /* Padding for text */\n"
"    font: 14px \"Arial\"; /* Font style */\n"
"    color: #333333; /* Text color */\n"
"}\n"
"\n"
"#comboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 20px;\n"
"    border-left: 1px solid #cccccc; /* Divider between text and arrow */\n"
"	border-left:none;\n"
"}\n"
"\n"
"#comboBox::down-arrow {\n"
"    image: url(../../ressource/icon.png); /* Custom arrow icon */\n"
"    width: 10px;\n"
"    height: 10px;\n"
"	\n"
"}\n"
"\n"
"#comboBox QAbstractItemView {\n"
"    border: 1px solid #cccccc; /* Border for dropdown */\n"
"    background-color: #ffffff; /* White background for the list */\n"
"    selection-background-color: #0078d7; /* Blue background for selected item */\n"
"    selection-color: #ffffff; /* White text for se"
                        "lected item */\n"
"	\n"
"}"));
        groupBox = new QGroupBox(Form);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(110, 190, 411, 421));
        groupBox->setStyleSheet(QString::fromUtf8("#groupBox{\n"
"  height: 50%;\n"
"\n"
"  border-radius: 8px;\n"
"  width: 400px;\n"
"  height: 470px;\n"
"  background-color: rgba(255, 255, 255, 0.5);\n"
"}"));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(130, 348, 151, 41));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("#pushButton{\n"
"border-radius: 15px;\n"
"background-color: #341f9d;\n"
"color: white;\n"
"  border: none;\n"
"font-size: 16px;\n"
"\n"
"}\n"
"#pushButton:hover{\n"
"background-color: #f8943f;\n"
"}"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 40, 361, 61));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe Print")});
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("#label_2{\n"
"font-family: 'Segoe Print', cursive;\n"
"color: rgb(21, 32, 73);\n"
"  font-size: 64px;\n"
"}"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 120, 201, 61));
        QFont font1;
        font1.setPointSize(16);
        label_3->setFont(font1);
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(70, 180, 241, 41));
        lineEdit->setStyleSheet(QString::fromUtf8("#lineEdit{\n"
"border-radius: 15px;\n"
"  border: 1px solid #ccc;\n"
"  font-size: 14px;\n"
"}"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 210, 201, 61));
        label_4->setFont(font1);
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(70, 270, 241, 41));
        lineEdit_2->setStyleSheet(QString::fromUtf8("#lineEdit_2{\n"
"border-radius: 15px;\n"
"  border: 1px solid #ccc;\n"
"  font-size: 14px;\n"
"} "));
        groupBox_2 = new QGroupBox(Form);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(0, 0, 120, 80));

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "Form", nullptr));
        label->setText(QString());
        comboBox->setItemText(0, QCoreApplication::translate("Form", "English", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("Form", "French", nullptr));

        groupBox->setTitle(QString());
        pushButton->setText(QCoreApplication::translate("Form", "Login", nullptr));
        label_2->setText(QCoreApplication::translate("Form", "WELCOME", nullptr));
        label_3->setText(QCoreApplication::translate("Form", "Username", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("Form", "Enter Username", nullptr));
        label_4->setText(QCoreApplication::translate("Form", "Password", nullptr));
        lineEdit_2->setText(QString());
        lineEdit_2->setPlaceholderText(QCoreApplication::translate("Form", "Enter Passwrod", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Form", "GroupBox", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_H
