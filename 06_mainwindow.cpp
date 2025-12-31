#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->botonSuma, &QPushButton::clicked, this, [this](){
        int A= ui->lineEdit->text().toDouble();
        int B= ui->lineEdit_2->text().toDouble();
        ui->lcdNumber->display(A+B);
    });
    connect(ui->botonResta, &QPushButton::clicked, this, [this](){
        int A= ui->lineEdit->text().toDouble();
        int B= ui->lineEdit_2->text().toDouble();
        ui->lcdNumber->display(A-B);
    });
    connect(ui->botonProducto, &QPushButton::clicked, this, [this](){
        int A= ui->lineEdit->text().toDouble();
        int B= ui->lineEdit_2->text().toDouble();
        ui->lcdNumber->display(A*B);
    });
    connect(ui->botonDivision, &QPushButton::clicked, this, [this](){
        int A= ui->lineEdit->text().toDouble();
        int B= ui->lineEdit_2->text().toDouble();
        if(B==0){
            ui->lcdNumber->display(0);
            QMessageBox::information(nullptr, "alerta", "la division por cero no es posible");
        }else{
            ui->lcdNumber->display(A/B);
        }
    });
}

void MainWindow::alerta(){
    QMessageBox::information(this, "", "");
}

MainWindow::~MainWindow()
{
    delete ui;
}
