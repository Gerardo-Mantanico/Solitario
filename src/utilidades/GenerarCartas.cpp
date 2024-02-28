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
            insertar_cartas("!!N ", "Espadas negras");
        }
    }
}

Cola* GenerarCartas::aleatorio() {
    generar();
    Cola *cola= new Cola();
    int min_index = 0;
    int max_index = 51;
    vector<int> indices(max_index - min_index + 1);  // Crear una secuencia de índices en el rango dado
    iota(indices.begin(), indices.end(), min_index);
    random_device rd;   // Mezclar la secuencia de índices de manera aleatoria
    mt19937 g(rd());
    shuffle(indices.begin(), indices.end(), g);
    vector<int> indices_aleatorios(indices.begin(), indices.begin() + 24);  // Selecciona los primeros 24 índices de la secuencia mezclada
    // índices aleatorios generados
    for (int index : indices_aleatorios) {
        cout << "ID: "<<index<<"  del objeto aleatorio: " <<lista_cartas[index].color<<"  "<<lista_cartas[index].valor<<endl;
        cola->push(lista_cartas[index]);
      auto iter = lista_cartas.begin() + index;

    }

    cout<<"imprimir cartas"<<endl;
       for (Carta carta: lista_cartas) {
           cout<<carta.texto<<"  "<<carta.color<<"  "<<carta.valor<<endl;
           if(carta.valor=="K"){cout<<endl<<endl;}
       }

    return cola;
}

