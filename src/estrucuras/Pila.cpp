
#include "../../include/estructuras/Pila.h"
#include <iostream>
Pila::Pila() {
    raiz= nullptr;
}
void Pila::push(Carta carta) {
        Nodo *nuevo_nodo;
        nuevo_nodo= new Nodo();
        nuevo_nodo->carta=carta;
        if(raiz==NULL){
            raiz=nuevo_nodo;
            nuevo_nodo->siguiente=NULL;
        } else{
            nuevo_nodo->siguiente=raiz;
            raiz=nuevo_nodo;
        }
}

Carta Pila::pop() {
    //verificas se la pila se encuetra vacia
    if(raiz !=NULL){
        Carta informacion_aliminar= raiz->carta;
        Nodo *aux_raiz= raiz;
        raiz=raiz->siguiente;
        delete aux_raiz;
        return  informacion_aliminar;
    }

    else{

    }
    Carta carta;
    return carta;
}
