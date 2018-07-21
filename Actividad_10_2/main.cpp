#include <iostream>
#include <list>
#include <cstdlib>
using namespace std;

class Direcciones{
public:
    Direcciones(const string &n, const string &ap1, const string &ap2, const string &d, int nu)
    : nombre(n), api1(ap1), api2(ap2),dire(d), num(nu) {}

    string getNom(){ return nombre; }
    string getAp1(){ return api1; }
    string getAp2(){ return api2; }
    string getDir(){ return dire; }
    int getNum(){ return num; }
    friend ostream &operator << (ostream &f, Direcciones d){
        f << d.getNom() << " " <<
             d.getAp1() << " " <<
             d.getAp2() << " " <<
             d.getDir() << " " <<
             d.getNum() <<
             endl;

        return f;
    }

private:
    string nombre;
    string api1;
    string api2;
    string dire;
    int num;
};

void Ordenar(list<Direcciones> l){

    list<Direcciones>::iterator it;
    list<Direcciones>::iterator it2;
    Direcciones aux(" "," "," "," ",3);
    Direcciones aux2(" "," "," "," ",4);
    Direcciones aux3(" "," "," "," ",0);
    it = l.begin();
    it2 = l.begin();
    it2 ++;
    cout << "1" << endl;
    while( it != l.end()){

            if( (*it).getAp1() > (*it2).getAp1()){
                aux3 = aux;
                aux = aux2;
                aux2 = aux3;
            }
                it++;
                it2++;
        }
        cout << "\n " << aux << "\n " << aux2 << "\n " << endl;
    }

int main()
{
    Direcciones d1("David", "Ansia", "Fernandez", "Bispo Lourenzo", 1);
    Direcciones d2("Martin", "Pardo", "Perez", "Dali", 9);
    Direcciones d3("Juan Carlos", "Del Canto", "Gomez", "Posio", 43);
    list<Direcciones> agenda;
    agenda.push_back(d3);
    agenda.push_back(d1);
    agenda.push_back(d2);

    list<Direcciones>::iterator it;
    it = agenda.begin();
    while( it != agenda.end()){
    cout << "Direccion: " << *it;
    it++;
    }

    Ordenar(agenda);
    return 0;
}
