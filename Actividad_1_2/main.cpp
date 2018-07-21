#include <iostream>
#include <string>

using namespace std;

class Punto2D {

public:

    Punto2D(double c1, double c2);
    ~Punto2D();
    double getX();
    double getY();

private:

    double x = 100;
    double y = 100;
};

Punto2D::Punto2D(double c1, double c2){
    cout << "\ncontructor" << endl;
    x = c1;
    y = c2;
}

Punto2D::~Punto2D(){
    cout << "destructor" << endl;
}

double Punto2D::getX(){
    return x;
}

double Punto2D::getY(){
    return y;
}

int main(){
    double a;
    double b;
    cout << "\nintroduzca coordenada x" <<endl;
    cin >> a;
    cout << "\nintroduzca coordenada y" <<endl;
    cin >> b;
    Punto2D Punto1 (a, b);

    cout << "\nEl punto de coordenadas: x = " << Punto1.getX() << " e y = " << Punto1.getY() <<endl;
}
