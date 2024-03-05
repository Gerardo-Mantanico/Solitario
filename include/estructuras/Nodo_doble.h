#include "Carta.h"
#ifndef SOLITARIO_NODO_DOBLE_H
#define SOLITARIO_NODO_DOBLE_H



class Nodo_doble{
public:
    Carta carta;
    Nodo_doble *siguiente;
    Nodo_doble *anterior;
    Nodo_doble(Carta valor) : carta(valor), siguiente(nullptr), anterior(nullptr) {}
};
#endif //SOLITARIO_NODO_DOBLE_H
