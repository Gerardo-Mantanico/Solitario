#include <iostream>
#include <string>
#include "../../include/utilidades/Iniciar.h"
#include "../../include/utilidades/Tablero.h"
#include "../../include/utilidades/GenerarCartas.h"
#include "../../include/estructuras/Cola.h"
#include "../../include/estructuras/Pila.h"
#include "../../include/recursos/RecursosLista.h"
#include "../../include/recursos/Validaciones.h"

using namespace  std;

Iniciar::Iniciar() {}
Tablero tablero;
GenerarCartas generar;
Cola *cola1=new Cola();
Cola *cola2=new Cola();
ListaDoble *list1 = new ListaDoble();
ListaDoble *list2 = new ListaDoble();
ListaDoble *list3 = new ListaDoble();
ListaDoble *list4 = new ListaDoble();
ListaDoble *list5 = new ListaDoble();
ListaDoble *list6 = new ListaDoble();
ListaDoble *list7 = new ListaDoble();
Pila *pila1= new Pila();
Pila *pila2= new Pila();
Pila *pila3= new Pila();
Pila *pila4= new Pila();
RecursosLista recursos;
Validaciones validaciones;
int menu_indice=-1;

void cargar_cartas(){
    list1=generar.Cargar_pila(1);
    list2=generar.Cargar_pila(2);
    list3=generar.Cargar_pila(3);
    list4=generar.Cargar_pila(4);
    list5=generar.Cargar_pila(5);
    list6=generar.Cargar_pila(6);
    list7=generar.Cargar_pila(7);
    RecursosLista r(list1, list2, list3, list4, list5, list6, list7);
    recursos=r;
    Validaciones validaciones1(recursos,cola1,cola2,pila1,pila2,pila3,pila4);
    validaciones=validaciones1;
}

void menu(){
    cout<<endl<<endl<<"1)  Para obtnera la siguiente Carta,  presione '1'"<<endl;
    cout<<"2)  Para mover  una carta de una columna a otra,  presione '2' "<<endl;
    cout<<"3)  Para mover  un conjunto de cartas precione '3'"<<endl;
    cout<<"4   Para mover una carta hacia un pila presione '4'"<<endl;
    cout<<"5)  Para salir presione  '0'"<<endl;
}

void  imprimir1(){
    tablero.imprimircuerpo(list1,list2,list3,list4,list5,list6,list7);
}

void Iniciar::juar() {
    int actual;
    int siguiente;
    cola1=generar.aleatorio();
    cargar_cartas();
    Carta carta;
    carta.texto=" X  ";
    tablero.imprimir_encabezado(carta,pila1->top(),pila2->top(),pila3->top(),pila4->top());
    imprimir1();
    cout<<endl;
    while(menu_indice!=0){
        //cola2->imprimir(cola2);
       menu();
       cin>>menu_indice;
       switch (menu_indice) {
           case 1:
               if(cola1->estado_cola()){
                   while (cola2->estado_cola()!=true){
                       cola1->push(cola2->pop());
                   }
                   carta.texto=" X  ";
               }
               else{
                   carta=cola1->pop();
                   carta.visible=true;
                   tablero.imprimir_encabezado(carta,pila1->top(),pila2->top(),pila3->top(),pila4->top());
                   imprimir1();
                   carta=validaciones.siguiete_carta_cola1(carta);
               }
               break;
           case  2:
               validaciones.mover_cartas_filas( actual,  siguiente);
               break;
           case 3:
               validaciones. conjuto_cartas();
               break;
           case 4:
               validaciones.  insertar_pilas();
               break;
           default: cout<<"Fuera de rango"<<endl;
       }
        tablero.imprimir_encabezado(carta,pila1->top(),pila2->top(),pila3->top(),pila4->top());
       imprimir1();

   }

}
