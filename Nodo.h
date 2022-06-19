#ifndef INC_18_1_HERRERAOCAMPOMARTIN_NODO_H
#define INC_18_1_HERRERAOCAMPOMARTIN_NODO_H

typedef struct nodo {
    int codigo;
    struct nodo *siguiente;
} Nodo;

Nodo *crearNodo(int codigo);
Nodo *copiarNodo(Nodo *nodo);
Nodo *voltearNodos(Nodo *act, Nodo *ant);

#endif
