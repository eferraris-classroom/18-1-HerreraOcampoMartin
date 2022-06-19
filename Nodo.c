#include "Nodo.h"
#include <stdio.h>
#include <stdlib.h>

Nodo *crearNodo(int codigo){
    Nodo *nuevo = (Nodo*) malloc(sizeof (Nodo));

    if(nuevo == NULL){
        printf("No hay memoria libre.");
        exit(-1);
    }

    nuevo->siguiente = NULL;
    nuevo->codigo = codigo;

    return nuevo;
}

Nodo *voltearNodos(Nodo *act, Nodo *ant){
    if(act == NULL){
        return ant;
    }

    Nodo *sig = act->siguiente;
    act->siguiente = ant;

    return voltearNodos(sig, act);
}

Nodo *copiarNodo(Nodo *nodo){
    if(nodo == NULL){
        return NULL;
    }

    Nodo *copia = crearNodo(nodo->codigo);
    copia->siguiente = copiarNodo(nodo->siguiente);
    return copia;
}