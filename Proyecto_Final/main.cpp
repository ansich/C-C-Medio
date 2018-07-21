#include <iostream>
#include <string>

using namespace std;

///2. Se desea implementar una aplicación que permita gestionar los clientes de una
///empresa. Cada uno de ellos viene determinado por su apellido, su DNI, y la
///facturación mensual. Desarrollar la clase necesaria para manterner la
///información de cada cliente, teniendo en cuenta que no se permite el acceso a
///los atributos, de forma que, si se desea consultar o modificar algún dato, deberá
///hacerse a través de diversos métodos de acceso.

class Punto2D{
public:
    Punto2D(int x , int y): c1(x), c2(y) {}
    Punto2D(Punto2D &p);
    Punto2D();
    int getX(){ return c1;}
    int gety(){ return c2;}
    void setX(int x){ c1 = x;}
    void setY(int y){ c2 = y;}
private:
    int c1, c2;
};

Punto2D::Punto2D(){
    c1 = 5;
    c2 = 5;
}

int main(){

Punto2D p1;
Punto2D &pru = p1;
cout << p1.getX();
int i;
int j;
cout << "x: " << p1.getX() << " e y: " << p1.gety() << endl;
cout << "introduce x" << endl;
cin >> i;
p1.setX(i);
cout << "introduce y" << endl;
cin >> j;
p1.setY(j);
cout << "x: " << p1.getX() << " e y: " << p1.gety() << endl;
return 0;
}


