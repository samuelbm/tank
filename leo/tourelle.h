#ifndef TOURELLE_H
#define TOURELLE_H


#include <QGraphicsPixmapItem>

enum sens{CW,CCW};

class tourelle:public QGraphicsPixmapItem
{
public:
    virtual ~tourelle();


    virtual void fire()=0;
    virtual void move(sens p_sens);
protected:
    void init();
private:
    virtual void clock_wise();
    virtual void counter_clock_wise();
};

#endif // TOURELLE_H
