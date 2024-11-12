/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QLabel *loginLabel;
    QLineEdit *usernameLineEdit;
    QLineEdit *passwordLineEdit;
    QHBoxLayout *horizontalLayout;
    QCheckBox *rememberCheckBox;
    QPushButton *forgotPasswordButton;
    QPushButton *loginButton;
    QHBoxLayout *horizontalLayout_2;
    QLabel *registerLabel;
    QPushButton *registerButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(260, 90, 283, 234));
        groupBox->setMaximumSize(QSize(381, 281));
        groupBox->setAlignment(Qt::AlignCenter);
        groupBox->setFlat(false);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        loginLabel = new QLabel(groupBox);
        loginLabel->setObjectName(QString::fromUtf8("loginLabel"));
        loginLabel->setMinimumSize(QSize(38, 0));
        loginLabel->setMaximumSize(QSize(38, 41));

        verticalLayout->addWidget(loginLabel, 0, Qt::AlignHCenter);

        usernameLineEdit = new QLineEdit(groupBox);
        usernameLineEdit->setObjectName(QString::fromUtf8("usernameLineEdit"));
        usernameLineEdit->setMaximumSize(QSize(357, 27));

        verticalLayout->addWidget(usernameLineEdit);

        passwordLineEdit = new QLineEdit(groupBox);
        passwordLineEdit->setObjectName(QString::fromUtf8("passwordLineEdit"));
        passwordLineEdit->setMaximumSize(QSize(357, 27));
        passwordLineEdit->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(passwordLineEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        rememberCheckBox = new QCheckBox(groupBox);
        rememberCheckBox->setObjectName(QString::fromUtf8("rememberCheckBox"));
        rememberCheckBox->setMaximumSize(QSize(175, 25));

        horizontalLayout->addWidget(rememberCheckBox);

        forgotPasswordButton = new QPushButton(groupBox);
        forgotPasswordButton->setObjectName(QString::fromUtf8("forgotPasswordButton"));
        forgotPasswordButton->setMaximumSize(QSize(174, 27));
        forgotPasswordButton->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(forgotPasswordButton);


        verticalLayout->addLayout(horizontalLayout);

        loginButton = new QPushButton(groupBox);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));
        loginButton->setMaximumSize(QSize(357, 27));
        loginButton->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(loginButton);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        registerLabel = new QLabel(groupBox);
        registerLabel->setObjectName(QString::fromUtf8("registerLabel"));
        registerLabel->setMaximumSize(QSize(175, 39));

        horizontalLayout_2->addWidget(registerLabel);

        registerButton = new QPushButton(groupBox);
        registerButton->setObjectName(QString::fromUtf8("registerButton"));
        registerButton->setMaximumSize(QSize(174, 27));
        registerButton->setAutoFillBackground(false);
        registerButton->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(registerButton);


        verticalLayout->addLayout(horizontalLayout_2);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QString());
        loginLabel->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        usernameLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        passwordLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        rememberCheckBox->setText(QCoreApplication::translate("MainWindow", "Remember me", nullptr));
        forgotPasswordButton->setText(QCoreApplication::translate("MainWindow", "Forgot password?", nullptr));
        loginButton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        registerLabel->setText(QCoreApplication::translate("MainWindow", "Don't have an account?", nullptr));
        registerButton->setText(QCoreApplication::translate("MainWindow", "Register", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
