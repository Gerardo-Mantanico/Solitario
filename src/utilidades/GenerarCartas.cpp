#include "../../include/utilidades/GenerarCartas.h"
#include "../../include/estructuras/Carta.h"
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using  namespace  std;
#include <random>

/*7<3R (7 de corazones rojos)
  J<>R (J de diamantes rojos)
  3E3N (3 de treboles negros)
  9!!N (9 de espadas negras)*/

vector<Carta> lista_cartas;
void insertar_cartas(string tipo_carta, string color) {
    for (int i = 0; i < 13; ++i) {
        Carta carta;
        if (i == 10) {
            carta.texto =  "J"+ tipo_carta;
            carta.valor = to_string(i+1);
        } else if (i == 11) {
            carta.texto = "Q" + tipo_carta;
            carta.valor = to_string(i+1);
        } else if (i == 12) {
            carta.texto = "K" + tipo_carta;
            carta.valor = to_string(i+1);
        } else {
            carta.texto = to_string(i+1) + tipo_carta;
            carta.valor = to_string(i+1);
        }
        carta.color = color;
        lista_cartas.push_back(carta);
    }
}

// Función para generar las cartas
void generar() {
    for (int i = 0; i < 4; ++i) {
        if (i == 0) {
            insertar_cartas("<3R", "Corazones rojos");
        } else if (i == 1) {
            insertar_cartas("<>R", "Diamantes rojos");
        } else if (i == 2) {
            insertar_cartas("E3N", "Treboles negros");
        } else if (i == 3) {
            insertar_cartas("!!N", "Espadas negras");
        }
    }
}

Cola* GenerarCartas::aleatorio() {
    generar();
    Cola *cola= new Cola();
    for (int i = 0; i <24 ; ++i) {
        random_device rd;
        mt19937 generador(rd());
        uniform_int_distribution<int> distribucion(0, lista_cartas.size()-1);
        int index = distribucion(generador);
        cola->push(lista_cartas[index]);
        auto iter = lista_cartas.begin() + index;
        lista_cartas.erase(iter); //para elimininar el objeto en la array
    }
    return cola;
}


Pila *GenerarCartas::Cargar_pila(int numero) {
    Pila *pila = new Pila();
    for (int i = 0; i <numero ; ++i) {
        if(i==numero-1){
            lista_cartas[0].visible=true;
        }
        else{
            lista_cartas[0].visible=false;
        }
        pila->push(lista_cartas[0]);
        lista_cartas.erase(lista_cartas.begin());
    }
    return pila;
}

