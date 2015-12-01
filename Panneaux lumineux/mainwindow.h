#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QUdpSocket>
#include <QHostAddress>
#include <QMessageBox>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QUdpSocket *socket;
    QMessageBox msgBox;

private slots:
    void on_pushButton_Ajouter_clicked(); //fonction qui ajoute un message.

    void on_pushButton_Supprimer_clicked(); //fonction qui supprime un message.

    void on_ReadyData(); //fonction qui permet d'afficher les requetes.

    void on_pushButton_Envoyer_clicked();

    void on_pushButton_Stop_clicked();

    void on_pushButton_Quitter_clicked();

    void on_actionSimulation_triggered();

    void on_lineEdit_returnPressed();

    void on_listWidget_doubleClicked(const QModelIndex &index);

    void on_actionLoad_triggered();

    void on_actionSave_triggered();

    void on_actionRaffraichir_triggered();

private:
    Ui::MainWindow *ui;
    QByteArray datagram;
    QHostAddress sender, Adresse;
    quint16 senderPort, AdressePort;


};

#endif // MAINWINDOW_H
