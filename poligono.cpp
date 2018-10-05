#include <cmath>
#include "poligono.h"
#include "point.h"

using namespace std;

Poligono::Poligono(){

}
Poligono::~Poligono(){

}

void Poligono::setp(int nnv){
    float ix, iy;

    for(int i = 0; i < nnv; i++){
        cout << "Digite o valor de x" << i << ": "; cin >> ix;
        cout << "Digite o valor de y" << i << ": "; cin >> iy;
        vertices[i].setXY(ix,iy);
        cout << endl;
    }

    nv = nnv;
}

int Poligono::qtv(void){
    return nv;
}

float Poligono::area(void){
    float s1 = 0, s2 = 0, a;

    vertices[nv] = vertices[0];

    for(int i = 0; i < nv; i++){
        s1 = s1 + (vertices[i].getX() * vertices[i+1].getY());
    }

    for(int j = 0; j < nv; j++){
        s2 = s2 + (vertices[j].getY() * vertices[j+1].getX());
    }

    a = abs((s2 - s1))/2;
    return a;
}

void Poligono::translada(float a, float b){
    Point pt;
    pt.setXY(a,b);
    for(int i = 0; i < nv; i++){
        vertices[i].add(pt);
    }
}

void Poligono::rotacionar(float x1, float y1, double g){
    Point pr[nv], par[nv], aux[nv];
    g = (g/180) * 3.141592654;

    for(int i = 0; i < nv; i++){
        aux[i].setX((vertices[i].getX() - x1));
        aux[i].setY((vertices[i].getY() - y1));
    }

    for(int i = 0; i < nv; i++){
        par[i].setX(((aux[i].getX() * cos(g)) - (aux[i].getY() * sin(g))));
        par[i].setY(((aux[i].getX() * sin(g)) + (aux[i].getY() * cos(g))));
    }

    for(int i = 0; i < nv; i++){
        pr[i].setX((par[i].getX() + x1));
        pr[i].setY((par[i].getY() + y1));
    }

    for(int i = 0; i < nv; i++){
       vertices[i].setX(pr[i].getX());
       vertices[i].setY(pr[i].getY());
    }
}

void Poligono::cm(Point &cg){
    Point cga;

    for(int i = 0; i < nv; i++){
        cga.setX((cga.getX() + vertices[i].getX()));
        cga.setY((cga.getY() + vertices[i].getY()));
    }

    cg.setXY((cga.getX()/nv),(cga.getY()/nv));
}

void Poligono::imprimep(){
    for(int in = 0; in < nv; in++){
        vertices[in].imprime();
        cout << " -> ";
    }

    vertices[0].imprime();
    cout << "\n" <<endl;
}
