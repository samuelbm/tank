#include "widget.h"
#include <QDebug>
#include <QPointF>
#include <QtCore/qmath.h>
#include <QBrush>
#include <QGraphicsTextItem>
#include <QImage>


Widget::Widget(QWidget *parent)
    : QWidget(parent)
{

    scene = new QGraphicsScene(0, 0, 400,400,this);
    scene->setBackgroundBrush(QBrush(QImage(":/images/map.jpg")));


    view = new QGraphicsView(scene);

    grid = new QGridLayout(this);

    grid->addWidget(view);

    tank = new player();
    tank->setPos(220,200);
    tank->setFlag(QGraphicsItem::ItemIsFocusable);
    tank->setFocus();
    scene->addItem(tank);

    fighter = new ennemy();
    fighter->setPos(100,100);
    fighter->setScale(0.2);
    scene->addItem(fighter);


    attaque_tourelle = new large_tourelle();
//    attaque_tourelle->setPos(220,300);
//    attaque_tourelle->setFlag(QGraphicsItem::ItemIsFocusable);
//    attaque_tourelle->setFocus();
//    scene->addItem(attaque_tourelle);



    timer = new QTimer(this);

    timer->start(10);
    timer->start();



}

Widget::~Widget()
{

}


