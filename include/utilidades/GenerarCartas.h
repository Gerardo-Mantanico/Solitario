#include "../estructuras/Cola.h"
#include "../estructuras/Pila.h"
#include "../estructuras/ListaDoble .h"
#ifndef SOLITARIO_GENERARCARTAS_H
#define SOLITARIO_GENERARCARTAS_H
class GenerarCartas{
public:
    Cola* aleatorio();
    ListaDoble* Cargar_pila(int menu);

};
#endif //SOLITARIO_GENERARCARTAS_H
