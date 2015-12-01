/********************************************************************************
** Form generated from reading UI file 'script.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCRIPT_H
#define UI_SCRIPT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_script
{
public:
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QDialog *script)
    {
        if (script->objectName().isEmpty())
            script->setObjectName(QStringLiteral("script"));
        script->resize(293, 251);
        widget = new QWidget(script);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 10, 258, 223));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 1, 0, 1, 1);

        plainTextEdit = new QPlainTextEdit(widget);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));

        gridLayout->addWidget(plainTextEdit, 0, 0, 1, 1);


        retranslateUi(script);

        QMetaObject::connectSlotsByName(script);
    } // setupUi

    void retranslateUi(QDialog *script)
    {
        script->setWindowTitle(QApplication::translate("script", "Dialog", 0));
        pushButton->setText(QApplication::translate("script", "Run Script", 0));
    } // retranslateUi

};

namespace Ui {
    class script: public Ui_script {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCRIPT_H
