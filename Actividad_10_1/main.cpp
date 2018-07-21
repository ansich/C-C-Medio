#include <iostream>
#include <list>
#include <cstdlib>

using namespace std;

class Prueba{
public:
    Prueba(int n):no(n){}
    int getN(){ return no;}
    friend ostream &operator << (ostream &f, Prueba &p){
        f << p.getN() ;
        return f;
    }
private:
    int no;
};

int main()
{
    list<Prueba> notas;
    list<Prueba*> notas2;
    int nota;

    for (int i =0; i<5;i++){
        cout << "introduzca notas: " << endl;
        cin >> nota;
        notas.push_back(Prueba(nota));
    }

    while(!notas.empty()){
        cout << notas.front() << endl;
        notas.pop_front();
    }
    cout << "\n\n\nHello world!" << endl;
    return 0;
}

