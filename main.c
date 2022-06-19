#include <stdio.h>
#include "InvertirPila.h"
#include "InvertirCola.h"

void usarPila();
void usarCola();

int main() {

    usarPila();
    usarCola();

    return 0;
}

void usarPila() {
    Pila *pila = crearPila();

    apilar(pila, crearNodo(321));
    apilar(pila, crearNodo(43));
    apilar(pila, crearNodo(423));
    apilar(pila, crearNodo(65));
    apilar(pila, crearNodo(8675));
    apilar(pila, crearNodo(23));
    apilar(pila, crearNodo(1));

    imprimirPila(pila);

    Pila *invertida = invertirPila(pila);

    imprimirPila(invertida);
    imprimirPila(pila);

    liberarPila(pila);
    liberarPila(invertida);
}

void usarCola(){
    Cola *cola = crearCola();

    encolarNodo(cola, crearNodo(43));
    encolarNodo(cola, crearNodo(435));
    encolarNodo(cola, crearNodo(543));
    encolarNodo(cola, crearNodo(87));
    encolarNodo(cola, crearNodo(9));

    imprimirCola(cola);

    Cola *invertida = invertirCola(cola);

    imprimirCola(invertida);
    imprimirCola(cola);

    liberarCola(cola);
    liberarCola(invertida);
}
