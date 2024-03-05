#include "../estructuras/Cola.h"
#include "../estructuras/Pila.h"
#include "../estructuras/ListaDoble .h"

#ifndef SOLITARIO_TABLERO_H
#define SOLITARIO_TABLERO_H



class Tablero {
public:
    void imprimir(int size, int siz, Carta carta);
    void imprimir_encabezado(Carta carta,Carta pila1,Carta pila2,Carta pila3, Carta pila4);
    void imprimircuerpo(ListaDoble *lista1,ListaDoble *lista2,ListaDoble *lista3,ListaDoble *lista4,ListaDoble *lista5,ListaDoble *lista6,ListaDoble *lista7);
};


#endif //SOLITARIO_TABLERO_H
