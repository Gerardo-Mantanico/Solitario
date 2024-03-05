
#include "../../include/recursos/Validaciones.h"
#include "../../include/recursos/RecursosLista.h"
#include <iostream>
using  namespace  std;
void Validaciones:: mover_cartas_filas(int actual, int siguiente){
    cout<<"Ingrese el numero de la columna en donde quiere agregar la carta:   ";
    cin>>siguiente;
    cout<<endl;
    cout<<"Ingrese el numero de la columna en donde se va extraer la carta:   ";
    cin>>actual;
    cout<<endl;
    if(recursosLista.top_lista(actual).texto!=""){
        if(recursosLista.top_lista(siguiente).texto!=""){
            if(recursosLista.top_lista(actual).col!= recursosLista.top_lista(siguiente).col && recursosLista.top_lista(siguiente).valor==(recursosLista.top_lista(actual).valor+1)){
                recursosLista.insertar_cartas(siguiente, recursosLista.top_lista(actual));
                recursosLista.pop_lista(actual);
            }
            else{
                cout<<" Error no se puede realizar el moviento"<<endl;
            }
        }
        else {
            recursosLista. insertar_cartas(siguiente, recursosLista.top_lista(actual));
            recursosLista. pop_lista(actual);
        }

    }
}

Carta Validaciones:: siguiete_carta_cola1(Carta carta_aux){
    Carta carta;
    int actual;
    cout<<"Presione '1' si desea continuar"<<endl;
    cout<<"Presione  '2' si desa agregar la carta a una columna"<<endl;
    cout<<"Presione  '3' si desa agregar la carta a pila"<<endl;
    cin>>actual;
    switch (actual) {
        case 1:
            cola2->push(carta_aux);
            carta=cola2->top_carta();
            break;
        case 2:
            cout<<"Ingrese el numero de columna en donde quiere agregar la carta"<<endl;
            int fil;
            cin>>fil;
            if(recursosLista.top_lista(fil).texto!=""){
                if(carta_aux.col != recursosLista.top_lista(fil).col && (carta_aux.valor+1)==recursosLista.top_lista(fil).valor ){
                    recursosLista. insertar_cartas(fil,carta_aux);
                    carta.texto="  X  ";
                }
                else{cout<<"Error no se puede realiza el movimiento"<<endl;
                    siguiete_carta_cola1(carta_aux);
                    carta.texto="  X  ";
                }
            }
            else {
                recursosLista.insertar_cartas(fil,carta_aux);
                carta.texto="  X  ";
            }
            break;
        case 3:
            if(inserta_pilas_siguiente(carta_aux)== false){
                carta.texto=carta_aux.texto;
                cola2->push(carta_aux);
            }
            carta.texto="  X  ";
            break;

        default: cout<<"Fuera de rango"<<endl;
            siguiete_carta_cola1( carta_aux);
    }
    return carta;
}
void Validaciones:: conjuto_cartas( ){
    string carta;
    int fila;
    int destino;
    ListaDoble *lista_aux;
    cout<<"Ingrese el numero de fila en donde se encuentra la carta que quiere mover "<<endl;
    cin>>fila;
    cout<<"Ingresa el numero de la columna   hacia donde lo quiere mover: "<<endl;
    cin>>destino;
    cout<<"Ingrese el nombre de la carta desde donde quiera que se mueva"<<endl;
    cin>>carta;


    if(recursosLista.top_lista(destino).texto==""){

     /*   while (recursosLista.top_lista(fila).texto!=carta){
            //bug
            recursosLista.  insertar_cartas(destino,recursosLista.);
            recursosLista. pop_lista(fila);
        }
        recursosLista. insertar_cartas(destino, recursosLista.top_lista(fila));
        recursosLista. pop_lista(fila);*/
      //  while (recursosLista.)

    }
    else {
     /*   Carta carta_aux =recursosLista. buscador_listas(fila,carta);
        if(carta_aux.texto==""){
            cout<<"Error no se pudo encontrar la carta"<<endl;

        }
        else{
            if(carta_aux.col!=recursosLista. top_lista(destino).col && carta_aux.valor== recursosLista.top_lista(destino).valor-1){
                while (recursosLista.top_lista(fila).texto!=carta){
                    recursosLista.  insertar_cartas(destino, recursosLista.top_lista(fila));
                    recursosLista. pop_lista(fila);
                }
                recursosLista.  insertar_cartas(destino,recursosLista. top_lista(fila));
                recursosLista.  pop_lista(fila);
            }
        }*/

    }

}
bool Validaciones :: condiciones_push_pila(Carta carta , Pila *pila){
    bool estado=true;
    if(pila->estado_pila()== false){
        if(pila->top().col==carta.col && pila->top().valor+1==carta.valor){
            pila->push(carta);
        }
        else {
            cout<<"no se puede realizar ese movimiento"<<endl;
            siguiete_carta_cola1(carta);
            estado= false;
        }
    }
    else {
        if(carta.valor==1){
            pila->push(carta);
        }
        else {
            cout<<"no se puede realizar ese movimiento"<<endl;
            siguiete_carta_cola1(carta);
            estado= false;
        }

    }
    return estado;
}
bool Validaciones:: push_pilas(int menu,Carta carta){
    bool estado;
    switch (menu) {
        case 1:
            estado=  condiciones_push_pila(carta, pila1);
            break;
        case 2:
            estado=  condiciones_push_pila(carta, pila2);
            break;
        case 3:
            estado=  condiciones_push_pila(carta, pila3);
            break;
        case 4:
            estado= condiciones_push_pila(carta, pila4);
            break;
        default: cout<<"Fuera de rango"<<endl;
            inserta_pilas_siguiente(carta);
    }
    return estado;
}
bool Validaciones:: inserta_pilas_siguiente(Carta carta_aux){
    int num_pila;
    cout<<"Ingrese el numero de pila: "<<endl;
    cin>>num_pila;
    cout<<endl;
    return push_pilas(num_pila, carta_aux );
}
void Validaciones::insertar_pilas(){
    int num_pila;
    int num_fila;
    cout<<"Ingrese el numero de pila: "<<endl;
    cin>>num_pila;
    cout<< "Ingrese el numero de columna en donde quiere sacar la carta: "<<endl;
    cin>>num_fila;
    cout<<endl;
    if (push_pilas(num_pila, recursosLista.top_lista(num_fila) )){
        recursosLista.  pop_lista(num_fila);
    }

}
