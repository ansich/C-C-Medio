#include <iostream>
#include <string>
#include <list>
#include <math.h>
using namespace std;

/*7. Implementa la clase Complejo, que representa números complejos. Además de los
métodos que permitan acceder a ambas partes (real e imaginaria) del número
complejo, crea varios objetos de dicha clase y usa los métodos diseñados
para acceder a sus componentes.*/

class Complejo{
public:
    Complejo(int r, int i);
    ~Complejo();
    int verReal();
    int verImg ();
private:
    int real;
    int img;

};

Complejo::Complejo(int r, int i){
    real = r;
    img = i;
}
Complejo::~Complejo(){}

int Complejo::verReal(){
    return real;
}
int Complejo::verImg(){
    return img;
}

int devuelvemenor(list<Complejo> lista){

    Complejo ComplejoMenor(0,0);
    float menor;
    float siguiente;
    list<Complejo>::iterator it;
    it=lista.begin();

    menor = sqrt((it->verReal() * it->verReal()) + (it->verImg() * it->verImg()));

    ComplejoMenor = *it;

    while(it != lista.end()){
        it++;
        siguiente = sqrt((it->verReal() * it->verReal()) + (it->verImg() * it->verImg()));

            if( siguiente < menor ){
                menor = siguiente;
                ComplejoMenor = *it;

            }
        }
            cout << "SOLUCION\n\tEl complejo de menor modulo es: " << ComplejoMenor.verReal() << "+" << ComplejoMenor.verImg() << "i\n\n" ;

    }



int main()
{
    Complejo c1(4, 3);
    Complejo c2(1, 3);
    Complejo c3(2, 3);
    Complejo c4(7, 7);
    list<Complejo> liista;
    liista.push_back(c1);
    liista.push_back(c2);
    liista.push_back(c3);
    liista.push_back(c4);

    devuelvemenor(liista);

    return 0;
}


