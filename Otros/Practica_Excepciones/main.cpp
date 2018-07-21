#include <iostream>
#include <exception>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <algorithm>

using namespace std;

template<typename T>
class Tabla{
public:
    Tabla(int e);
    ~Tabla();
    T operator [](const T elem[]);
private:
    T * pInt;
    int elem[];
};

template<typename T>
Tabla<T>::Tabla(int e){
    elem = e;
    pInt = new T [elem];
}

template<typename T>
T Tabla<T>::operator [](const T *pInt){
    for(int i=0;i< Tabla::elem; i++)
    return elem[i];
}


int main(){

    Tabla t1(5);
    for(int i= 0; i < t1.elem; i++){
        v[i] = rand() %10;
    }
    for(int i= 0; i < t1.elem; i++){
        cout << t1[i];
    }

    return 0;
}

