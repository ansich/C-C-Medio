#include <iostream>
using namespace std;

int main(){

    int x;
    int *p1;
    int **p2;
    p2 = &p1; p1 = &x; **p2 = 4;
    cout << p2 << "   " << x << endl;
}
