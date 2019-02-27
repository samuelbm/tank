#include "large_tourelle.h"
#include "widget.h"
#include <QDebug>
#include <QPointF>
#include <QtCore/qmath.h>
#include "bullet.h"


large_tourelle::large_tourelle(QGraphicsItem *parent): QGraphicsPixmapItem(parent)
{
    tourelle::init();

    this->setPixmap(QPixmap(":/images/tourelle.png"));

//    timer = new QTimer(this);

//    timer->start(10);
//    timer->start();

//    QObject::connect(timer, SIGNAL(timeout()), this, SLOT(action()));
}
large_tourelle::~large_tourelle(){

}





void large_tourelle::fire(){
    qDebug() <<"fire";
}
//void large_tourelle::keyPressEvent(QKeyEvent *event)
//{
//    switch(event->key())
//    {
//        case Qt::Key_J:
//            this->on_j_click();
//            break;
//        case Qt::Key_L:
//            this->on_l_click();
//            break;
//        case Qt::Key_I:
//            this->on_i_click();
//            break;
//        case Qt::Key_K:
//            this->on_k_click();
//            break;
//    }
//}

//  void large_tourelle::on_j_click()
//  {
//    actions = A_GAUCHE;
//  }

//  void large_tourelle::on_l_click()
//  {
//    actions = A_DROIT;
//  }

//  void large_tourelle::on_i_click()
//  {
//    actions = SHOOT;
//  }

//  void large_tourelle::on_k_click()
//  {
//    actions = STABLE;
//  }


//  void large_tourelle::action()
//  {
//    switch(this->actions)
//    {
//    case SHOOT:
//        this->shoot();
//        break;
//    case STABLE:
//        this->stop();
//        break;
//    case A_DROIT:
//        this->droit();
//        break;
//    case A_GAUCHE:
//        this->gauche();
//        break;
//    }
//  }

//  void large_tourelle::shoot()
//  {
//      bullet * projectile = new bullet();
//      projectile->setPos(x(),y());
//      scene()->addItem(projectile);
//      actions = STABLE;
//  }

//  void large_tourelle::stop()
//  {
//  }

//  void large_tourelle::droit()
//  {
//      qreal rotat = rotation();
//      setTransformOriginPoint(13,55);
//      setRotation(rotat + 1);
//  }

//  void large_tourelle::gauche()
//  {
//      qreal rotat = rotation();
//      setTransformOriginPoint(13,55);
//      setRotation(rotat - 1);
//  }



