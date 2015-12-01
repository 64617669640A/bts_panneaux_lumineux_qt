/********************************************************************************
** Form generated from reading UI file 'simulation.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIMULATION_H
#define UI_SIMULATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_simulation
{
public:

    void setupUi(QDialog *simulation)
    {
        if (simulation->objectName().isEmpty())
            simulation->setObjectName(QStringLiteral("simulation"));
        simulation->resize(480, 187);

        retranslateUi(simulation);

        QMetaObject::connectSlotsByName(simulation);
    } // setupUi

    void retranslateUi(QDialog *simulation)
    {
        simulation->setWindowTitle(QApplication::translate("simulation", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class simulation: public Ui_simulation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIMULATION_H
