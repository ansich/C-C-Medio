#include "vector.h"

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
	string strNum;
	Vector<int> notas( 5 );

	for(int i = 0; i < notas.getNumElementos(); ++i) {
		cout << "\nIntroduzca nota " << i +1 << ": ";
		getline( cin, strNum );
		notas[ i ] = atoi( strNum.c_str() );	// almacena un valor que se lee de teclado

	}

	cout << endl;
 	for(int i = 0; i < notas.getNumElementos(); ++i) {
		cout << "Nota " << i +1 << ": " << notas[ i ] << endl;
	}

	return 0;

}
