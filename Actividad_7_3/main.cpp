#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>


using namespace std;

//3.Haz genérica la clase Vector (vector dinámico de elementos), de forma que guarde punteros a los objetos contenidos,
//no los objetos mismos. Sobrecarga el operador de acceso ('[]').
//Los objetos de esta clase deben eliminar los objetos contenidos al terminar su vida.


template <typename T>
class Vector {
public:
	Vector(int numElem);
	~Vector();
    int getNumElem();
T operator[](int i);
private:
	T * obj;
	int numElem[];
};

template <typename T>
Vector<T>::Vector(int numElem){
    obj = new T [numElem];
    }

template<typename T>
Vector<T>::~Vector(){

    delete [] numElem;
}


int main(){
    Vector<int> t1(5);
    Vector<char> t2(5);
    Vector<string> t3(5);
    cout << t1(0) << endl;
    cout << t2(0) << endl;
}
