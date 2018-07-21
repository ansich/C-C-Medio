#include <iostream>
#include <string>

using namespace std;

class Triangulo {
public:
      Triangulo(int l1, int l2, int l3);
      int funcion1(int a, int b);
      void funcion2(int a=1);
      void funcion3(int a=1, int b=0, int c=0);
private:

      int lado1;
      int lado2;
      int lado3;
};

    void funcion2(int a=1){
        cout << "hola" << endl;
    }
    void funcion3(int a=1, int b=0, int c=0){
        cout << "hola" << endl;
    }

int main()
{
      Triangulo conjunto[5];
      cout << "Lado1 del ultimo triangulo" << conjunto[ 5 ].lado1;
      funcion2( 15 );
      funcion3( 23 );
}
