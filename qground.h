#ifndef QGROUND_H
#define QGROUND_H

#include "qgameelement.h"

class QGround : public QGameElement
{
    Q_OBJECT
private:
    int xFrame1;
    int xFrame2;
    static const int xMax=383;
    static const int dX=-6;
    static const int yMax=447;
public:
    explicit QGround(QObject *parent = 0);
    void draw(QPainter *);
    void logic();
signals:

public slots:

};

#endif // QGROUND_H
