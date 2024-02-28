#include "iostream"
#include "../../include/utilidades/Tablero.h"
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
    cout<<" "<<text; // ═
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
void primera_fila(){
    for (int i = 0; i <7; ++i) {
        if(i!=2){header();}
        else{cout<<"            ";}

    }
    cout<<endl;
    for (int i = 0; i <7; ++i) {
        if(i!=2){boby("    ");}
        else{cout<<"            ";}
    }
    cout<<endl;
    for (int i = 0; i <7; ++i) {
        if(i!=2){footer();}
        else{cout<<"            ";}
    }
    cout<<endl<<endl;
}

void Tablero::imprimir(int size) {
    for (int indice = size+1; indice >0; --indice) {
    if(indice==size+1){
       primera_fila();
    }
    else{
        for (int i = 0; i <indice; ++i) {
            header();
        }
        cout<<endl;
        for (int j = 0; j <indice ; ++j) {
            boby("7<3R");
        }
        cout<<endl;
    }
    }
}