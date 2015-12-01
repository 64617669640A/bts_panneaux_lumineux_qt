#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "simulation.h"

#include <QSettings>
#include <QString>
#include <QLabel>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    socket = new QUdpSocket(this);
    connect(socket,SIGNAL(readyRead()),this,SLOT(on_ReadyData()));

    ui->comboBox_color->addItem("MultiCouleur");
    ui->comboBox_color->addItem("Rouge");
    ui->comboBox_color->addItem("Vert");
    ui->comboBox_color->addItem("Ambre");
    ui->comboBox_color->addItem("Rouge sombre");
    ui->comboBox_color->addItem("Vert sombre");
    ui->comboBox_color->addItem("Marron");
    ui->comboBox_color->addItem("Orange");
    ui->comboBox_color->addItem("Jaune");

    for (int pos_X1 = 0; pos_X1 <= 9; pos_X1++)
    {
        ui->comboBox_X->addItem("0"+QString::number(pos_X1));
    }

    for (int pos_X2 = 10; pos_X2 <= 80; pos_X2++)
    {
        ui->comboBox_X->addItem(QString::number(pos_X2));
    }

    for (int pos_Y1 = 0; pos_Y1 <= 9; pos_Y1++)
    {
        ui->comboBox_Y->addItem("0"+QString::number(pos_Y1));
    }

    for (int pos_Y2 = 10; pos_Y2 <= 32; pos_Y2++)
    {
        ui->comboBox_Y->addItem(QString::number(pos_Y2));
    }

    //recharge la liste des messages
    on_actionLoad_triggered();
}

MainWindow::~MainWindow()
{
    delete ui;
}

//simule
void MainWindow::on_actionSimulation_triggered()
{
    simulation sml(this);

    //récupère un item du listwidget. | currentRow: permet la sélection du texte.
    if (ui->listWidget->item(ui->listWidget->currentRow()))
        sml.text = ui->listWidget->item(ui->listWidget->currentRow())->text();

    //récupère l'item d'une couleur dans la combobox.
    sml.colortext = ui->comboBox_color->currentText();

    //récupère l'item d'un int dans la combobox.
    sml.pos_X = ui->comboBox_X->currentIndex();

    sml.pos_Y = ui->comboBox_Y->currentIndex();
    sml.move(0,0);
    sml.exec();
}



//quand je double clique sur le listwidget active la simulation.
void MainWindow::on_listWidget_doubleClicked(const QModelIndex &index)
{
    simulation sml(this);

    //récupère un item du listwidget.
    sml.text = ui->listWidget->item(ui->listWidget->currentRow())->text();

    //récuupère l'item d'une qstring dans la combobox.
    sml.colortext = ui->comboBox_color->currentText();

    //récupère l'item d'un int dans la combobox.
    sml.pos_X = ui->comboBox_X->currentIndex();

    sml.pos_Y = ui->comboBox_Y->currentIndex();
    sml.move(0, 0);
    sml.exec();
}

void MainWindow::on_pushButton_Ajouter_clicked()
{
    //ajoute du texte dans le listWidget.
    ui->listWidget->addItem(ui->lineEdit->text());

    //reset le lineEdit.
    ui->lineEdit->setText("");
}

//fait la même chose que ajouter_clicked mais s'active avec la touche entrée.
void MainWindow::on_lineEdit_returnPressed() 
{
    //ajoute du texte dans le listWidget.
    ui->listWidget->addItem(ui->lineEdit->text()); 
    
    //reset le lineEdit.
    ui->lineEdit->setText("");

}

void MainWindow::on_pushButton_Supprimer_clicked()
{
    //supprime du texte dans le listWidget.
    delete ui->listWidget->currentItem(); 
}

void MainWindow::on_ReadyData()
{
    statusBar()->showMessage("read Data",3000);
    while (socket->hasPendingDatagrams())
    {
        datagram.resize(socket->pendingDatagramSize());
        socket->readDatagram(datagram.data(),
                             datagram.size(),
                             &sender,
                             &senderPort);

        ui->label_message->setText("[ IP :"
                                   + sender.toString()
                                   + "  PORT: "
                                   + QString::number(senderPort) + " ]");
    }
}

void MainWindow::on_pushButton_Envoyer_clicked()
{
    QString buffer;

    //comboBox color
    buffer.append(QString(ui->comboBox_color->currentIndex()));
    buffer.append(QString(','));

    //comboBox x
    buffer.append(QString(ui->comboBox_X->currentText()));
    buffer.append(QString(','));

    //comboBox y
    buffer.append(QString(ui->comboBox_Y->currentText()));
    buffer.append(QString(','));

    //LineEdit
    if(ui->lineEdit->isModified())
        buffer.append(QString(ui->lineEdit->text()));
    else
    //ListWidget
        buffer.append(QString(ui->listWidget->item(ui->listWidget->currentRow())->text()));





    Adresse.setAddress(ui->lineEdit_2->text());
    AdressePort = 7755;
    socket->writeDatagram(buffer.toLatin1(),Adresse,AdressePort);

    ui->lineEdit->setText("");
}

void MainWindow::on_pushButton_Stop_clicked()
{
    QString stop = "stop";
    Adresse.setAddress(ui->lineEdit_2->text());
    AdressePort = 7755;
    socket->writeDatagram(stop.toLatin1(),Adresse,AdressePort);
}

void MainWindow::on_pushButton_Quitter_clicked()
{  
    on_actionSave_triggered();
    close();
}

//fonction de sauvegarde
void MainWindow::on_actionSave_triggered()
{
    QSettings settings("MaConfig.ini", QSettings::IniFormat);
    settings.beginGroup("config");
    settings.remove("");
    //settings.setValue("@IP");
    for (int i = 0; i < ui->listWidget->count(); i++)
    {
        settings.setValue("message" + QString::number(i), ui->listWidget->item(i)->text());
    }
    settings.endGroup();

    qDebug() << "saved";
    ui->label_message->setText("Saved...");
}

//fonction qui charge
void MainWindow::on_actionLoad_triggered()
{
    QSettings settings("MaConfig.ini", QSettings::IniFormat);
    settings.beginGroup("config");

    //pour éviter que ça charge plusieurs fois le meme message
    ui->listWidget->clear();
    for (int i = 0; i < 100; i++)
    {
        QString message = settings.value("message" + QString::number(i), "").toString();
        if (message == "")
            break;
        ui->listWidget->insertItem(i,message);
    }  
    settings.endGroup();
    qDebug() << "loaded";
    ui->label_message->setText("Loaded...");
}

void MainWindow::on_actionRaffraichir_triggered()
{
    QSettings settings("MaConfig.ini", QSettings::IniFormat);
    settings.beginGroup("config");
    settings.remove("");
    on_actionLoad_triggered();
    qDebug() << "reset";
    ui->label_message->setText("Reset...");
}


