#include <iostream>
#include "point.h"
#include "poligono.h"
#include "retangulo.h"

using namespace std;

int main(){
    Retangulo r;
    Point cg, c;
    Poligono po;
    int n, o1;
    char o2;
    float g;

    do{
        do{
            cout << "Escolha qual operacao: \n1 - Teste da classe retangulo\n2 - Programa-exemplo" << endl;
            cout << "\nOperacao: ";
            cin >> o1;
            cout << endl;
        } while(o1 < 1 || o1 > 2);

        switch (o1){
        case 1:
            cout << "Poligono inalterado:\n";
            r.setR();
            r.imprimep();
            cout << "Area: " << r.area() << "\n\n" << endl;

            cout << "Poligono transladado:\n";
            r.translada(-3,4);
            r.imprimep();
            cout << "Area: " << r.area() << "\n\n" << endl;

            cout << "Poligono rotacionado:\n";
            r.cm(cg);
            r.rotacionar(cg.getX(),cg.getY(),30);
            r.imprimep();
            cout << "Area: " << r.area() << "\n" << endl;
            break;


        case 2:
            do{
                cout << "Digite a quantidade de vertices do poligono: "; cin >> n;
            } while(n < 3 || n > 100);

            Point p[n];

            cout << endl;

            po.setp(n);
            cout << endl;
            cout << "Poligono inalterado:" << endl;
            po.imprimep();
            cout << "Area do poligono: " << po.area();
            cout << "\n" << endl;
            cout << "Quantidade de vertices: " << po.qtv() << endl;
            cout << "\n" << endl;

            cout << "Poligono transladado em (+10,+10):" << endl;
            po.translada(10,10);
            po.imprimep();
            cout << "Area do poligono: " << po.area();
            cout << "\n" << endl;

            cout << endl;
            po.cm(c);
            cout << "Centro de geometrico do poligono: "; c.imprime();
            cout << "\n" << endl;

            cout << "Em quantos graus o poligono devera ser rotacionado? ";
            cin >> g;

            cout << "\nPoligono rotacionado: " << endl;
            po.rotacionar(c.getX(),c.getY(),g); po.imprimep();

            cout << "Area do poligono: " << po.area();
            cout << "\n" << endl;
            break;
        }

        do{
            cout << endl;
            cout << "Deseja continuar no programa? (S/N)" << endl;
            cin >> o2;
            cout << endl;
        } while(o2 != 's' && o2 != 'S' && o2 != 'n' && o2 != 'N');

    } while(o2 != 'n' && o2 != 'N');

    return 0;
}
