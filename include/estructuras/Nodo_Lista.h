#include "Carta.h"
#ifndef SOLITARIO_NODO_LISTA_H
#define SOLITARIO_NODO_LISTA_H



class Nodo_Lista{
public:
    int num_lista_salida;
    Carta carta;
    int num_lista_entrada;
    Nodo_Lista *retroceder;
    Nodo_Lista *siguiente;
};
#endif //SOLITARIO_NODO_LISTA_H
