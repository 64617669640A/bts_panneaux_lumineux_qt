#ifndef SIMULATION_H
#define SIMULATION_H

#include <QDialog>
#include <QPainter>
#include <QImage>

namespace Ui {
class simulation;
}

class simulation : public QDialog
{
    Q_OBJECT

public:
    explicit simulation(QWidget *parent = 0);
    ~simulation();
    int AffCar(int numCar, int x, int y);
    int AffText(QString text, int longueur, int largeur);
    int hPolice[7],wPolice[5];
    int Police[6][256][12];  //tableau de caractère
    void paintEvent(QPaintEvent *);

    QString text;  //text du listwidget.
    QString colortext;
    QImage color;  //color du LED de la combobox_color.
    int pos_X, pos_Y; //pos X et Y de la combobox X et Y.


private:
    Ui::simulation *ui;
    QImage ImgFond, rouge_clair, Jaune, vert_clair;
    QImage rouge_sombre, vert_sombre, orange, marron, ambre;



};

#endif // SIMULATION_H
