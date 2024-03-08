#include "Nodo_Lista.h"
#ifndef SOLITARIO_HISTORIAL_H
#define SOLITARIO_HISTORIAL_H


class Historial{
private:
    Nodo_Lista *siguiente;
    Nodo_Lista *anterior;
public:
    Historial();
    ~Historial();
    void push(Carta carta, int num_entra, int num_salida);
    Nodo_Lista*  carta();
    void eliminiar_datos();
};
#endif //SOLITARIO_HISTORIAL_H
