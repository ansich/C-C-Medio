#include <iostream>
using namespace std;


class Entero{
public:
    Entero(int x):num(x){}
    int get(){ return num;}
    void set(int x){ num = x;}

    // operadores ++ y --

    Entero &operator ++(){ set(get() + 1); return *this;}
    Entero &operator --(){ set(get() - 1); return *this;}
    Entero  operator ++(int post){  Entero copia(*this); set(get() + 1); return copia;}
    Entero  operator --(int post){  Entero copia(*this); set(get() - 1); return copia;}

    //op + y - normales (objeto + objeto)

    Entero operator + (Entero &b){ Entero toret(this-> get() + b.get()); return toret;}

    // operadores + y - (objeto + int)

    Entero operator + (int a){ Entero toret(this->get()+ a); return toret;}


    //operadores + y - (int + objeto)

    friend Entero operator +(int a, Entero &e){ Entero toret(a + e.get()); return toret;}
    friend Entero operator -(int a, Entero &e){ Entero toret(a - e.get()); return toret;}

    // += etc.

    Entero &operator +=(Entero &b){ this->num += b.get();return *this;}

    friend ostream &operator << (ostream &f, Entero &e ){ f << e.get(); return f;}
    friend istream &operator >> (istream &f, Entero &e ){ int x; f >> x; e.set(x); return f; }
    ///friend bool operator == ( Entero &e1, Entero &e2){ if(e1.get() == e2.get()){ return true; }else{ return false;}}

    operator int(){return get();}

private:
    int num;

};

void ejercicio1()
{
    Entero a1( 1 );
    Entero a2( 2 );

    cout << "Iguales: " << ( a1 == a2 ) << endl;
}

int main()
{
    Entero a1 = 3;
    Entero a2 = 5;

    Entero a3 = a1 + a2;
    ejercicio1();
    cout << a3 ;   //8
    cout << --a3; //7
    cout << a3-- + 2;   //9
    cout << a3; //6
    a3 += a1;
    cout << "\n" << a3 ;
    cout << "\nPrueba cin sobrecarga, mete un valor: " ;
    cin >> a3;
    cout << "metiste: " << a3;
}
