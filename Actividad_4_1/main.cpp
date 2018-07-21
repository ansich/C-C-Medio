#include <iostream>
#include <cstdlib>
using namespace std;

class Complejo{
public:
    Complejo(int r, int i);
    Complejo();
    ~Complejo();
    Complejo(const Complejo &c);
    int getReal();
    int getImg();
    void setReal(int r);
    void setImg(int i);
    friend Complejo operator + (Complejo &a, Complejo b);
    friend ostream &operator << (ostream &f, Complejo c);
private:
    int real;
    int imaginaria;
};

Complejo::Complejo(int r, int i){
    real = r;
    imaginaria = i;
        }
Complejo::Complejo(){};

Complejo::~Complejo(){};

Complejo::Complejo(const Complejo &c){
    this-> imaginaria = c.imaginaria;
    this-> real = c.real;
}

int Complejo::getReal(){
    return real; }

int Complejo::getImg(){
    return imaginaria; }

void Complejo::setReal(int r){
    real = r;}

void Complejo::setImg(int i){
    imaginaria = i;}

Complejo &Complejo::operator +(Complejo &a, Complejo b){
    this -> real += b.real;
    this -> imaginaria += b.imaginaria;
    return *this;
    }
Complejo::ostream operator << (ostream &f, Complejo c){
    f << c.real;
    f << c.imaginaria;
    return f;
}
Complejo operator +(Complejo &a, Complejo b){
    a.real += b.real;
    a.imaginaria += b.imaginaria;
    return a;
}

int main()
{
    Complejo c1 (2,3);
    Complejo c2 (3,4);
    Complejo c3;

    c3= c1 + c2;
    cout << c3;
    //cout << "Numero: " << prueba.getReal() << "+" << prueba.getImg() << "i" << endl;
    return 0;
}
