#include <iostream>

using namespace std;


class Libro{
public:
    Libro(int p): precio(p){}
    int getPrecio(){ return precio; }
private:
    int precio;
};
static const int x = 5;

int media(int *v, int tam){
    int media;
    for(int i = 0; i<tam;i++){
        media = media + *v;
    }
    media = media/tam;
    return media;
}
    static const int f = 3;
    static const int c = 3;

int main()
{
    int x = 5;
    int * ptr = &x;
    int ** pptr = &ptr;
    int * v[5];
    Libro L1(5);
    Libro &l = L1;
    Libro * p = &L1;
    int matriz[f][c];
    int b;
    int * ptr2 = &matriz[0][0];

    for(int i=0;i<f;i++){
        for(int j=0;j<c;j++){
            cout << "valor: " << i+1 << "." << j+1 << ": " << endl;
            cin >> *(ptr2 + j + (i*3));
        }
    }

    for(int i=0;i<f;i++){
        for(int j=0;j<c;j++){
            cout << "valor: " << * (ptr2 + j + (i*3)) << "  " << "Direccion: " << &(ptr2)+j+(i*3) << endl;
        }
    }

    cout << *ptr << endl;
    cout << **pptr << endl;
    cout << p->getPrecio() << endl;
    cout << l.getPrecio();

    return 0;
}

