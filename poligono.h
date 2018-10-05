#ifndef POLIGONO_H
#define POLIGONO_H
#include "point.h"
#include <iostream>

class Poligono{

protected:
    Point vertices[100];
    int nv;

public:
    Poligono();
    ~Poligono();
    void setp(int nvn);
    int qtv(void);
    float area(void);
    void translada(float a, float b);
    void rotacionar(float x1, float y1, double g);
    void cm(Point &cg);
    void imprimep();




};

#endif // POLIGONO_H
