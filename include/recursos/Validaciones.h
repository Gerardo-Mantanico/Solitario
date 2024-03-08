
#include "../estructuras/Carta.h"
#include "../estructuras/Pila.h"
#include "../estructuras/ListaDoble .h"
#include "RecursosLista.h"
#include "../estructuras/Cola.h"
#include "../estructuras/Historial.h"

#ifndef SOLITARIO_VALIDACIONES_H
#define SOLITARIO_VALIDACIONES_H


class Validaciones{
public:
    RecursosLista recursosLista;
    Cola *cola1;
    Cola *cola2;
    Pila *pila1;
    Pila *pila2;
    Pila *pila3;
    Pila *pila4;
    Historial *historial;

public:
    Validaciones(RecursosLista recursosLista,Cola *cola1,Cola *cola2,Pila *pila1,Pila *pila2,Pila *pila3,Pila *pila4, Historial *historial):
            recursosLista(recursosLista),
            cola1(cola1),
            cola2(cola2),
            pila1(pila1),
            pila2(pila2),
            pila3(pila3),
            pila4(pila4),
            historial(historial)
            {}
    Validaciones(){}
    void mover_cartas_filas(int actual, int siguiente);
    Carta siguiete_carta_cola1(Carta carta_aux);
    void conjuto_cartas( );
    bool condiciones_push_pila(Carta carta , Pila *pila);
    bool push_pilas(int menu,Carta carta);
    bool inserta_pilas_siguiente(Carta carta_aux);
    void insertar_pilas();
    void adelantar();
    void retroceder();
};
#endif //SOLITARIO_VALIDACIONES_H
