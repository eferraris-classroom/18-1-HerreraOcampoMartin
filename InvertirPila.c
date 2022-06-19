#include "InvertirPila.h"
#include <stdio.h>
#include <stdlib.h>

Pila *crearPila(){
    Pila *pila = (Pila*) malloc(sizeof (Pila));

    if(pila == NULL){
        printf("No hay memoria libre.");
        exit(-1);
    }

    pila->tam = 0;
    pila->primero = NULL;

    return pila;
}

Pila *invertirPila(Pila *pila){
    Pila *nueva = crearPila();
    Nodo *act = copiarNodo(pila->primero);
    Nodo *ant = act;

    if(act != NULL){
        Nodo *sig = act->siguiente;
        act->siguiente = NULL;
        nueva->primero = voltearNodos(sig, ant);
    }

    return nueva;
}

void apilar(Pila *pila, Nodo *nodoAInsertar){
    nodoAInsertar->siguiente = pila->primero;
    pila->primero = nodoAInsertar;
    pila->tam++;
}

void imprimirPila(Pila *pila){
    Nodo *aux = pila->primero;

    if(aux == NULL){
        printf("La lista esta vacía.\n");
        return;
    }

    printf("\nPila:\n");
    for(; aux != NULL; aux = aux->siguiente){
        printf("%d ", aux->codigo);
    }

    printf("\n");
}

void liberarPila(Pila *pila){
    Nodo *aux = pila->primero;

    if(aux != NULL){
        while(aux->siguiente != NULL){
            Nodo *ant = aux;
            aux = aux->siguiente;
            free(ant);
        }

        free(aux);
    }

    free(pila);
}

