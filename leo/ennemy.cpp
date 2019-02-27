#include "ennemy.h"




ennemy::ennemy(QGraphicsItem *parent): QGraphicsPixmapItem(parent)
{
        setPixmap(QPixmap(":/images/ennemie.png"));
}
