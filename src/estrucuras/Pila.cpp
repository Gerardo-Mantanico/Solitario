
#include "../../include/estructuras/Pila.h"
#include "../../include/utilidades/Tablero.h"
#include <iostream>
#include <stack>
Pila::Pila() {
    raiz= nullptr;
}
Tablero tablero1;
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
    //verificas si la pila se encuetra vacia
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
void Pila::imprimir()
{
    Nodo *reco = raiz;
   // cout << "Listado de todos los elementos de la pila.\n";
    while (reco != NULL)
    {
        cout << reco->carta.texto<<"   ";
      //  tablero1.cuadrado(" "+reco->carta.texto);
        reco = reco->siguiente;
    }
    cout << "\n";
}

Nodo *Pila::getRaiz() {
    return raiz;
}