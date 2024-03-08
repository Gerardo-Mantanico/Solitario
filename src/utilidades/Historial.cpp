#include "../../include/estructuras/Historial.h"
#include <iostream>
using namespace  std;

Historial::Historial() {
    siguiente= nullptr;
    anterior= nullptr;
}

void Historial::push(Carta carta, int num_entra, int num_salida) {
    Nodo_Lista *nueco_nodo= new Nodo_Lista();
    nueco_nodo->num_lista_salida=num_salida;
    nueco_nodo->num_lista_entrada=num_entra;
    nueco_nodo->carta=carta;
    if(siguiente==anterior){
        siguiente=anterior=nueco_nodo;
    }
    else {
        nueco_nodo->retroceder=anterior;
        anterior->siguiente=nueco_nodo;
        anterior=nueco_nodo;
    }
}

Nodo_Lista*  Historial::carta() {
    Nodo_Lista* actual = siguiente;
    return actual;
}

void Historial::eliminiar_datos()  {
    Nodo_Lista* actual = siguiente;
    while (actual) {
        Nodo_Lista* temp = actual;
        actual = actual->siguiente;
        delete temp;
    }
    siguiente = anterior = nullptr;
}

