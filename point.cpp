#include "point.h"
#include <cmath>

using namespace std;

Point::Point(){
   x = 0;
   y = 0;
   //cout << "Construtor!" << endl;
}

Point::~Point(){
    //cout << "Destrutor!" << endl;
}

void Point::setX(float mx){
    x = mx;
}
void Point::setY(float my){
    y = my;
}
void Point::setXY(float mx, float my){
    x = mx;
    y = my;
}
float Point::getX(void){
    return x;
}
float Point::getY(void){
    return y;
}

void Point::add(Point p1){
    Point vr;
    x = x + p1.x;
    y = y + p1.y;
}
void Point::sub(Point p1){
    x = x - p1.x;
    y = y - p1.y;
}
float Point::norma(void){
    return sqrt(x*x + y*y);
}
void Point::translada(float a, float b){
    x = x + a;
    y = y + b;
}
void Point::imprime(void){
    cout << '(' << x << ',' << y << ')';
}
