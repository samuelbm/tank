#include "player.h"
#include "widget.h"
#include <QDebug>
#include <QPointF>
#include <QtCore/qmath.h>





player::player(QGraphicsItem *parent): QGraphicsPixmapItem(parent)
{
    setPixmap(QPixmap(":/images/tank.png"));

    attaque_tourelle = new large_tourelle();
//    attaque_tourelle->setPos(150,150);
//    attaque_tourelle->setFlag(QGraphicsItem::ItemIsFocusable);
//    attaque_tourelle->setFocus();
//    scene()->addItem(attaque_tourelle);


    timer = new QTimer(this);

    timer->start(10);
    timer->start();

    QObject::connect(timer, SIGNAL(timeout()), this, SLOT(avance()));
}

void player::keyPressEvent(QKeyEvent *event)
{

    switch(event->key())
    {
        case Qt::Key_A:
            this->on_left_click();
            break;
        case Qt::Key_D:
            this->on_right_click();
            break;
        case Qt::Key_W:
            this->on_up_click();
            break;
        case Qt::Key_S:
            this->on_down_click();
            break;
        case Qt::Key_Space:
            this->on_stop_click();
            break;
    }
}

  void player::on_left_click()
  {
    direction = GAUCHE;
  }

  void player::on_right_click()
  {
    direction = DROIT;
  }

  void player::on_up_click()
  {
    direction = HAUT;
  }

  void player::on_down_click()
  {
        direction = BAS;
  }

  void player::on_stop_click()
  {
    direction = ARRET;
  }

  void player::avance()
  {
    switch(this->direction)
    {
    case HAUT:
        this->haut();
        break;
    case BAS:
        this->bas();
        break;
    case DROIT:
        this->droit();
        break;
    case GAUCHE:
        this->gauche();
        break;
    case ARRET:
        this->arret();
        break;
    }
  }

  void player::haut()
  {
    QPointF point = pos();
    qreal rotat = rotation();
    point.setY(point.y() - delta_y*qCos(rotat*2*M_PI/360));
    point.setX(point.x() + delta_y*qSin(rotat*2*M_PI/360));
    setPos(point);
  }

  void player::bas()
  {
      QPointF point = pos();
      qreal rotat = rotation();
      point.setY(point.y() + delta_y*qCos(rotat*2*M_PI/360));
      point.setX(point.x() - delta_y*qSin(rotat*2*M_PI/360));
      setPos(point);
  }

  void player::droit()
  {
      qreal rotat = rotation();
      setTransformOriginPoint(20,35);
      setRotation(rotat + 1);
  }

  void player::gauche()
  {
      qreal rotat = rotation();
      setTransformOriginPoint(20,35);
      setRotation(rotat - 1);
  }

  void player::arret()
  {

  }

