

#ifndef SOLITARIO_LISTADOBLE_H
#define SOLITARIO_LISTADOBLE_H

#include "Nodo_doble.h"

class ListaDoble{
public:
    Nodo_doble* inicio;
    Nodo_doble* final;

public:
    // Constructor
    ListaDoble();
    ~ListaDoble();
    bool estaVacia();
    void insertarAlInicio(Carta carta);
    void insertarAlFinal(Carta carta);
    Carta buscar(string texto);
    Carta eliminar_nodo_buscador(Nodo_doble *nodo);
    void imprimirInverso();
    void eliminarNodo(Nodo_doble* nodo);
    Carta top();
    void visible_ultima_carta();
    Carta eliminar_desde(Nodo_doble* nodo);

};
#endif //SOLITARIO_LISTADOBLE_H
