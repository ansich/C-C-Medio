// Programación II
// Práctica 1.1. Programa ejemplo de la clase Empleado

#include <iostream>
#include <string>
using namespace std;

class Empleado {
public:
	/// Crea un nuevo Empleado
	/// @param d DNI
	/// @param r retención (valor por defecto r=0.15)
	Empleado(string d, double r = 0.15);

	~Empleado();

	/// Calcula el salario semanal
	/// @param nh El num. de horas trabajadas
	/// @param r El num. de horas extras trabajadas
	/// @return el salario, en euros, como un double
	double calculaSalario(int nh, int he) const;

	/// @return El DNI del empleado
	const string &getDni() const;

	/// @return La retención del empleado
	double getRetencion() const;
private:
	string dni;
	double retencion;
};

Empleado::Empleado(string d, double r)
{
	cout << "\nConstructor de la clase empleado";
	dni = d;
	retencion = r;
}

Empleado::~Empleado()
{
	cout << "\nDestructor de la clase empleado";
}

double Empleado::calculaSalario(int numHoras, int numHorasExtras) const
{
	double bruto;
	const int precioHora = 10;	// 10 euros

	bruto = precioHora * ( numHoras + 1.5 * numHorasExtras );
	return ( bruto - ( bruto * retencion ) );
}

double Empleado::getRetencion() const
{
	return retencion;
}

const string &Empleado::getDni() const
{
	return dni;
}

/// Calcula el salario por hora
/// @param e el objeto Empleado (por copia) del que calcular su salario por hora
/// @return el salario por una hora, como flotante
double calculaSalarioHora(Empleado e);

int main()
{
	/// Definición de objetos
	Empleado pepe( "12345678a" );
	Empleado juan( "87654321z", 0.18 );

	/// Envío de mensajes para el objeto "pepe"
	cout << "\nEmpleado: " << pepe.getDni() << " Salario semanal ";
	cout << pepe.calculaSalario( 34, 3 );

	/// Envío de mensajes para el objeto "juan"
	cout << "\nEmpleado: " << juan.getDni() << " Salario semanal ";
	cout << juan.calculaSalario( 37, 5 );

	/// Paso de un objeto como parámetro a una función
	cout << "\nSalario/hora de pepe: " << calculaSalarioHora( pepe ) << endl;
	cout << "\nSalario/hora de juan: " << calculaSalarioHora( juan ) << endl;

	Empleado *p;

    p = &pepe;
    cout << "\nEmpleado : " << p->getDni() << " Salario semanal ";
    cout << p->calculaSalario( 34, 3 );

    p = &juan;
    cout << "\nEmpleado : " << p->getDni() << " Salario semanal ";
    cout << p->calculaSalario( 37, 5 ) << endl;

    Empleado &referencia = pepe;

    cout << "\nEmpleado : " << referencia.getDni() << " Salario semanal ";
    cout << referencia.calculaSalario( 20,5 );
	return 0;
}

double calculaSalarioHora(Empleado e)
{
	return e.calculaSalario( 1, 0 );
}
