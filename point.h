#ifndef POINT_H
#define POINT_H
#include <iostream>

class Point{

private:
    float x, y;

public:
    Point();
    ~Point();

    void setX(float mx);
    void setY(float my);
    void setXY(float mx, float my);
    float getX(void);
    float getY(void);

    void add(Point p1);
    void sub(Point p1);
    float norma(void);
    void translada(float a, float b);
    void imprime(void);
};

#endif // POINT_H
