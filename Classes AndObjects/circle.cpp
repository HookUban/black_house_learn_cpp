
#include "circle.h"



void Circle::setCircle(int r, int x, int y)
{
    m_r = r;
    m_Center.setPoint(x, y);
}
int Circle::getR()
{
    return m_r;

}
int Circle::getX()
{
    return m_Center.getX();
}
int Circle::getY()
{
    return m_Center.getY();
}
