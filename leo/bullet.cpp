#include "bullet.h"
#include <QTimer>
#include "large_tourelle.h"
#include <QDebug>
#include "widget.h"
#include "player.h"
#include <QList>
#include "ennemy.h"

bullet::bullet(QGraphicsItem *parent): QGraphicsPixmapItem(parent)
{
    setPixmap(QPixmap(":/images/bullet.png"));
    setPos(0,0);
    setScale(0.1);
    QTimer * timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    timer->start(50);
}

void bullet::move(){
    QList<QGraphicsItem *> colliding_items = collidingItems();
    for (int i = 0, n = colliding_items.size(); i < n; ++i){
        if (typeid(*(colliding_items[i])) == typeid (ennemy)){
            scene()->removeItem(colliding_items[i]);
            scene()->removeItem(this);
        }
    }
    setPos(x(),y()-10);
//    qDebug() <<attaque_tourelle().x()

}
