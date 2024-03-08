# Variables
CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra
LDFLAGS =
SRCDIR = .
INCDIR = include
OBJDIR = obj
BINDIR = .
# Archivos fuente
SRCS := $(SRCDIR)/src/estrucuras/Cola.cpp \
        $(SRCDIR)/src/estrucuras/ListaDoble.cpp \
        $(SRCDIR)/src/estrucuras/Pila.cpp \
        $(SRCDIR)/src/recursos/RecursosLista.cpp \
        $(SRCDIR)/src/recursos/Validaciones.cpp \
        $(SRCDIR)/src/utilidades/GenerarCartas.cpp \
          $(SRCDIR)/src/utilidades/Historial.cpp \
        $(SRCDIR)/src/utilidades/Iniciar.cpp \
        $(SRCDIR)/src/utilidades/Tablero.cpp \
        main.cpp

OBJS := $(patsubst $(SRCDIR)/%.cpp,$(OBJDIR)/%.o,$(SRCS))
# Archivos de encabezado
INCS := $(wildcard $(INCDIR)/estructuras/*.h) \
        $(wildcard $(INCDIR)/recursos/*.h) \
        $(wildcard $(INCDIR)/utilidades/*.h)
# Objetivo principal
TARGET = $(BINDIR)/Solitario

# Reglas
$(TARGET): $(OBJS)
	 @mkdir -p $(BINDIR)
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	@mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) -I$(INCDIR) -c $< -o $@
# Limpiar
clean:
	rm -rf $(OBJDIR) $
.PHONY: clean

