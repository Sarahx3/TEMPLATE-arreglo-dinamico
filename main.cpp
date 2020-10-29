#include <iostream>
#include "arreglo.h"
using namespace std;

int main()
{
    Arreglo<float> arreglo;

    for(int i=0;i<100.0;i++){
        arreglo.insertar_final(i);
    }
    for(size_t i=0.0;i<100.0;i++){
        cout<<arreglo[i]<< " ";
    }
    cout<<endl;
    return 0;
}
