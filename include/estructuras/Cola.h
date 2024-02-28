
#include "Nodo.h"
#include "Carta.h"
#ifndef SOLITARIO_COLA_H
#define SOLITARIO_COLA_H


class Cola {
private:
        Nodo nodo;
        Nodo* frente;
        Nodo *final;
public:
    Cola();
    ~Cola();
    void push(Carta carta);
    Carta pop();
    bool estado_pila();
    void imprimir();

};


#endif //SOLITARIO_COLA_H
