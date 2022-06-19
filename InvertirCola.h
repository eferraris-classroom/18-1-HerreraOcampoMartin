#ifndef INC_18_1_HERRERAOCAMPOMARTIN_INVERTIRCOLA_H
#define INC_18_1_HERRERAOCAMPOMARTIN_INVERTIRCOLA_H

#include "Nodo.h"

typedef struct cola{
    int tam;
    Nodo *primero;
} Cola;

Cola *crearCola();
Cola *invertirCola(Cola *cola);
void encolarNodo(Cola *cola, Nodo *nuevo);
void imprimirCola(Cola *cola);
void liberarCola(Cola *cola);

#endif
