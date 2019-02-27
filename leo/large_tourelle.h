#ifndef LARGE_TOURELLE_H
#define LARGE_TOURELLE_H

//#include <QWidget>
//#include <QGraphicsScene>
//#include <QGraphicsRectItem>
//#include <QGraphicsView>
//#include <QGridLayout>
//#include <QKeyEvent>
//#include <QTimer>
//#include <QGraphicsPixmapItem>
#include <QGraphicsItem>
#include "tourelle.h"


enum Action {A_DROIT, A_GAUCHE, STABLE, SHOOT};


class large_tourelle : public tourelle, public QGraphicsPixmapItem{
//    Q_OBJECT

public:
    large_tourelle(QGraphicsItem * parent = nullptr);
    virtual ~large_tourelle();
virtual void fire();

//public slots:
//    void action();


//private:
//    QTimer *timer;

//    int delta_r = 1;

//    void keyPressEvent(QKeyEvent *event);

//    void on_l_click();
//    void on_j_click();
//    void on_k_click();
//    void on_i_click();


//    void droit();
//    void gauche();
//    void shoot();
//    void stop();

//    Action actions;


};

#endif // LARGE_TOURELLE_H
