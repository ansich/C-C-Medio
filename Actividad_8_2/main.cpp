#include <iostream>
#include <string>
#onclude <list>
using namespace std;


class Figura {

public:

    Figura(){}

    virtual ~Figura() {}

    virtual double calcularArea() const { return 0.0; }
};

class Rectangulo : public Figura {

public:

    Rectangulo(int l1, int l2) : lado1(l1), lado2(l2) {}

    double calcularArea()const { return lado1 * lado2; }

private:

    int lado1;
    int lado2;
};

class Circulo : public Figura {

public:

    Circulo(double r) : radio(r) {}

    double calcularArea()const { return PI * radio * radio; }

private:
    const double PI = 3,1416;
    double radio;
};

class Triangulo: public Figura {

public:

    Triangulo(int b, int h) : base(b), altura(h) {}

    double calcularArea()const { return (base * altura)/2; }

private:
    double base;
    double altura;
};

float sumarAreas(list<Figura*> lista){
    float suma = 0;

    list<Figura*>::iterator it;
    it = lista.begin();

    while(it != lista.end()){
        Figura *aux;
        aux = *it ;
        suma = suma + aux;
        it++;
    }

    return suma;
}

int main(){

    int num;
    int l1;
    int l2;
    int r;
    int b;
    int h;
    int opcion;
    list<Figura*> lista;
    cout << "introduzca numero de figuras: " << endl;
    cin >> num;
    for (int i = 0; i < num; i++){
        cout << "introduzca opcion (1.cuadrado, 2.circulo, 3.triangulo)" << endl;
        cin >> opcion;
        switch(opcion){
            case 1:
                cout << "l1" << endl;
                cin >> l1;
                cout << "l2" << endl;
                cin >> l2;
                Figura = new Rectangulo(l1,l2);
                lista.push_back(Figura);
            break;
            case 2:
                cout << "radio" << endl;
                cin >> r;
                Figura = new Circulo(r);
                lista.push_back(Figura);
            break;
            case 3:
                cout << "base" << endl;
                cin >> b;
                cout << "altura" << endl;
                cin >> h;
                Figura = new Triangulo(b,h);
                lista.push_back(Figura);
            break;
            break default;
        }

    }
    return 0;

}
