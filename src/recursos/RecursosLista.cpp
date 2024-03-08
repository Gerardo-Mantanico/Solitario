#include "../../include/recursos/RecursosLista.h"
#include "../../include/estructuras/Nodo.h"
#include <iostream>
using  namespace  std;


Carta RecursosLista::buscador_listas(int indice, std::string texto) {
    Carta carta;
    switch (indice) {
        case 1:
            carta=list1->buscar(texto);
            break;
        case 2:
            carta=list2->buscar(texto);
            break;
        case 3:
            carta=list3->buscar(texto);
            break;
        case 4:
            carta=list4->buscar(texto);
            break;
        case 5:
            carta=list5->buscar(texto);
            break;
        case 6:
            carta=list6->buscar(texto);
            break;
        case 7:
            carta=list7->buscar(texto);
            break;
    }
    return carta;
}


void RecursosLista:: insertar_cartas(int indice, Carta carta){
    switch (indice) {
        case 1:

            list1->insertarAlFinal(carta);
            break;
        case 2:
            list2->insertarAlFinal(carta);
            break;
        case 3:
            list3->insertarAlFinal(carta);
            break;
        case 4:
            list4->insertarAlFinal(carta);
            break;
        case 5:
            list5->insertarAlFinal(carta);
            break;
        case 6:
            list6->insertarAlFinal(carta);
            break;

        case 7:
            list7->insertarAlFinal(carta);
            break;
        default: cout<<"Fuera de rango"<<endl;
    }
}
void RecursosLista:: pop_lista(int menu){
    switch (menu) {
        case 1:
            list1->eliminarNodo(list1->final);
            list1->visible_ultima_carta();
            break;
        case 2:
            list2->eliminarNodo(list2->final);
            list2->visible_ultima_carta();
            break;
        case 3:
            list3->eliminarNodo(list3->final);
            list3->visible_ultima_carta();
            break;
        case 4:
            list4->eliminarNodo(list4->final);
            list4->visible_ultima_carta();
            break;
        case 5:
            list5->eliminarNodo(list5->final);
            list5->visible_ultima_carta();
            break;
        case 6:
            list6->eliminarNodo(list6->final);
            list6->visible_ultima_carta();
            break;

        case 7:
            list7->eliminarNodo(list7->final);
            list7->visible_ultima_carta();
            break;
        default: cout<<"Fuera de rango"<<endl;
    }

}
Carta RecursosLista::top_lista(int menu){
    Carta carta;
    switch (menu) {
        case 1:
            carta=list1->top();
            break;
        case 2:
            carta=list2->top();
            break;
        case 3:
            carta=list3->top();
            break;
        case 4:
            carta=list4->top();
            break;
        case 5:
            carta=list5->top();
            break;
        case 6:
            carta=list6->top();
            break;

        case 7:
            carta=list7->top();
            break;
        default: cout<<"Fuera de rango"<<endl;
    }
    return carta;
};

Carta RecursosLista::pop_nodo_espesifico(int indice, Nodo_doble *nodo) {
    Carta carta;
    switch (indice) {
        case 1:
            carta=list1->eliminar_nodo_buscador(nodo);
            break;
        case 2:
            carta=list2->eliminar_nodo_buscador(nodo);
            break;
        case 3:
            carta=list3->eliminar_nodo_buscador(nodo);
            break;
        case 4:
            carta=list4->eliminar_nodo_buscador(nodo);
            break;
        case 5:
            carta=list5->eliminar_nodo_buscador(nodo);
            break;
        case 6:
            carta=list6->eliminar_nodo_buscador(nodo);
            break;

        case 7:
            carta=list7->top();
            break;
        default: cout<<"Fuera de rango"<<endl;
    }
    return carta;
}


void RecursosLista:: insertar_cartas_inicio(int indice, Carta carta){
    switch (indice) {
        case 1:

            list1->insertarAlInicio(carta);
            break;
        case 2:
            list2->insertarAlInicio(carta);
            break;
        case 3:
            list3->insertarAlInicio(carta);
            break;
        case 4:
            list4->insertarAlInicio(carta);
            break;
        case 5:
            list5->insertarAlInicio(carta);
            break;
        case 6:
            list6->insertarAlInicio(carta);
            break;

        case 7:
            list7->insertarAlInicio(carta);
            break;
        default: cout<<"Fuera de rango"<<endl;
    }
}

Carta RecursosLista::top_pila(int indice) {
    Carta carta;
    switch (indice) {
        case 1:
            carta=pila1->top();
            break;
        case 2:
            carta=pila2->top();
            break;
        case 3:
            carta=pila3->top();
            break;
        case 4:
            carta=pila4->top();
            break;
        default:
            cout<<"la opciones que ingreso esta fuera de rango"<<endl;
            break;
    }
    return carta;
}