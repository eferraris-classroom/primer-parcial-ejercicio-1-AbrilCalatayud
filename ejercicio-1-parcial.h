//
// Created by Calatayud on 23/6/2023.
//

#ifndef INC_2023_06_23_PARCIAL_1_EJERCICIO_1_PARCIAL_H
#define INC_2023_06_23_PARCIAL_1_EJERCICIO_1_PARCIAL_H

typedef struct nodo{
    int data;
    struct nodo * prev;
    struct nodo * sig;
}nodo;

typedef struct lista{
    nodo * cabecera;
}lista;

nodo * newNodo (int data);
lista * newLista();

void enlistar(lista * lista, nodo * nodoAgregar);
void imprimir(lista * lista);

void juntarEnOrden(lista * lista1, lista * lista2);

#endif //INC_2023_06_23_PARCIAL_1_EJERCICIO_1_PARCIAL_H
