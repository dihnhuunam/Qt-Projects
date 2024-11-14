#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QString>
#include <QMessageBox>
#include <QVBoxLayout>
#include <QHBoxLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setupLayout();
    setupStyles();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setupLayout()
{
    QVBoxLayout *mainLayout = new QVBoxLayout();
    QHBoxLayout *horizontalLayout = new QHBoxLayout();

    ui->groupBox->setParent(nullptr);

    horizontalLayout->addWidget(ui->groupBox);

    mainLayout->addLayout(horizontalLayout);

    QWidget *centralWidget = new QWidget(this);
    centralWidget->setLayout(mainLayout);
    setCentralWidget(centralWidget);
}

void MainWindow::setupStyles()
{
    // Dark theme colors
    QString firstBackground = "#2B2B2B";
    QString secondaryBackground = "#3C3C3C";
    QString borderColor = "#5E5E5E";
    QString textColor = "#E0E0E0";
    QString hoverColor = "#4E4E4E";
    QString pressedColor = "#626262";

    // Main window background
    this->setStyleSheet(QString("background-color: %1;").arg(firstBackground));

    // StyleSheet for QLineEdit
    QString lineStyle = QString::fromUtf8("QLineEdit {"
                                                "background-color: %1;"
                                                "color: %3;"
                                                "border: 1px solid %2;"
                                                "border-radius: 8px;"
                                                "padding: 6px;"
                                                "}").arg(secondaryBackground, borderColor, textColor);

    // StyleSheet for QPushButton
    QString buttonStyle = QString::fromUtf8(
                "QPushButton {"
                    "background-color: %1;"
                    "color: %5;"
                    "border: 1px solid %2;"
                    "border-radius: 8px;"
                    "padding: 6px;"
                    "}"
                "QPushButton:hover {"
                    "background-color: %3;"
                    "}"
                "QPushButton:pressed {"
                    "background-color: %4;"
                    "}").arg(secondaryBackground, borderColor, hoverColor, pressedColor, textColor);

    // Login Label
    ui->loginLabel->setText(QString::fromUtf8("Đăng Nhập"));
    ui->loginLabel->setStyleSheet(QString("color: %1; font-size: 38px; font-weight: bold;").arg(textColor));
    ui->loginLabel->setAlignment(Qt::AlignHCenter);

    // Username LineEdit
    ui->usernameLineEdit->setPlaceholderText("Tài Khoản");
    ui->usernameLineEdit->setAlignment(Qt::AlignLeft);
    ui->usernameLineEdit->setStyleSheet(lineStyle);
    ui->usernameLineEdit->setFocus();

    // Password LineEdit
    ui->passwordLineEdit->setPlaceholderText("Mật Khẩu");
    ui->usernameLineEdit->setAlignment(Qt::AlignLeft);
    ui->passwordLineEdit->setEchoMode(QLineEdit::Password);
    ui->passwordLineEdit->setStyleSheet(lineStyle);

    // Login Button
    ui->loginButton->setText(QString::fromUtf8("Đăng Nhập"));
    ui->loginButton->setStyleSheet(buttonStyle);

    // Status Label
    ui->statusLabel->setVisible(false);
    ui->statusLabel->setStyleSheet(QString("font-size: 14px; font-weight: bold;"));
    ui->statusLabel->setAlignment(Qt::AlignCenter);
}

void MainWindow::on_loginButton_clicked()
{
    QString username = ui->usernameLineEdit->text();
    QString password = ui->passwordLineEdit->text();
    QString successColor = "#6BBF59";
    QString errorColor = "#FF6B6B";

    if(username == "test" && password == "test")
    {
        ui->statusLabel->setVisible(true);
        ui->statusLabel->setStyleSheet(QString("color: %1;").arg(successColor));
        ui->statusLabel->setText("Đăng nhập thành công.");
    }
    else
    {
        ui->statusLabel->setVisible(true);
        ui->statusLabel->setStyleSheet(QString("color: %1;").arg(errorColor));
        ui->statusLabel->setText("Đăng nhập thất bại.");
    }
}
