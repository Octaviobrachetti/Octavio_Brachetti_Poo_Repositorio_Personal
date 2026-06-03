/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QGridLayout *gridLayout;
    QLineEdit *leClave;
    QLabel *lClave;
    QLineEdit *leUsuario;
    QLabel *lUsuario;
    QSpacerItem *horizontalSpacer;
    QPushButton *pbIngresar;

    void setupUi(QWidget *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName("Login");
        Login->resize(553, 415);
        gridLayout = new QGridLayout(Login);
        gridLayout->setObjectName("gridLayout");
        leClave = new QLineEdit(Login);
        leClave->setObjectName("leClave");
        leClave->setEchoMode(QLineEdit::EchoMode::Password);

        gridLayout->addWidget(leClave, 1, 1, 1, 1);

        lClave = new QLabel(Login);
        lClave->setObjectName("lClave");

        gridLayout->addWidget(lClave, 1, 0, 1, 1);

        leUsuario = new QLineEdit(Login);
        leUsuario->setObjectName("leUsuario");

        gridLayout->addWidget(leUsuario, 0, 1, 1, 1);

        lUsuario = new QLabel(Login);
        lUsuario->setObjectName("lUsuario");

        gridLayout->addWidget(lUsuario, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 2, 1, 1);

        pbIngresar = new QPushButton(Login);
        pbIngresar->setObjectName("pbIngresar");

        gridLayout->addWidget(pbIngresar, 2, 1, 1, 1);


        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QWidget *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Login", nullptr));
        lClave->setText(QCoreApplication::translate("Login", "Contrase\303\261a:", nullptr));
        lUsuario->setText(QCoreApplication::translate("Login", "Usuario:", nullptr));
        pbIngresar->setText(QCoreApplication::translate("Login", "Ingresar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
