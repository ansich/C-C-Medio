#include <iostream>
#include <string>
using namespace std;

/*7. Implementa la clase Complejo, que representa números complejos. Además de los
métodos que permitan acceder a ambas partes (real e imaginaria) del número
complejo, crea varios objetos de dicha clase y usa los métodos diseñados
para acceder a sus componentes.*/

class Complejo{
public:
    Complejo(int r, int i);
    ~Complejo();
    int verReal(int r);
    int verImg (int i);
    int real;
    int img;

};

Complejo::Complejo(int r, int i){
    cout << "constructor" << endl;
    real = r;
    img = i;
}
Complejo::~Complejo(){
    cout <<"destructor" << endl;
    }
int Complejo::verReal(){
    return real;
}
int Complejo::verImg(){
    cout << Parte imaginaria: << endl;
    return img;
}


int main()
{
    Complejo Num(3, 2);
    Num.verReal();
    Num.verImg();

    cout << "El numero es: " << Num.getReal() << " + " << Num.getImg() << "i" << endl;

    return 0;
}
