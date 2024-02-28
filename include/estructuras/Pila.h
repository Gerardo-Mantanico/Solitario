#include "Nodo.h"
#include "Carta.h"
#ifndef SOLITARIO_PILA_H
#define SOLITARIO_PILA_H


class Pila {
private:
    Nodo nodo;
    Nodo *raiz;
public:
    Pila();
    ~Pila();
    void push(Carta);
    Carta pop();
};


#endif //SOLITARIO_PILA_H
