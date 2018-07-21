#include <iostream>
#include <sstream>
using namespace std;

class Matriz{
public:
    Matriz(int f, int c);
    Matriz(const Matriz &m);
    friend ostream &operator << (ostream &f, Matriz m);


private:
    int nFilas;
    int nColumnas;
    int **elementos;
};

Matriz::Matriz(int f, int c){
    nFilas = f;
    nColumnas = c;
    elementos = new (nothrow) int*[nColumnas];
        for (int i=0;i <nColumnas; i++){
            elementos[i] = new (nothrow) int[nFilas];
    }
        for (int i=0;i <nColumnas; i++){
            for (int j=0; j <nFilas; j++){
                cout << "Introduzca valor: " << endl;
                cin >> elementos[i][j];
            }
        }
}

Matriz::Matriz(const Matriz &m){
    nColumnas = m.nColumnas;
    nFilas = m.nFilas;

    elementos = new (nothrow) int*[nColumnas];
        for (int i=0;i <nColumnas; i++){
            elementos[i] = new (nothrow) int[nFilas];
    }
        for (int i=0;i <nColumnas; i++){
            for (int j=0; j <nFilas; j++){
                elementos[i][j] = m.elementos[i][j];
            }
        }
}

ostream &operator << (ostream &f, Matriz m){
    int nColumnas;
    int nFilas;
    for (int i=0; i < nColumnas; i++){
            for (int j=0; j < nFilas; j++){

                f << m.elementos[i][j] << endl;
                return f;
        }
    }
}
int main(){
    Matriz matrix (2,5);

    for (int i=0;i <2; i++){
    for (int j=0; j <5; j++){
            matrix(i, j) = i*j;
        }
    }
    cout << matrix << endl;

    Matriz matriz1 (2,3);
    Matriz matriz2 (3,2);



    matriz2 = matriz1;
    matriz2 = 3 * matriz1;

}
