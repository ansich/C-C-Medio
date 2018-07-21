//1. Comprueba si las siguientes secuencias de código son correctas, y en caso de no serlo
//corrige los errores:

#include <iostream>
using namespace std;

void leerEdad(int edad){
    if ( edad < 0 ) {
throw EdadNegativa( edad );
}
else
if ( ( edad > 90 ) && ( edad < 120 ) ) {
throw EdadMuyAvanzada( edad );
}
else
if ( edad > 120 ) {
throw EdadImposible( edad );
}

int main(){
string strEdad;

try{
cout << "Introduce la edad: ";
getline( cin, strEdad );
return atoi( strEdad.c_str() );
}catch(int i){
    cout << "error edad" << i ;
}
