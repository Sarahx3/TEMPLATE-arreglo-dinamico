#include <iostream>
#include "arreglo.h"
using namespace std;

int main()
{
    Arreglo<string> arreglo;
    //insertar 4 elementos
    arreglo.insertar_final("hola1");
    arreglo.insertar_final("hola2");
    arreglo.insertar_inicio("hola3");
    arreglo.insertar_inicio("hola4");
    for(size_t i = 0; i < arreglo.size(); i++){
        cout<<arreglo[i]<< " ";
    }
    cout<<endl;
    
    //insertar en la posicion 2
    arreglo.insertar("hola5",2);
    for(size_t i = 0; i < arreglo.size(); i++){
        cout<<arreglo[i]<< " ";
    }
    cout<<endl;

    //eliminar inicio, final y posicion 1
    arreglo.eliminar_inicio();
    arreglo.eliminar_final();
    arreglo.eliminar(1);
    for(size_t i = 0; i < arreglo.size(); i++){
        cout<<arreglo[i]<< " ";
    }
    cout<<endl;

    return 0;
}
