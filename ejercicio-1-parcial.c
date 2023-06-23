//
// Created by Calatayud on 23/6/2023.
//
#include<stdio.h>
#include<stdlib.h>
#include "ejercicio-1-parcial.h"

nodo * newNodo (int data)
{
    nodo * aux = NULL;
    aux = malloc(sizeof(nodo));
    if(aux == NULL)
    {
        printf("Error\n");
        exit (-1);
    }
    aux->data = data;
    aux->prev = NULL;
    aux->sig = NULL;
    return aux;
}

lista * newLista ()
{
    lista * aux = NULL;
    aux = malloc(sizeof(lista));
    if(aux == NULL)
    {
        printf("Error\n");
        exit(-1);
    }
    aux->cabecera = NULL;
    return aux;
}
void enlistar(lista * lista, nodo * nodoAgregar)
{
    nodo * aux = lista->cabecera;
    if(lista->cabecera == NULL)
    {
        aux = nodoAgregar;
    }
    else
    {
        aux->sig = nodoAgregar;
    }
    nodoAgregar->prev = aux;
    aux = aux->sig;
}
void imprimir(lista * lista)
{
    nodo * aux = lista->cabecera;
    while(aux != NULL)
    {
        printf("%d \t", aux->data);
        aux = aux->sig;
    }

    printf("\n");
}

void juntarEnOrden(lista *lista1, lista *lista2)
{
    nodo * aux1 = lista1->cabecera;
    nodo * aux2 = lista2->cabecera;

    while(aux1 != NULL)
    {
        while(aux2 !=NULL)
        {
            if(aux1->data != aux2->data)
            {
                nodo * aux2copiar = aux2;
                if (aux1->data >> aux2->data)
                {
                    aux1->prev->sig = aux2copiar;
                    aux2copiar->prev = aux1->prev;
                    aux1->prev = aux2copiar;
                    aux2copiar->sig = aux1;

                }
                else //"si es mayor" es la otra posibilidad
                {
                    aux1->sig->prev = aux2copiar;
                    aux2copiar->sig = aux1->sig;
                    aux1->sig = aux2copiar;
                    aux2copiar->prev = aux1;
                }
            }
            aux2 = aux2->sig;
        }
        aux1 =  aux1->sig;
    }
}
