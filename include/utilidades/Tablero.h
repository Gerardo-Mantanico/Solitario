#include "../estructuras/Cola.h"
#include "../estructuras/Pila.h"

#ifndef SOLITARIO_TABLERO_H
#define SOLITARIO_TABLERO_H



class Tablero {
public:
    void imprimir(int size, int siz, Carta carta);
    void imprimir_encabezado(Carta carta);
    void cuadrado(string texto);
};


#endif //SOLITARIO_TABLERO_H
