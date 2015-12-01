#include "simulation.h"
#include "ui_simulation.h"
#include <QDebug>
#include <QFile>

simulation::simulation(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::simulation)
{
    ui->setupUi(this);

    ImgFond.load(":/images/ecran.bmp");
    resize(ImgFond.width(),ImgFond.height());
    rouge_clair.load(":/images/light_red.png");
    vert_clair.load(":/images/light_green.png");
    ambre.load("/images/ambre.png");
    rouge_sombre.load(":/images/dark_red.png");
    vert_sombre.load(":/images/dark_green.png");
    marron.load("/images/marron.png");
    orange.load(":/images/orange.png");
    Jaune.load(":/images/yellow.png");

    //QFile permet de lire ou d'écrire sur des fichiers
    QFile file("Font5x7.bin");
    //QFile file("/storage/emulated/0/Font5x7.bin");

    if (!file.open(QIODevice::ReadOnly))
    {
        qDebug()<<"error";
        return;
    }
    else
    {
        QByteArray policeFile = file.readAll();
        qDebug()<< "Taille du fichier:" << policeFile.length() << "octets";

        //récupère les 6 premières caractères en partant de la gauche.
        QString debut = policeFile.left(6);
        qDebug()<< debut;

        //largeur
        wPolice[0] = policeFile.at(6);
        qDebug()<< "Largeur:" << wPolice[0];

        //hauteur
        hPolice[0] = policeFile.at(7);
        qDebug()<< "Hauteur:" << hPolice[0];

        //boucle pour lire le reste des caractères.
        for (int i = 8; i < policeFile.length();)
        {
            int numcar = policeFile.at(i++); //
            for (int j = 0; j < hPolice[0]; j++)
                Police[0][numcar][j] = policeFile.at(i++);
        }
    }
}

simulation::~simulation()
{
    delete ui;
}

int simulation::AffCar(int numCar, int x, int y)  //Affiche un caractère.
{
    QPainter painter(this);

    color = vert_clair; //color vert par defaut

    //je modifie la couleur depuis la combobox.
    if (colortext == "Vert")
        color = vert_clair;

    if (colortext == "Rouge")
        color = rouge_clair;

    if (colortext == "Ambre")
        color = ambre;

    if (colortext == "Rouge sombre")
        color = rouge_sombre;

    if (colortext == "Vert sombre")
        color = vert_sombre;

    if (colortext == "Marron")
        color = marron;

    if (colortext == "Orange")
        color = orange;

    if (colortext == "Jaune")
        color = Jaune;


    for (int i = 0; i < hPolice[0]; i++)
        for(int j = 0, m = 128; j < wPolice[0]; j++, m = m >> 1)
        {
            if (Police[0][numCar][i]&m)
                painter.drawImage((x + j) * 6, (y + i) * 6, color);
        }
}

int simulation::AffText(QString text, int longueur, int largeur) //Affiche une chaine de caractère.
{
    for (int i = 0; i < text.length(); i++)
    {
        //at(i): m'affiche un caractère par caractère décallé de 1 pixel par rapport au précèdent.

         //text.at(i).toLatin1():chaine de caractère
         AffCar(text.at(i).toLatin1(),longueur,largeur);

         //je décale de 1 pixel par caractère.
         longueur = longueur+wPolice[0]+1;
    }
}

void simulation::paintEvent(QPaintEvent *)
{
    QPainter painter(this);

    //Affiche l'image de fond.
    painter.drawImage(0, 0, ImgFond);
    AffText(text, pos_X,pos_Y);
}

