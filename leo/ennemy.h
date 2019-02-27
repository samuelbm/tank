#ifndef ENNEMY_H
#define ENNEMY_H


#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsView>
#include <QGridLayout>
#include <QKeyEvent>
#include <QTimer>
#include <QGraphicsPixmapItem>
#include "large_tourelle.h"


class ennemy:public QObject, public QGraphicsPixmapItem{
    Q_OBJECT
public:
    ennemy(QGraphicsItem * parent = nullptr);

};

#endif // ENNEMY_H
