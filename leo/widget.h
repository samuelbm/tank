#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsView>
#include <QGridLayout>
#include <QKeyEvent>
#include <QTimer>
#include "player.h"
#include "large_tourelle.h"
#include "ennemy.h"



class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

public slots:


private:

    QGraphicsScene *scene;
    player * tank;
    ennemy * fighter;
    large_tourelle * attaque_tourelle;
    QGraphicsView *view;
    QGridLayout *grid;
    QTimer *timer;

};

#endif // WIDGET_H
