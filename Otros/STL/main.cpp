#include <iostream>
#include <list>
#include <cstdlib>
#include <stack>
#include <vector>
#include <queue>
using namespace std;

int main()
{
    //cola de lista de enteros

    queue<int, list<int> > colaLista;

    for(int i = 0; i< 5;i++){
        colaLista.push( i + 1);
    }

    while( ! colaLista.empty()){
        cout << colaLista.back();
        colaLista.pop();
    }

    /*//pila de vector de enteros

    stack<int, vector<int> > pilaEnteros;

    for(int  i= 0; i < 5; i++ ){
        pilaEnteros.push(i+1);
    }

    for(int i = 0;i < pilaEnteros.size();i++){
        cout << pilaEnteros.top();
        pilaEnteros.pop();

    }

    /lista de enteros

    int elem;
    list<int> notas;
    cout <<"elem, '-1' para salir" << endl;
    cin >> elem;
    while(elem != -1 ){
        notas.push_back(elem);
        cout <<"elem, '-1' para salir" << endl;
        cin >> elem;
        }


        while( ! notas.empty()){
            cout << "\n" << notas.front();
            notas.pop_front();
        }*/

    return 0;
}
