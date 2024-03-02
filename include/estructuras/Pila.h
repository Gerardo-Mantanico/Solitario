#include "Nodo.h"
#include "Carta.h"
#include "Nodo_doble.h"

#ifndef SOLITARIO_PILA_H
#define SOLITARIO_PILA_H


class Pila {
private:
    Nodo_doble nodo;
    Nodo *raiz;
public:
    Pila();
    ~Pila();
    void push(Carta);
    Carta pop();
    void imprimir();
    Carta tapadera();
    Nodo* getRaiz();
    int elementoEnPosicion(size_t posicion);
};

#endif //SOLITARIO_PILA_H
