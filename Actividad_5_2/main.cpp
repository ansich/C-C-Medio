#include <iostream>
#include <string>
using namespace std;

class Hora{
public:
    Hora(int h, int m):hora(h), minuto(m){}

int getHora(){
    return hora;
    }

int getMin(){
    return minuto;
    }

int getSeg(){
    return segundo;}

private:
    int hora;
    int minuto;
    int segundo;
};


class Fecha{
public:
    Fecha (int d, string me):dia(d), mes(me){}

int getDia(){
    return dia;
}

string getMes(){
    return mes;
}

int getAnho(){
    return anho;
}

private:
    int dia;
    string mes;
    int anho;
};


class Reunion: public Hora, public Fecha{
public:
    Reunion(string des, int h, int m, int d, string me):despacho(des), Hora(h, m), Fecha(d, me){}

    string getDes(){
        return despacho;
        }

private:
    string despacho;

};

class ReunionPeriodica: public Reunion{
public:
    ReunionPeriodica( int f, string des, int h, int m, int d, string me):frecuencia(f), Reunion(des, h, m, d, me){}


    int getFrec(){
        return frecuencia;
        }


private:
    int frecuencia = 15;

};

int main()
{
    ReunionPeriodica r (15, "311-a", 5, 15, 4, "Marzo");
    cout << "La reunion es en el despacho " << r.getDes() << " a la(s) " << r.getHora() << ":" << r.getMin() << " el dia " << r.getDia() << " de " << r.getMes() << endl;
    cout << "\nLa proxima reunion sera en: " << r.getFrec() << " dias" << endl;
    return 0;
}
