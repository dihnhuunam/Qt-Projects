#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QString>
#include <QtWidgets>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setupStyles();
    setupLayout();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setupStyles()
{
    // Dark theme colors
    QString firstBackground = "#2B2B2B";
    QString secondBackground = "#3C3C3C";
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
                                                "}").arg(secondBackground, borderColor, textColor);

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
                    "}").arg(secondBackground, borderColor, hoverColor, pressedColor, textColor);

    // Login Label
    ui->loginLabel->setText(QString::fromUtf8("Đăng Nhập"));
    ui->loginLabel->setStyleSheet(QString("color: %1; font-size: 38px; font-weight: bold;").arg(textColor));
    ui->loginLabel->setAlignment(Qt::AlignCenter);

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

void MainWindow::setupLayout()
{
    QVBoxLayout *mainLayout = new QVBoxLayout();

    QHBoxLayout *hLayout = new QHBoxLayout();
    QVBoxLayout *contentLayout = new QVBoxLayout();

    contentLayout->addWidget(ui->loginLabel);
    contentLayout->addWidget(ui->usernameLineEdit);
    contentLayout->addWidget(ui->passwordLineEdit);
    contentLayout->addWidget(ui->loginButton);
    contentLayout->addWidget(ui->statusLabel);

    hLayout->addSpacerItem(new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum));
    hLayout->addLayout(contentLayout);
    hLayout->addSpacerItem(new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum));

    mainLayout->addSpacerItem(new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding));
    mainLayout->addLayout(hLayout);
    mainLayout->addSpacerItem(new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding));

    ui->centralwidget->setLayout(mainLayout);
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
