#include <iostream>
#include <vector>

using namespace std;

template <typename T>
const T &calculaMinimo(const T &a, const T &b){
    if (a > b){
        return b;
    }else{
        return a;
    }
}

int dupli(int a){
    return a*a;
}

template<typename T>
int ordena(T *v){
    int numElem;
    T aux;
    cout << "num elem" << endl;
    cin >> numElem;
    for(int i=0; i<numElem - 1; i++){
        for(int j = i+1; j < numElem; j++){
            if(v[j] < v[i]){
                aux = v[i];
                v[i]= v[j];
                v[j]= aux;
            }
        }
    }
    for(int i = 0; i < numElem; i++){
        cout << "\n" << i+1 << ": " << v[i] << endl;
    }
}
template<typename T>
int contar(T *a){
    int cont=0;
    T elem;
    int numElem;

    cout << "num elem" << endl;
    cin >> numElem;
    cout << "elem a buscar" << endl;
    cin >> elem;
    for(int i =0; i < numElem; i++){
        if(a[i] == elem){
            cont++;
        }
    }return cont;
}

int main()
{
    string a[5] = {"aab", "aaa", "baa", "aaa", "bab"};
    //int a = 2;
    //int b = 3;

    cout << contar(a);
    /*cout << contar(v);
    cout << "\n" ;
    for (int i=0; i < 5; i ++){
            cout << i+1 << ":  " << v[i] << "\n" ;
        }
    cout << "\n" ;
    cout << "duplicamos " << b << ": " << dupli(b);
    cout << "\ncalculamos minimo de 2 y 3:" << calculaMinimo(a, b);
    */return 0;
}
