#include <stdio.h>
#include "ejercicio-1-parcial.h"
int main() {
    lista * lista1 = newLista();
    lista * lista2 = newLista();

    enlistar(lista1, newNodo(3));
    enlistar(lista1, newNodo(5));
    enlistar(lista1, newNodo(4));
    enlistar(lista1, newNodo(7));
    enlistar(lista1, newNodo(8));

    enlistar(lista2, newNodo(5));
    enlistar(lista2, newNodo(4));
    enlistar(lista2, newNodo(8));
    enlistar(lista2, newNodo(9));
    enlistar(lista2, newNodo(10));

    printf("Lista 1:\n");
    imprimir(lista1);
    printf("Lista 2:\n");
    imprimir(lista2);

    juntarEnOrden(lista1,lista2);
    printf("Lista unida:\n");
    imprimir(lista1);
    return 0;
}
