
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
    Carta pop_final();
    void imprimir(Cola *cola);
    bool estado_cola();
    Carta primera_carta();
    Carta top_carta();

};


#endif //SOLITARIO_COLA_H
