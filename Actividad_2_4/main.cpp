// Programaci�n II
// Pr�ctica 2.4. Aritm�tica de punteros
#include <iostream>o
using namespace std;

// Diferencia may�sculas y min�sculas
const int MaxMaysMins = 'a' - 'A';

int main()
{
    char cadena[80];
    char *pcadena;


    // Pedir una cadena y guardarla en el vector 'cadena'
    cout << "Introduce cadena: ";
    cin.getline( cadena, 80 );

    // pcadena apunta a primer car�cter de la cadena
    pcadena = cadena;

    // Recorrer la cadena
    while ( *pcadena != 0 ) {
        if ( *pcadena >='A'
          && *pcadena <= 'Z' )
        {
		// Convertir a mins.
		*pcadena = *pcadena + MaxMaysMins;
        }
        else
        if ( *pcadena >='a'
          && *pcadena <= 'z' )
        {
	    	// Convertir a mays.
		*pcadena = *pcadena - MaxMaysMins;
	}
        ++pcadena;
    }

    cout << "Cadena convertida: " << cadena << endl;
    return 0;
}
