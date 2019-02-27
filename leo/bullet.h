#ifndef BULLET_H
#define BULLET_H


#include <QGraphicsPixmapItem>
#include <QObject>


class bullet: public QObject, public QGraphicsPixmapItem{
    Q_OBJECT
public:
    bullet(QGraphicsItem * parent = nullptr);
public slots:
    void move();
};

#endif // BULLET_H
