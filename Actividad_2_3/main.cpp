#include <iostream>
using namespace std;

int main(){

    float *vector[10];
    float **p;
    *p = vector[1];
    cout << "El n�mero real al que apunta el segundo elemento es: " << vector[ 1 ];
    cout << "El n�mero real al que apunta el segundo elemento es: " << **p;

}
