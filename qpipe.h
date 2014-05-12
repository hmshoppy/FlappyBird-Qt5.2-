#ifndef QPIPE_H
#define QPIPE_H

#include "qgameelement.h"

class QPipe : public QGameElement
{
    Q_OBJECT
private:
    static int lastRandom;
    int pipeType;
    bool emited;
    static const qreal randomY[2][6];
public:
    explicit QPipe(QObject *parent = 0);
    void draw(QPainter *);
    void logic();
    void setPipeType(int _type){pipeType=_type;}
signals:
    void scoreAdd();
public slots:

};

#endif // QPIPE_H
