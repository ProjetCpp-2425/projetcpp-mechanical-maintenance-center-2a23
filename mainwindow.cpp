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

}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::selectFile() {
    // Open a file dialog and get the selected file path
    QString fileName = QFileDialog::getOpenFileName(this, "Select File", "", "All Files (*.*);;Text Files (*.txt)");

    // If a file was selected, display the path in filePathLineEdit
    if (!fileName.isEmpty()) {
        //ui->filePathLineEdit->setText(fileName);
    }
}
