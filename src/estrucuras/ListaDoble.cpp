#include <iostream>
#include "../../include/estructuras/ListaDoble .h"
#include "../../include/estructuras/Carta.h"
#include "../../include/estructuras/ListaDoble .h"

    ListaDoble::ListaDoble() {
    inicio= nullptr;
    final= nullptr;
}

bool ListaDoble::estaVacia() {
    return inicio== nullptr;
}

void ListaDoble::insertarAlInicio(Carta carta) {
    Nodo_doble * nuevo_nodo= new Nodo_doble(carta);
    if(estaVacia()){
        inicio=final=nuevo_nodo;
    }
    else{
        nuevo_nodo->siguiente=inicio;
        inicio->anterior=nuevo_nodo;
        inicio=nuevo_nodo;
    }
}

void ListaDoble::insertarAlFinal(Carta carta) {
    Nodo_doble* nuevo_nodo = new Nodo_doble(carta);
    if (estaVacia()){
        inicio=final=nuevo_nodo;
    }
    else{
        final->siguiente=nuevo_nodo;
        nuevo_nodo->anterior=final;
        final=nuevo_nodo;
    }
}


void ListaDoble::eliminarNodo(Nodo_doble *nodo) {
    if (nodo == nullptr) {
        return;
    }
    if (nodo == inicio) {
        inicio = nodo->siguiente;
    }
    if (nodo == final) {
        final = nodo->anterior;
    }
    if (nodo->anterior != nullptr) {
        nodo->anterior->siguiente = nodo->siguiente;
    }
    if (nodo->siguiente != nullptr) {
        nodo->siguiente->anterior = nodo->anterior;
    }
    delete nodo;
}


Nodo_doble* ListaDoble::buscar(string texto) {
    Nodo_doble* actual = inicio;
    Nodo_doble *carta;
    carta->carta.texto="";
    while (actual != nullptr) {
        if(actual->carta.texto==texto){
            carta=actual;
            break;
        }
        actual = actual->siguiente;
    }

    return carta;
}

void ListaDoble::imprimirInverso() {
    Nodo_doble* actual = final;
    while (actual != nullptr) {
        std::cout << actual->carta.texto << " ";
        actual = actual->anterior;
    }
    std::cout << std::endl;
}

Carta ListaDoble::top() {
        if (estaVacia()) {
           // std::cerr << "La pila está vacía.\n";
            Carta carta;
            carta.texto="";
            return carta;
        }
        else{
            return final->carta;
        }
}

void ListaDoble::visible_ultima_carta() {
    if(final!=NULL){
        final->carta.visible=true;
    }
}

Carta ListaDoble::eliminar_nodo_buscador(Nodo_doble *nodo) {
    Carta carta;
    if (nodo == nullptr) {
        carta.texto=" ";
        return carta;
    }
    if (nodo == inicio) {
        inicio = nodo->siguiente;
        carta=inicio->carta;
    }
    if (nodo == final) {
        final = nodo->anterior;
        carta=final->carta;
    }
    if (nodo->anterior != nullptr) {
        nodo->anterior->siguiente = nodo->siguiente;
        carta=nodo->carta;
    }
    if (nodo->siguiente != nullptr) {
        nodo->siguiente->anterior = nodo->anterior;
       carta= nodo->carta;
    }
    delete nodo;
    return  carta;
}
