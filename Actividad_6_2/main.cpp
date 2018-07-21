#include <iostream>

using namespace std;

class Coche{
public:
    Coche(string mat, string mod, int p,int o);
    ~Coche();
    void arranca();
    void frena();
    void acelera();
    void modificaOcupantes(int o);
    int verOcupantes();
    string matricula;
    string modelo;
    int puertas;
    int ocupantes;
};

Coche::Coche (string mat, string mod, int p,int o){
    matricula = mat;
    modelo = mod;
    puertas = p;
    ocupantes = o;
}

Coche::~Coche(){};

void Coche::arranca(){
    cout << "Arranca" << endl;
}
void Coche::frena(){
    cout << "Frena" << endl;
}
void Coche::acelera(){
    cout << "Acelera" << endl;
}
void Coche::modificaOcupantes(int o){
    ocupantes = o;
}
int Coche::verOcupantes(){
    return ocupantes;
}
int main(){
    Coche Audi("4635", "Audi", 4, 3 );
    int ocupantes;

    Audi.arranca();
    Audi.frena();
    Audi.acelera();

    cout << "Matricula: " << Audi.matricula << " Modelo: " << Audi.modelo << " Puertas: " << Audi.puertas << " Ocupantes: " << Audi.verOcupantes() << endl;
    cout << "Nuevo num de ocupantes" << endl;
    cin >> ocupantes;
    Audi.modificaOcupantes(ocupantes);
    cout << "Matricula: " << Audi.matricula << " Modelo: " << Audi.modelo << " Puertas: " << Audi.puertas << " Ocupantes: " << Audi.verOcupantes() << endl;
}
