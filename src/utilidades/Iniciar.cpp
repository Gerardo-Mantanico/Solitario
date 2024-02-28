#include <iostream>
#include "../../include/utilidades/Iniciar.h"
#include "../../include/utilidades/Tablero.h"
#include "../../include/utilidades/GenerarCartas.h"
using namespace  std;
Tablero tablero;
GenerarCartas generar;
void Iniciar::juar() {
    //tablero.imprimir(7);
   generar.aleatorio();
}