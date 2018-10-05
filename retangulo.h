#ifndef RETANGULO_H
#define RETANGULO_H
#include <iostream>
#include "poligono.h"
#include "point.h"

class Retangulo : public Poligono {
private:
    Poligono vert;
    float  x, y, largura, altura;

public:
    Retangulo(float _x = 0, float _y = 0, float _largura = 4, float _altura = 3);
    ~Retangulo();
    void setR(void);
};

#endif // RETANGULO_H
