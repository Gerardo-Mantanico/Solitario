#include "../estructuras/Cola.h"
#include "../estructuras/Pila.h"
#ifndef SOLITARIO_GENERARCARTAS_H
#define SOLITARIO_GENERARCARTAS_H
class GenerarCartas{
public:
    Cola* aleatorio();
    Pila* Cargar_pila(int menu);

};
#endif //SOLITARIO_GENERARCARTAS_H
