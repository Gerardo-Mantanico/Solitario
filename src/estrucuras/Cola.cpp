
#include "../../include/estructuras/Cola.h"
#include "../../include/estructuras/Carta.h"
#include<iostream>
Cola::Cola() {
    frente= nullptr;
    final= nullptr;
}
bool cola_vacia(Nodo *frente){
    return (frente==NULL) ? true :false;
}

void Cola::push(Carta carta) {
    Nodo *nuevo_nodo= new Nodo();
    nuevo_nodo->carta=carta;
    if(cola_vacia(frente)){
        frente =nuevo_nodo;
    }
    else {
        final->siguiente=nuevo_nodo;
    }
    final=nuevo_nodo;
}

Carta Cola::pop() {
    Carta informacion_eliminar=frente->carta;
    Nodo *aux =frente;
    if(frente==final){
        frente=NULL;
        final=NULL;
    }
    else{
        frente=frente->siguiente;
    }
    delete aux;
    return informacion_eliminar;
}

void Cola::imprimir() {
    while(frente!=NULL){
        pop();

    }

}