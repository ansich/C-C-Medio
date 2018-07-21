// Programación II
// Práctica 8.4. STL: Ejemplo de utilización de adaptadores pila y cola

#include <iostream>
#include <list>
#include <vector>
#include <stack>
#include <queue>
using namespace std;

int main()
{
	// Pila de enteros como un vector
	stack<int, vector<int> > pilaEnteros;

	for (int i = 0;i < 5; i++) {
		pilaEnteros.push( i +1 ); 		// equivalente a: push_back()
	}

	cout << "Elementos en la pila: " << pilaEnteros.size() << endl;
	cout << "Recorrido de la pila ";
	for (int i = 0;i < 5; i++) {
		cout << pilaEnteros.top() << " ";
		pilaEnteros.pop();			// equivalente a: pop_back()
	}
	cout << endl;

	// cola de enteros como una lista
	queue<int, list<int> > colaEnteros;

	for (int i = 0; i < 5; i++) {
		colaEnteros.push( i +1 ); 		// equivalente a: push_back()
	}

	cout << "Elementos de la cola: " << colaEnteros.size() << endl;
	cout << "Elementos en la cola: ";
	for (int i=0; i < 5; i++) {
		cout << colaEnteros.front() << " ";
		colaEnteros.pop();			// equivalente a: pop_front()
	}
	cout << endl;

	return 0;
}
