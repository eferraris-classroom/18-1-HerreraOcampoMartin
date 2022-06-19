#ifndef INC_18_1_HERRERAOCAMPOMARTIN_INVERTIRPILA_H
#define INC_18_1_HERRERAOCAMPOMARTIN_INVERTIRPILA_H

#include "Nodo.h"

typedef struct pila {
    Nodo *primero;
    int tam;
} Pila;

Pila *crearPila();
Pila *invertirPila(Pila *pila);
void apilar(Pila *pila, Nodo *nodoAInsertar);
void imprimirPila(Pila *pila);
void liberarPila(Pila *pila);

#endif
