#include "../estructuras/Carta.h"
#include "../estructuras/ListaDoble .h"

#ifndef SOLITARIO_RECURSOSLISTA_H
#define SOLITARIO_RECURSOSLISTA_H

class RecursosLista {
private:
    ListaDoble *list1;
    ListaDoble *list2;
    ListaDoble *list3;
    ListaDoble *list4;
    ListaDoble *list5;
    ListaDoble *list6;
    ListaDoble *list7;

public:
    RecursosLista(ListaDoble *list1, ListaDoble *list2, ListaDoble *list3, ListaDoble *list4, ListaDoble *list5,
                  ListaDoble *list6, ListaDoble *list7):
            list1(list1),  list2(list2),  list3(list3),  list4(list4),  list5(list5),  list6(list6),  list7(list7) {}

    RecursosLista() {}
    Carta buscador_listas(int indice, string texto);
    Carta top_lista(int menu);
    void pop_lista(int menu);
    void  insertar_cartas(int indice, Carta carta);
    Carta pop_nodo_espesifico(int indice, Nodo_doble *nodo);
    void insertar_cartas_inicio(int indice, Carta carta);
};


#endif //SOLITARIO_RECURSOSLISTA_H
