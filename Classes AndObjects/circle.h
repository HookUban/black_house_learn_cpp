
#include "point.h"
#ifndef CLASSES_ANDOBJECTS_CIRCLE_H
#define CLASSES_ANDOBJECTS_CIRCLE_H


class Circle
{
private:
    int m_r;
    Point m_Center;

public:
    void setCircle(int r, int x, int y);
    int getR();
    int getX();
    int getY();
};



#endif //CLASSES_ANDOBJECTS_CIRCLE_H
