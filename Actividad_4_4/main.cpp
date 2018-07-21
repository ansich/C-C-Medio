//Escribe la definición de la clase e implementa constructores y destructores adecuados.
//• Implementa un constructor de copia.
//• Implementa un insertor y un extractor.
//• Sobrecarga el operador == para comprobar si dos polinomios son iguales.

#include <iostream>
#include <ostream>
#include <sstream>

using namespace std;

class Polinomio {
public:
    Polinomio(int g);
    ~Polinomio();
    Polinomio(const Polinomio &p);
    friend istream operator >> (istream &f, Polinomio p);
    friend ostream operator << (ostream &f, Polinomio &p);
    bool operator == (Polinomio p);
    //friend operator == (Polinomio p1, Polinomio p2)

private:
    int grado;
    int *terminos;
};

Polinomio::Polinomio(int g){
    terminos = new (nothrow) int [grado + 1];
    grado = g;
     for (int i=0; i < grado + 1; i++){
            cout << "int term: ";
            cin >> terminos[i];
    }
}
Polinomio::~Polinomio(){}
Polinomio::Polinomio(const Polinomio &p){
    grado = p.grado;
    for (int i=0; i< grado + 1; i++){
        terminos[i] = p.terminos[i];
    }
}

/*istream &operator >> (istream &f, Polinomio p){
    cout << "introduzca valores; " ;
    for (int i=0; i < p.grado + 1; i++){            // importante "p.grado + 1"
        f >> p.terminos[i];
    }
    return f;
}

ostream &operator << (ostream &f, Polinomio &p){
    for (int i=0 ; i<p.grado + 1 ; i++){
        f << p.terminos[i];
    }
    return f;
}*/

bool operator == (Polinomio p1, Polinomio p2){
    if (p1.grado != p2.grado){
        return false;
    }else{
        for (int i  =0; i < grado + 1; i++){
            if (p1.terminos[i] != p2.terminos[i]){
                return false;
            }
        }
    }
    return true;
}

int main()
{
    Polinomio p1(3);
    Polinomio p2 (3);
    int valor = 0;
    cin  >> p1;
    cout << p1;
    if (p1 == p2){
        cout << "Iguales";
    }
    return 0;
}
