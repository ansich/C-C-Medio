#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

class Cadena {
public:
	/// Constructor de Cadena
	/// @param cad El vector de caracteres que copiará en su interior
	Cadena(const char cad[] = ""): contenido( NULL )
		{ set( cad ); }
 	~Cadena()
		{ delete[] contenido; }
    friend Cadena operator +(Cadena &objeto1, char cad [1]);

	/// @return La cadena almacenada
	const char * c_str() const
		{ return contenido; }

	/// Cambia la cadena almacenada
        /// @param s La nueva cadena a almacenar
	void set(const char cad[]);

	/// Concatena dos objetos Cadena
	/// @param cad El objeto Cadena a concatenar a este
	Cadena operator+(const Cadena &cad);

	/// Concatena un objeto Cadena y un vector de caracteres
	/// @param cad El vector de caracteres a concatenar a este objeto
	Cadena operator+(const char cad[]);

	/// Cambiarle a este objeto el contenido por el de otro objeto Cadena
	/// @param cad El objeto Cadena del que se va a tomar su contenido
	Cadena &operator=(const Cadena &cad);

	/// Cambiarle a este objeto el contenido por un vector de caracteres
	/// @param cad El vector de caracteres del que se va a tomar su contenido
	Cadena &operator=(const char cad[]);
private:
  	char * contenido;
};

void Cadena::set(const char cad[])
{
	const int len = strlen( cad );

	// Preparar el espacio en memoria
	delete[] contenido;
	contenido = new(nothrow) char[ len +1 ];

	if ( contenido == NULL ) {
		cerr << "\nError de memoria" << endl;
		exit( EXIT_FAILURE );
	}

	// Copiar el contenido
	strcpy( contenido, cad );
}

Cadena Cadena::operator+(const Cadena &cad)
{
	return operator+( cad.c_str() );
}

Cadena Cadena::operator+(const char cad[])
{
	int len = strlen( this->c_str() );

	len += strlen( cad );
	char temp[ len +1 ];

	strcpy( temp, this->c_str() ); 				// copia de la cadena del objeto
	strcat( temp, cad ); 					// concatena la del argumento

	Cadena toret( temp );
	return toret;
}

Cadena &Cadena::operator=(const Cadena &cad)
{
  this->set( cad.c_str() );
  return *this;
}

Cadena Cadena::operator +(Cadena &objeto1, char cad [1]){
        strcat(obj1.Contenido, cad)
        return obj1;
    }

Cadena &Cadena::operator=(const char cad[])
{
  this->set( cad );
  return *this;
}

int main()
{
  Cadena a( "programacion II" );
  Cadena b( " de informatica" );
  Cadena c;
  Cadena d;

  c = a + b; 						// concatenar dos objetos
  cout << c.c_str() << endl;

  a = "es una asignatura obligatoria"; 			// asignar una cadena a un objeto
  cout << a.c_str() << endl;

  b = d = "facil";					// asignación múltiple posible
  c = c + " " + a + " " + b + " " + d;
  cout << c.c_str() << endl;

  return 0;
}
