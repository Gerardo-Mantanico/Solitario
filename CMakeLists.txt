cmake_minimum_required(VERSION 3.27)
project(Solitario)

set(CMAKE_CXX_STANDARD 17)

add_executable(Solitario main.cpp
        src/utilidades/Tablero.cpp
        include/utilidades/Tablero.h
        src/utilidades/Iniciar.cpp
        include/utilidades/Iniciar.h
        src/estrucuras/Pila.cpp
        include/estructuras/Pila.h
        include/estructuras/Nodo.h
        include/estructuras/Carta.h
        src/estrucuras/Cola.cpp
        include/estructuras/Cola.h
        include/utilidades/GenerarCartas.h
        src/utilidades/GenerarCartas.cpp
        include/recursos/Color.h
        include/estructuras/Nodo_doble.h
)
