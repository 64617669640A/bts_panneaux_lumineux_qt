/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSimulation;
    QAction *actionLoad;
    QAction *actionSave;
    QAction *actionRaffraichir;
    QWidget *centralWidget;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_3;
    QLabel *label;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lineEdit;
    QPushButton *pushButton_Ajouter;
    QPushButton *pushButton_Supprimer;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QComboBox *comboBox_color;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QComboBox *comboBox_X;
    QComboBox *comboBox_Y;
    QLabel *label_5;
    QVBoxLayout *verticalLayout;
    QLabel *label_6;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_Envoyer;
    QPushButton *pushButton_Stop;
    QPushButton *pushButton_Quitter;
    QLabel *label_message;
    QMenuBar *menuBar;
    QMenu *menuFichier;
    QMenu *menuReset;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(306, 479);
        actionSimulation = new QAction(MainWindow);
        actionSimulation->setObjectName(QStringLiteral("actionSimulation"));
        actionLoad = new QAction(MainWindow);
        actionLoad->setObjectName(QStringLiteral("actionLoad"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionRaffraichir = new QAction(MainWindow);
        actionRaffraichir->setObjectName(QStringLiteral("actionRaffraichir"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_4 = new QGridLayout(centralWidget);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setMaxLength(250);

        horizontalLayout_3->addWidget(lineEdit);

        pushButton_Ajouter = new QPushButton(centralWidget);
        pushButton_Ajouter->setObjectName(QStringLiteral("pushButton_Ajouter"));

        horizontalLayout_3->addWidget(pushButton_Ajouter);

        pushButton_Supprimer = new QPushButton(centralWidget);
        pushButton_Supprimer->setObjectName(QStringLiteral("pushButton_Supprimer"));

        horizontalLayout_3->addWidget(pushButton_Supprimer);


        gridLayout_3->addLayout(horizontalLayout_3, 1, 0, 1, 1);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        comboBox_color = new QComboBox(groupBox);
        comboBox_color->setObjectName(QStringLiteral("comboBox_color"));

        horizontalLayout->addWidget(comboBox_color);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        comboBox_X = new QComboBox(groupBox_2);
        comboBox_X->setObjectName(QStringLiteral("comboBox_X"));

        gridLayout->addWidget(comboBox_X, 0, 1, 1, 1);

        comboBox_Y = new QComboBox(groupBox_2);
        comboBox_Y->setObjectName(QStringLiteral("comboBox_Y"));

        gridLayout->addWidget(comboBox_Y, 1, 1, 1, 1);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 1, 0, 1, 1);


        gridLayout_2->addWidget(groupBox_2, 0, 1, 2, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout->addWidget(label_6);

        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setMaxLength(15);

        verticalLayout->addWidget(lineEdit_2);


        gridLayout_2->addLayout(verticalLayout, 1, 0, 1, 1);


        gridLayout_3->addWidget(groupBox, 2, 0, 1, 1);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_3->addWidget(label_2, 3, 0, 1, 1);

        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        gridLayout_3->addWidget(listWidget, 4, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton_Envoyer = new QPushButton(centralWidget);
        pushButton_Envoyer->setObjectName(QStringLiteral("pushButton_Envoyer"));

        horizontalLayout_2->addWidget(pushButton_Envoyer);

        pushButton_Stop = new QPushButton(centralWidget);
        pushButton_Stop->setObjectName(QStringLiteral("pushButton_Stop"));

        horizontalLayout_2->addWidget(pushButton_Stop);

        pushButton_Quitter = new QPushButton(centralWidget);
        pushButton_Quitter->setObjectName(QStringLiteral("pushButton_Quitter"));

        horizontalLayout_2->addWidget(pushButton_Quitter);


        gridLayout_3->addLayout(horizontalLayout_2, 5, 0, 1, 1);

        label_message = new QLabel(centralWidget);
        label_message->setObjectName(QStringLiteral("label_message"));

        gridLayout_3->addWidget(label_message, 6, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 306, 21));
        menuFichier = new QMenu(menuBar);
        menuFichier->setObjectName(QStringLiteral("menuFichier"));
        menuReset = new QMenu(menuBar);
        menuReset->setObjectName(QStringLiteral("menuReset"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFichier->menuAction());
        menuBar->addAction(menuReset->menuAction());
        menuFichier->addAction(actionLoad);
        menuFichier->addAction(actionSave);
        menuFichier->addSeparator();
        menuFichier->addAction(actionSimulation);
        menuReset->addAction(actionRaffraichir);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionSimulation->setText(QApplication::translate("MainWindow", "Simulation", 0));
        actionLoad->setText(QApplication::translate("MainWindow", "Load", 0));
        actionSave->setText(QApplication::translate("MainWindow", "Save", 0));
        actionRaffraichir->setText(QApplication::translate("MainWindow", "Raffraichir", 0));
        label->setText(QApplication::translate("MainWindow", "Entrez votre texte:", 0));
        pushButton_Ajouter->setText(QApplication::translate("MainWindow", "Ajouter", 0));
        pushButton_Supprimer->setText(QApplication::translate("MainWindow", "Supprimer", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "Config", 0));
        label_3->setText(QApplication::translate("MainWindow", "LED :", 0));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Coordon\303\251es", 0));
        label_4->setText(QApplication::translate("MainWindow", "X :", 0));
        label_5->setText(QApplication::translate("MainWindow", "Y :", 0));
        label_6->setText(QApplication::translate("MainWindow", "adresse du panneau :", 0));
        label_2->setText(QApplication::translate("MainWindow", "Liste des messages :", 0));
        pushButton_Envoyer->setText(QApplication::translate("MainWindow", "Envoyer", 0));
        pushButton_Stop->setText(QApplication::translate("MainWindow", "Stop", 0));
        pushButton_Quitter->setText(QApplication::translate("MainWindow", "Quitter", 0));
        label_message->setText(QString());
        menuFichier->setTitle(QApplication::translate("MainWindow", "Menu", 0));
        menuReset->setTitle(QApplication::translate("MainWindow", "Reset", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
