#ifndef PLAYER_H
#define PLAYER_H

#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsView>
#include <QGridLayout>
#include <QKeyEvent>
#include <QTimer>
#include <QGraphicsPixmapItem>
#include "large_tourelle.h"


enum Direction {HAUT, BAS, DROIT, GAUCHE, ARRET};

class player:public QObject, public QGraphicsPixmapItem{
    Q_OBJECT
public:
    player(QGraphicsItem * parent = nullptr);

public slots:
    void avance();

private:

    large_tourelle * attaque_tourelle;

    QTimer *timer;

    int delta_y = 1;
    int delta_x = 1;

    void keyPressEvent(QKeyEvent *event);

    void on_left_click();
    void on_right_click();
    void on_up_click();
    void on_down_click();
    void on_stop_click();

    void haut();
    void bas();
    void droit();
    void gauche();
    void arret();



    Direction direction;
};

#endif // PLAYER_H
