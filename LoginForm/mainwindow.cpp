#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//    ui->passwordLineEdit->setEchoMode(QLineEdit::Password);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_loginButton_clicked()
{
    QString username = ui->usernameLineEdit->text();
    QString password = ui->passwordLineEdit->text();

    if(username == "test" && password == "test")
    {
        QMessageBox::information(this, "Login", "Username and passowrd is correct");
    }
    else
    {
        QMessageBox::warning(this, "Login", "Username and passowrd is incorrect");
    }
}

void MainWindow::on_registerButton_clicked()
{

}

void MainWindow::on_forgotPasswordLabel_clicked()
{

}

void MainWindow::on_rememberCheckBox_pressed()
{

}
