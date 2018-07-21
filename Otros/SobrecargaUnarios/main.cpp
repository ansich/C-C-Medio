#include <iostream>
using namespace std;

class Entero{
public:
    Entero(int x):num(x){}
    int get() const{ return num; }
    void set(int x){ num = x; }

    Entero &operator++(){ this->set( get() + 1 ); return *this; }

    Entero &operator--(){ set( get() - 1 ); return *this; }    // --obj

    Entero operator++(int post){ Entero copia(*this); set( get() +1 ); return copia; }  //obj++

    Entero operator--(int post){ Entero copia(*this); set( get() - 1); return copia; }

    operator int(){ return get();}

private:
    int num;
};

int main()
{
    Entero e1 = 5;
    Entero e2 = 6;

    e1++;
    cout << e1 << "es" << endl;
    --e2;

    cout << e2;
    cout <<  "\n" << e2++ + 7 << endl;
    cout <<  e2 << endl;

}
