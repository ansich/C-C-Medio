// vector.h

#ifndef _vector_H
#define _vector_H
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
// Definición de la clase Vector (vector dinámico)
// Ejemplo de sobrecarga de operadores y función que devuelve referencias

template <typename T>
class Vector {
  public:
	/// Construye objetos vector
	/// @param num El número de elementos en el vector
        Vector(int num);

	/// Permite acceso a los elementos del vector
	/// @param i El elemento a acceder
	T &operator[](int i) 		// sobrecarga del operador []
		{ return elementos[ i ]; }

	/// @return El número de elementos en el vector
	int getNumElementos()
		{ return numElementos; }

	~Vector()
		{ delete[] elementos; }

  private:
	/// Puntero a los elementos del vector
	T *elementos;

	/// Número de elementos del vector
      	int numElementos;
};

template <typename T>
Vector<T>::Vector(int num)
{
    numElementos = num; 				// guardar el número de elementos
	elementos = new( nothrow ) T[ numElementos ];	// asignar la memoria

	if ( elementos == NULL ) {
		cerr << "\nError memoria insuficiente" << endl;
		exit( EXIT_FAILURE );
	}
}

#endif
