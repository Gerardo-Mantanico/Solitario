#include "iostream"
#include "../../include/utilidades/Tablero.h"
#include "../../include/estructuras/Cola.h"
#include "../../include/estructuras/Pila.h"
using namespace std;

void header(){
    printf("%c", 201);
    for(int i=0; i<5;i++){
        printf("%c", 205); // ═
    }
    printf("%c", 187);
    for (int i = 0; i <5; ++i) {
        cout<<" ";
    }
}
void boby(string text){
    printf("%c", 186);
    cout<<text; // ═
    printf("%c", 186);
    for (int i = 0; i <5; ++i) {
        cout<<" ";
    }
}
void footer(){
    printf("%c", 200);
    for(int i=0; i<5;i++){
        printf("%c", 205); // ═
    }
    printf("%c", 188);
    for (int i = 0; i <5; ++i) {
        cout<<" ";
    }
}

void Tablero::imprimir_encabezado(Carta carta) {

    for (int i = 0; i <7; ++i) {
        if(i!=2){header();}
        else{cout<<"            ";}

    }
    cout<<endl;
    for (int i = 0; i <7; ++i) {
        if(i!=2){
            if(i==0){
                boby("  X  ");
            }
            else if(i==1){
                if(carta.texto.size()==5){
                    boby(carta.texto);
                }
                else{
                    boby(" "+carta.texto);
                }

            }
            else {
                boby("     ");
            }

        }
        else{cout<<"            ";}

    }
    cout<<endl;
    for (int i = 0; i <7; ++i) {
        if(i!=2){footer();}
        else{cout<<"            ";}
    }
    cout<<endl<<endl;
}
void cuadrados(int size, int columna, Carta carta){

    for (int i = 0; i <size; ++i) {
        header();
    }
    cout<<endl;
    for (int j = 0; j <size ; ++j) {
        if(columna==0 && j==0)
        boby(" "+carta.texto);
        else {
            boby(to_string(columna)+" "+ to_string(j)+"  ");

        }
    }
    cout<<endl;
}



void Tablero::imprimir(int size_colummna, int size_fila,Carta carta) {
    for (int columna=0; columna<size_colummna; columna++) {
            cuadrados( size_fila, columna, carta);
    }

}

void Tablero::cuadrado(string carta) {
    header();
    cout<<endl;
    boby(carta);
}