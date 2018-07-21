// Programación II
// Práctica 8.6. STL: Ejemplo de utilización de algoritmos genéricos
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	string entrada;
	vector<int> vectorNotas;
	int num;

	// Lectura del vector de notas
	cout<<"Introducir notas (-1 para fin): ";
	getline( cin, entrada );
	num = atoi( entrada.c_str() );
	while( num != -1 ) {
		vectorNotas.push_back( num ); 		// Inserción por el final de elementos

		cout << "Introducir notas (-1 para fin): ";
		getline( cin, entrada );
		num = atoi( entrada.c_str() );
	}

	// Recorrido mediante el operador []
	cout << "Recorrido secuencial del vector de notas: ";
	for (size_t i = 0; i < vectorNotas.size(); i++) {
		cout << vectorNotas[ i ] << " ";
	}
	cout << endl;


	// Copia el vector
	vector<int> vectorNotasCopia( vectorNotas.size() );
	copy( vectorNotas.begin(), vectorNotas.end(), vectorNotasCopia.begin() ); // Que copia(todo) y donde(begin)

	// Ordena el vector
	sort( vectorNotasCopia.begin(), vectorNotasCopia.end() );

	// Recorrido del vector mediante[]
	cout << "Recorrido ordenado de la copia del vector: ";
	for (size_t i = 0; i < vectorNotasCopia.size(); i++) {
		cout << vectorNotasCopia[ i ] << " ";
	}
	cout << endl;

	// Pide una nota
	cout << "Introducir nota: ";
	getline( cin, entrada );
	num = atoi( entrada.c_str() );
	cout << endl;

	// Busca la nota
	if ( binary_search( vectorNotasCopia.begin(), vectorNotasCopia.end(), num ) ) {
		cout << num << " se encuentra en el vector de notas" << endl;
	} else {
		cout<< num <<" no se encuentra en el vector de notas" << endl;
	}

	return EXIT_SUCCESS;
}
