#include <iostream>
#include <string>
using namespace std;

class Base{
 public:
    Base(string c):i(c){ cout << "\nContructor de la Base"; }
    ~Base(){ cout << "\nDestructor de la Base"; }
    string tostring(){ return i; }
    string getI(){ return i;}

protected:
    string i;

};

class Derivada: public Base{
public:
    Derivada(string i, string c): Base(i), j(c){ cout << "\nContructor derivada";}
    ~Derivada(){ cout << "\nDestructor derivada";}
    string tostring(){return " Derivada " + i + j;}
    string getJ(){return j;}
protected:
    string j;
};

int main()
{
    Derivada d("undos3", " 4cincoseis");
    cout << d.tostring() << endl  ;
    cout << d.Base::tostring() << endl;
    return 0;
}
