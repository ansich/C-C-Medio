#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

//1.Implementar una función genérica para contar el número de veces que un elemento aparece en un vector de elementos.

template <typename T>
int contar (T *Vector){
    int max;
    T elem;
    int cont = 0;
    cout << "introduzca elemento" << endl;
    cin >> elem;
    cout << "introduzca numero elementos" << endl;
    cin >> max;
    for (int i=0; i < max-1; i++){
        if ( Vector[i] == elem ){
            cont++;
        }return cont;
    }
}
template<typename T>
void ordenar(T *v, int n){

    for(int i = 0; i < n-1 ;i++){
        for (int j=i+1; j < n;j++){
            if(v[i] > v[j]){
                T aux;
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    } for(int i=0; i< n;i++){
        cout << v[i] << endl;
    }
}

int main(){

int v1[5] = {3, 8, 4, 7, 2};
string v3[4] = { "irene", "ana", "david", "zzz"};
ordenar(v3,4);

}
