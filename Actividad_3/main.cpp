#include <iostream>
#include <string>
using namespace std;

class Fecha{
public:
    Fecha(int d):dia(d){}
    int getDia(){return dia;}
    friend ostream &operator << (ostream &f, Fecha &fe) { f << fe.getDia << endl; return f;}
    operator int(){return get();}
private:
    int dia;
};

int main()
{
    Fecha f1(2);
    Fecha f2(2);



    cout << f1==f2 << endl;

}
