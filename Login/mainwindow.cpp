#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QString>
#include <QMessageBox>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QSpacerItem>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Create main vertical layout for central widget
    QVBoxLayout* mainLayout = new QVBoxLayout();

    // Create horizontal layout for center alignment
    QHBoxLayout* horizontalLayout = new QHBoxLayout();

    // Remove groupBox from its parent
    ui->groupBox->setParent(nullptr);

    // Add stretching spacers on both sides of the groupBox
    horizontalLayout->addStretch();
    horizontalLayout->addWidget(ui->groupBox);
    horizontalLayout->addStretch();

    // Add the horizontal layout to main layout
    mainLayout->addLayout(horizontalLayout);

    // Set the layout to central widget
    QWidget* centralWidget = new QWidget(this);
    centralWidget->setLayout(mainLayout);
    setCentralWidget(centralWidget);

    // Dark mode colors with refined shades of gray
    QString darkBackground = "#2B2B2B";     // Dark gray background, slightly lighter
    QString darkSecondary = "#3B3B3B";      // Slightly lighter gray for UI elements
    QString darkBorder = "#555555";         // Medium gray for borders
    QString textColor = "#D3D3D3";          // Light gray for text
    QString accentColor = "#6E6E6E";        // Slightly brighter accent color for hover
    QString pressedColor = "#5A5A5A";       // Darker gray for pressed buttons

    // Main window and groupBox style
    this->setStyleSheet(QString::fromUtf8(
        "QMainWindow, QWidget { background-color: %1; color: %2; }"
        "QGroupBox { border: 2px solid %3; border-radius: 10px; margin-top: 1em; }"
        "QGroupBox::title { color: %2; }"
    ).arg(darkBackground, textColor, darkBorder));

    // StyleSheet for Button
    QString buttonStyle = QString::fromUtf8(
        "QPushButton {"
        "  border: 2px solid %1;"
        "  border-radius: 10px;"
        "  background-color: %2;"
        "  color: %3;"
        "  padding: 3px;"
        "}"
        "QPushButton:hover {"
        "  background-color: %4;"
        "}"
        "QPushButton:pressed {"
        "  background-color: %5;"
        "  color: %3;"
        "}"
    ).arg(darkBorder, darkSecondary, textColor, accentColor, pressedColor);

    // StyleSheet for QLineEdit
    QString lineStyle = QString::fromUtf8(
        "QLineEdit {"
        "  border: 1px solid %1;"
        "  border-radius: 10px;"
        "  padding: 3px;"
        "  background-color: %2;"
        "  color: %3;"
        "}"
        "QLineEdit:focus {"
        "  border: 2px solid %4;"
        "}"
    ).arg(darkBorder, darkSecondary, textColor, accentColor);

    // Apply styles
    ui->usernameLineEdit->setStyleSheet(lineStyle);
    ui->passwordLineEdit->setStyleSheet(lineStyle);
    ui->loginButton->setStyleSheet(buttonStyle);
    ui->forgotPasswordButton->setStyleSheet(buttonStyle);
    ui->registerButton->setStyleSheet(buttonStyle);

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
        QMessageBox::information(this, "Login", "Username and password is correct");
    }
    else
    {
        QMessageBox::warning(this, "Login", "Username and password is incorrect");
    }
}

void MainWindow::on_registerButton_clicked()
{

}

void MainWindow::on_forgotPasswordButton_clicked()
{

}
