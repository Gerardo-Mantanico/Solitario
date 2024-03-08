#include "iostream"
#include "../../include/utilidades/Tablero.h"
#include "../../include/estructuras/Cola.h"
#include "../../include/estructuras/Pila.h"
#include "../../include/estructuras/ListaDoble .h"
using namespace std;

void header(){
    //printf("%c", 201);
    cout<<"+";
    for(int i=0; i<5;i++){
       // printf("%c", 205); // ═
        cout<<"~";
    }
    //printf("%c", 187);
    cout<<"+";
    for (int i = 0; i <5; ++i) {
        cout<<" ";
    }
}
void boby(string text){
    //printf("%c", 186);
    cout<<"|";
    cout<<text; // ═
    //("%c", 186);
    cout<<"|";
    for (int i = 0; i <5; ++i) {
        cout<<" ";
    }
}
void footer(){
   // printf("%c", 200);
    cout<<"+";
    for(int i=0; i<5;i++){
       // printf("%c", 205); // ═
       cout<<"~";
    }
    //printf("%c", 188);
    cout<<"+";
    for (int i = 0; i <5; ++i) {
        cout<<" ";
    }
}

void Tablero::imprimir_encabezado(Carta carta , Carta pila1,Carta pila2,Carta pila3,Carta  pila4) {
    cout<<"\t\t\t\t"<<"    Pila 1\t Pila 2\t     Pila 3\t Pila 4"<<endl;
    for (int i = 0; i <7; ++i) {
        if(i!=2){header();}
        else{cout<<"            ";}
    }
    cout<<endl;
    for (int i = 0; i <7; ++i) {
        switch (i) {
            case 0:
                boby("  X  ");
                break;
            case 1:
                if(carta.texto.size()==5){
                    boby(carta.texto);
                }
                else{
                    boby(" "+carta.texto);
                }

                break;
            case 3:
                if(pila1.texto.size()==5){
                    boby( pila1.texto);
                }
                else{
                    boby( " "+pila1.texto);
                }

                break;
            case 4:
                if(pila2.texto.size()==5){
                    boby( pila2.texto);
                }
                else{
                    boby( " "+pila2.texto);
                }

                break;
            case 5:
                if(pila3.texto.size()==5){
                    boby( pila3.texto);
                }
                else{
                    boby( " "+pila3.texto);
                }

                break;
            case 6:
                if(pila4.texto.size()==5){
                    boby( pila4.texto);
                }
                else{
                    boby( " "+pila4.texto);
                }

                break;
            default: cout<<"            ";
        }
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

void Tablero::imprimircuerpo(ListaDoble *list1, ListaDoble *list2, ListaDoble *list3, ListaDoble *list4, ListaDoble *list5,
                        ListaDoble *list6, ListaDoble *list7) {
    size_t longitudMaxima = 0;
    ListaDoble* list[] = {list1, list2, list3, list4, list5, list6, list7};
    cout << " COL 1" << "\t" << "\t" << " COL 2" << "\t" << "\t" << " COL 3" << "\t" << "\t" << " COL 4" << "\t" << "\t" << " COL 5" << "\t" << "\t" << " COL 6" << "\t" << "\t" << " COL 7" << endl;
    for (int i = 0; i <103 ; ++i) {
        //printf("%c", 205);
        cout<<"~";
    }
    cout<<endl;
    for (size_t i = 0; i < 19; ++i) { // Ajusta el valor 10 según la cantidad máxima de cartas en una fila
        for (const auto& lista : list) {
          //  if (lista->estaVacia())
            //    continue;
            Nodo_doble* temp = lista->inicio;
            size_t longitudLista = 0;
            while (temp != nullptr && longitudLista < i) {
                longitudLista++;
                temp = temp->siguiente;
            }
            if (longitudLista > longitudMaxima) {
                longitudMaxima = longitudLista;
            }
            if (temp != nullptr) {
               // printf("%c", 186);
                cout<<"|";
                if (temp->carta.visible==true) {
                    if (temp->carta.texto.size() == 5) {
                        cout << temp->carta.texto;
                    } else {
                        cout << " " + temp->carta.texto;
                    }
                    cout<<"|";
                   // printf("%c", 186);
                    cout << "\t" << "\t";
                } else {
                    cout << "  X  ";
                    cout<<"|";
                   // printf("%c", 186);
                    cout << "\t" << "\t";

                }
            } else {
                cout << "\t" << "\t";
            }
        }
        cout <<endl;
    }
}


