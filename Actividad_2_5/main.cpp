// Programación II
// Práctica 2.5. Arrays y punteros

#include <iostream>
using namespace std;

const int MaxNum = 10;

int main()
{
    int x[MaxNum]={ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int *p;
    p = x;
    for(int i = 0; i < MaxNum; i++) {
        cout << "Valor del elemento " << i
		<< "\tp[" << i << "] = " << p[ i ]
		<< "\t*(p + " << i << ") = "<< *( p + i )
		<< endl;
        cout << "Dirección del elemento " << i << "\t&p[" << i << "] = "<< &p[ i ]
		<< "\tp + " << i <<" = " << p + i
		<< endl;
    }
    return 0;
}
