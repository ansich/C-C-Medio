#include <iostream>

using namespace std;

class Persona{
public:
    Persona(char d): dni(d){};
private:
    char dni ;

};

class Alumno {      //define la clase Alumno, conteniendo al menos una variable codigo y un constructor paramétrizado
public:
    Alumno(int c, char d): codigo(c){
        p = new (nothrow) Persona (d);
        }
private:
    int codigo;
    Persona *p;
};

class Profesor {   //la clase Profesor, conteniendo al menos una variable despacho y un constructor parametrizado
public:
    Profesor(char des, char d): despacho(des){
        p = new (nothrow) Persona (d);
    }
private:
    char despacho;
    Persona *p;
};

class Becario{       //Después, define la clase Becario que herede a partir de las clases Alumno y Profesor;
public:
    Becario(char m, char d, int c):materia (m), Alumno(d, c){};
string getDni(){
    return d;
    }
int getCodigo(){
    return c;
    }
string getMat(){
    return materia;
    }
private:
    char materia[10];
};




int main()
{
    Becario b1( "12345678A", 1071, "D-411", "PROII" );
    Becario b2( "87654321Z", 1239, "D-313", "PROI" );
    cout << "Hello world!" << endl;
    return 0;
}
