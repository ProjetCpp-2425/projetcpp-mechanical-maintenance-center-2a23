// Loading libraries
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QFile>
#include<QDebug>
#include<QTextStream>
#include <QFileDialog>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton_14, &QPushButton::clicked, this, &MainWindow::selectFile);
    connect(ui->pushButton_40, &QPushButton::clicked, this, &MainWindow::selectFile);

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
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::selectFile() {
    // Open a file dialog and get the selected file path
    QString fileName = QFileDialog::getOpenFileName(this, "Select File", "", "PNG Files (*.png);;JPG Files (*.jpg)");

    // If a file was selected, display the path in filePathLineEdit
    if (!fileName.isEmpty()) {
        //ui->filePathLineEdit->setText(fileName);
    }
}
