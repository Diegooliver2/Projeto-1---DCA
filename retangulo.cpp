#include "retangulo.h"
#include "poligono.h"
#include "point.h"

using namespace std;

Retangulo::Retangulo(float _x, float _y, float _largura, float _altura){
x = (_x); y = (_y); largura = (_largura); altura = (_altura);

}

Retangulo::~Retangulo(){

}

void Retangulo::setR(){
    //Point verta[4];

    vertices[3].setXY(x,y);
    vertices[2].setXY(largura,y);
    vertices[1].setXY(largura,y-altura);
    vertices[0].setXY(x,y-altura);

    nv = 4;
}
