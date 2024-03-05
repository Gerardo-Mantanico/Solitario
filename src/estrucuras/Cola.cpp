
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
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->carta = carta;
    if (cola_vacia(frente)) {
        frente = nuevo_nodo;
    } else {
        final->siguiente = nuevo_nodo;
    }
    final = nuevo_nodo;
}

Carta Cola::pop()  {
    // Verificar si la cola está vacía
    if (cola_vacia(frente)) {
        // Por simplicidad, en este ejemplo, simplemente retornaremos un objeto Carta por defecto.
        Carta carta;
        carta.texto="#";
        return carta;// Retornar una Carta por defecto
    }
    else{
        // Obtener el valor del nodo del frente y avanzar el puntero frente
        Carta carta_eliminar = frente->carta;
        Nodo* aux = frente;
        frente = frente->siguiente;
        // Si la cola queda vacía después de eliminar el nodo, también actualizar el puntero final
        if (frente == nullptr) {
            final = nullptr;
        }
        delete aux; // Liberar memoria del nodo eliminado
        return carta_eliminar;
    }

}

void Cola::imprimir(Cola *cola)  {
    // Verificar si la cola está vacía
    if (cola_vacia(cola->frente)) {
        cout << "La cola está vacía." << std::endl;
        return;
    }
    {
        Nodo* actual = cola->frente;
        cout << "Contenido de la cola:" <<endl;
        // Recorrer la cola e imprimir cada elemento
        while (actual != nullptr) {
            cout << actual->carta.texto<<"  "<<actual->carta.valor<< endl;
            actual = actual->siguiente;
        }
    }
}

bool Cola::estado_cola() {
        return frente==NULL? true: false;
}

Carta Cola::primera_carta() {
    if(frente==NULL){
     Carta carta_aux;
     carta_aux.texto="NULL";
        return carta_aux;
    }
    else{
        return frente->carta;
    }

}

Carta Cola::top_carta() {
    if(final==NULL){
        Carta carta_aux;
        carta_aux.texto="NULL";
        return carta_aux;
    }
    else{
        return final->carta;
    }
}

Carta Cola::pop_final() {
    Carta carta_eliminar;
    // Verificar si la cola está vacía
    if (cola_vacia(final)) {
        // Por simplicidad, en este ejemplo, simplemente retornaremos un objeto Carta por defecto.
        Carta carta;
        carta.texto="#";
        return carta;// Retornar una Carta por defecto
    }
    else{
         carta_eliminar = final->carta;
        Nodo* temp = final;
        final = final->siguiente;
        delete temp;
        if (frente == nullptr) {
            final = nullptr;
        }
    }
    return carta_eliminar;
}