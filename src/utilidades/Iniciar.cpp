#include <iostream>
#include "../../include/utilidades/Iniciar.h"
#include "../../include/utilidades/Tablero.h"
#include "../../include/utilidades/GenerarCartas.h"
#include "../../include/estructuras/Cola.h"
#include "../../include/estructuras/Pila.h"
using namespace  std;
Iniciar::Iniciar() {}
Tablero tablero;
GenerarCartas generar;
Cola *cola1=new Cola();
Cola *cola2=new Cola();
Pila *pila1= new Pila();
Pila *pila2= new Pila();
Pila *pila3= new Pila();
Pila *pila4= new Pila();
Pila *pila5= new Pila();
Pila *pila6= new Pila();
Pila *pila7= new Pila();
Pila *pila18= new Pila();
Pila *pila9= new Pila();
Pila *pila10= new Pila();
Pila *pila11= new Pila();
int salir=1;
Carta matriz[7][19];


void cargar_cartas(){
    pila1=generar.Cargar_pila(1);
    pila2=generar.Cargar_pila(2);
    pila3=generar.Cargar_pila(3);
    pila4=generar.Cargar_pila(4);
    pila5=generar.Cargar_pila(5);
    pila6=generar.Cargar_pila(6);
    pila7=generar.Cargar_pila(7);
}
void menu(){
    cout<<endl<<endl<<"No.1  Para obtnera la siguiente Carta presione 1"<<endl;
    cout<<"No.1  Para salir presione  '0'"<<endl;
}


void imprimir1(){
    Pila* list[]={pila1,pila2, pila3, pila4, pila5, pila6, pila7};
    for (Pila *pila : list) {
        Nodo *aux=pila->getRaiz();
        while (aux != NULL)
        {
            cout << aux->carta.texto<<"   ";
            aux = aux->siguiente;
        }
        cout<<endl;
    }
}

void Iniciar::juar() {
   cola1=generar.aleatorio();
   cargar_cartas();
   Carta carta;
   carta.texto=" X  ";
   tablero.imprimir_encabezado(carta);
    imprimir1();
    cout<<endl;

   while(salir!=0){
       menu();
       int menu;
       cin>>menu;
       switch (menu) {
           case 1:
               if(cola1->estado_cola()){
                   while (cola2->estado_cola()!=true){
                       cola1->push(cola2->pop());
                   }
                   carta.texto=" X  ";
               }
               else{
                   carta=cola1->pop();
                   cola2->push(carta);
               }
               tablero.imprimir_encabezado(carta);
               //tablero.imprimir(19,7,pila1->tapadera());
               imprimir1();
               break;

           case  2:
               pila1->push(pila7->pop());
               imprimir1();
               break;
       }
   }

}

