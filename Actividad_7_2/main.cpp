#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

//Implementar una función genérica de ordenación de un vector de elementos y probarla con diferentes tipos de datos.

template <typename T>
void ordenar( T * Vector, const T &numEl){
    T aux;
    for (int i=0;i<numEl-1;i++){
        for (int j= i + 1; j <numEl;j++){
            if (Vector[i] > Vector[j]){
                aux  = Vector[i];
                Vector[i] = Vector[j];
                Vector[j] = aux;
            }
        }
    }
}

int main(){

int v1[3] = { 3,2,5 };
float v2[3] = { 4.0, 1.0, 2.0};
string v3[3] = { "David", "Ana", "Irene"};

ordenar(v1,3);
cout << "\nPRIMERO:  " ;
for (int i=0;i<3;i++){
    cout << v1[i] << " ";
}
ordenar<float>(v2,3);
cout << "\nSEGUNDO: " ;
for (int i=0;i<3;i++){
    cout << v2[i] << " ";
}
ordenar(v3,3);
cout << "\nTERCERO: " ;
for (int i=0;i<3;i++){
    cout << v3[i] << " ";
}
return 0;
}
