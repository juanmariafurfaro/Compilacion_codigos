//
// Created by furfa on 14/9/2022.
//
/*
#include <stdio.h>
#include <stdlib.h>
#include "lista_doble_circular_diccionario.h"

lista *newlista() {
    lista *aux= malloc(sizeof(lista));
    aux->tamanio=0;
    aux->ultimo=NULL;
    aux->primero=NULL;
    return aux;
}

nodo *newNodo(int numero) {
    nodo *aux= malloc(sizeof(nodo));
    aux->sig=NULL;
    aux->dato=numero;
    aux->ant=NULL;
    return aux;
}

void agregarNodo(lista *lista1, nodo *nodo1) {
    if(lista1->primero==NULL)//Es el primer elemento
    {
        //primero y ultimo son iguales
        lista1->primero=lista1->ultimo=nodo1;
        //ant y sig estan vacios
        nodo1->ant=NULL;
        nodo1->sig=NULL;
    }else{
        lista1->ultimo->sig=nodo1;
        nodo1->ant=lista1->ultimo;
        lista1->ultimo=nodo1;
        nodo1->sig=lista1->primero;
        lista1->primero->ant=nodo1;
    }
    lista1->tamanio++;
}
//funcion para mostrar la lista
void mostrar(lista *lista1) {
    nodo * aux=lista1->primero;
    do {
        printf("%d-",aux->dato);
        aux=aux->sig;
    } while (aux!=lista1->primero);
    printf("\n");
}
//funcion para eliminar un nodo de la lista
void eliminar(lista *lista1, int valorAeliminar) {
    nodo*actual=lista1->primero,* indice=lista1->ultimo;
    if(lista1->primero==NULL)
        printf("Lista vacia \n");
    else{
        //primer caso el elemento se encuentra en la cabecera
        if(lista1->primero->dato==valorAeliminar) {
            lista1->ultimo->sig = actual->sig;
            actual->sig->ant = lista1->ultimo;
            lista1->primero=actual->sig;
            actual->ant=NULL;
            actual->sig=NULL;
        }else if(lista1->ultimo->dato==valorAeliminar)//segundo caso el elemento esta al final
        {
             indice->ant->sig=lista1->primero;
             lista1->ultimo=indice->ant;
             lista1->primero->ant=indice->ant;
             indice->sig=NULL;
             indice->ant=NULL;
        } else{//el elemento esta en el medio
            while (actual->dato!=valorAeliminar)
            {
                actual=actual->sig;
            }
            actual->sig->ant=actual->ant;
            actual->ant->sig=actual->sig;
        }
    }
    lista1->tamanio--;
}
//funcion para ver si el elemento pertenece a una lista
int miembro(lista *lista1,int valorAbuscar) {
    nodo *aux=lista1->primero;
    for (int i=0;i<lista1->tamanio;i++) {
        if(aux->dato==valorAbuscar)
            return 1;
        aux=aux->sig;
    }
    return 0;
}

void OrdenarLista(lista *lista1) {
    nodo * actual=lista1->primero, *indice=NULL;
    int temporal;
    if(lista1->primero==NULL)
    {
        printf("Lista vacia\n");
    } else{
        do {
            indice=actual->sig;
            while (indice!=lista1->primero){
                if(actual->dato > indice->dato){
                    temporal=actual->dato;
                    actual->dato=indice->dato;
                    indice->dato=temporal;
                }
                indice=indice->sig;
            }
            actual=actual->sig;
        } while (actual->sig!=lista1->primero);
    }
}

void eliminarrepetido(lista *lista1) {
    nodo *actual = lista1->primero, *indice = NULL, *temp = NULL;
    //creamos 3 auxiliares, actual para recorrer la lista, indice para ver el valor y temp para guardar el valor previo a indice
    if (actual == NULL) {
        printf("La lista esta vacia\n");
    } else {
        do {
            temp = actual;
            indice = actual->sig;//indice recorre la lista
            while (indice != actual) {
                //si indice encuentra un recorrido es salteado
                if (actual->dato == indice->dato) {
                    temp->sig = indice->sig;
                } else {
                    temp = indice;
                }
                indice = indice->sig;
            }
            lista1->tamanio--;
            actual = actual->sig;
        } while (actual->sig != lista1->primero);
    }

}
*/