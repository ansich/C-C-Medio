#include <cstdlib>
#include <string>
#include <iostream>
#include <stdexcept>
#include <exception>
using namespace std;

int main ()
{
enum {Norte, Sur, Este, Oeste} zona;
const char *puntosCardinales[] = {"Norte", "Sur", "Este", "Oeste"};
char *nombre;
try {
cout << "\nIntroduce el nombre de la zona : ";
cin >> nombre;
cout << "\nIntroduce el punto cardinal : ";
cin >> zona;
if ( zona == "Norte" ) {
throw 0;
} else {
cout <<"\nLa zona es:"<< puntosCardinales[zona]<< endl;
}
}catch(int i)
{
cout << "\nHace mucho frio.\n" << i << endl;
}
return 0;
}
