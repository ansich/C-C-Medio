#include <iostream>

using namespace std;

class inexistente{
public:
    inexistente(const string &n): desc(n){}
    string getDesc(){ return desc; }
private:
    string desc;
};

int main()
{
    int op;
    try{
        cout << "introduzca opcion" << endl;
        cin>> op;
        if(op > 5){ throw inexistente("Error, muy alta");}
    }catch(inexistente &e){
        cout << e.getDesc();
    }
}
