// vector.h

#ifndef _vector_H
#define _vector_H
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
// Definici�n de la clase Vector (vector din�mico)
// Ejemplo de sobrecarga de operadores y funci�n que devuelve referencias

template <typename T>
class Vector {
  public:
	/// Construye objetos vector
	/// @param num El n�mero de elementos en el vector
        Vector(int num);

	/// Permite acceso a los elementos del vector
	/// @param i El elemento a acceder
	T &operator[](int i) 		// sobrecarga del operador []
		{ return elementos[ i ]; }

	/// @return El n�mero de elementos en el vector
	int getNumElementos()
		{ return numElementos; }

	~Vector()
		{ delete[] elementos; }

  private:
	/// Puntero a los elementos del vector
	T *elementos;

	/// N�mero de elementos del vector
      	int numElementos;
};

template <typename T>
Vector<T>::Vector(int num)
{
    numElementos = num; 				// guardar el n�mero de elementos
	elementos = new( nothrow ) T[ numElementos ];	// asignar la memoria

	if ( elementos == NULL ) {
		cerr << "\nError memoria insuficiente" << endl;
		exit( EXIT_FAILURE );
	}
}

#endif
