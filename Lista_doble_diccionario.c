//
// Created by furfa on 2/9/2022.
//
/*
#include "Lista_doble_diccionario.h"
#include <stdio.h>
#include <stdlib.h>
lista * newlista(){
    lista *aux= malloc(sizeof(lista));
    aux->campoNodos=NULL;
    aux->tamanio=0;
    return aux;
}

nodo *newNodo(int numero) {
    nodo *aux= malloc(sizeof(nodo));
    aux->dato=numero;
    aux->sig=NULL;
    aux->ant=NULL;
    return aux;
}

 void apilar(lista *lista1, nodo *nodoAinsertar) {
    if(lista1->campoNodos==NULL)
    {
        lista1->campoNodos=nodoAinsertar;
        nodoAinsertar->ant=NULL;
    }else{
        nodoAinsertar->sig=lista1->campoNodos;
        lista1->campoNodos=nodoAinsertar;
        nodoAinsertar->ant=NULL;
    }
    lista1->tamanio++;
}

void encolar(lista *lista1, nodo *nodoAencolar) {
    nodo *aux=lista1->campoNodos;
    if(lista1->campoNodos==NULL)
    {
        lista1->campoNodos=nodoAencolar;
        nodoAencolar->ant=NULL;
    } else{
        for (;aux->sig!=NULL ;aux=aux->sig) {}
        aux->sig=nodoAencolar;
        nodoAencolar->sig=NULL;
        nodoAencolar->ant=aux;
    }
}
void mostrar(lista *lista1) {
    nodo *aux=lista1->campoNodos;
    for (; aux!=NULL ; aux=aux->sig) {
        printf("(%d)-",aux->dato);
    }
    printf("\n");

}
void reemplazo(lista *pila, int posicion, nodo *nodoQuemeto) {
    nodo *aux=pila->campoNodos;
    if(posicion==0)
    {
        pila->campoNodos=nodoQuemeto;
        nodoQuemeto->ant=NULL;
        nodoQuemeto->sig=aux->sig;
        aux->sig->ant=nodoQuemeto;
    }else{
        for (int i = 0; i < posicion; ++i) {
            aux=aux->sig;
        }
        if(aux->sig==NULL)
        {
            aux->ant->sig=nodoQuemeto;
            nodoQuemeto->ant=aux->ant;
            aux->ant=NULL;
        } else{
            aux->ant->sig=nodoQuemeto;
            nodoQuemeto->ant=aux->ant;
            aux->ant=NULL;
            aux->sig->ant=nodoQuemeto;
            nodoQuemeto->sig=aux->sig;
            aux->sig=NULL;
        }
    }
}

void eliminar(lista *pila, int numeroAeliminar) {
    if(pila->campoNodos==NULL)
    {
        printf("Pila vacia \n");
    }else{
        nodo *actual=pila->campoNodos,*anterior=actual;
        while (actual!=NULL && actual->dato!=numeroAeliminar)
        {
            anterior=actual;
            actual=actual->sig;
        }
        if(actual!=NULL && actual==anterior)
        {
            pila->campoNodos=actual->sig;
            actual->sig->ant=NULL;
            anterior->sig->ant=NULL;
            free(actual);
        }else if(actual->sig==NULL)
        {
            actual->ant=NULL;
            anterior->sig=NULL;
            free(actual);
        }else
        {
            actual->sig->ant=anterior;
            anterior->sig=actual->sig;
            actual->sig=NULL;
            actual->ant=NULL;
            free(actual);
        }
    }

}

//funcion para vaciar una lista
void liberar(lista * lista1) {
    nodo * aux=lista1->campoNodos;
    if(aux!=NULL)
    {
        while (aux!=NULL){
            nodo * sig=aux->sig;
            free(aux);
            aux=sig;
        }
    }
    free(lista1);
}

int miembro(lista *lista1, int numero) {
    nodo * aux=lista1->campoNodos;
    for (;aux!=NULL; aux=aux->sig) {
        if(aux->dato==numero)
            return 1;
    }
    return 0;
}

void eliminardupilcados(lista *lista1) {
    nodo *actual, *indice, *temp;
    for (actual = lista1->campoNodos; actual != NULL; actual = actual->sig) {
        for (indice = actual->sig; indice != NULL; indice = indice->sig) {
            if (actual->dato == indice->dato) {
                temp = indice;
                indice->ant->sig = indice->sig;
                if (indice->sig != NULL) { indice->sig->ant = indice->ant; }
                temp = NULL;
            }
        }
    }
}
void ordenarLista(lista *lista1) {
    nodo * actual=NULL, *indice=NULL;
    int temp;
    if(lista1->campoNodos==NULL){
        return;
    }
    else{
        for(actual=lista1->campoNodos;actual->sig!=NULL;actual=actual->sig)
        {
            for (indice=actual;indice!=NULL;indice=indice->sig) {
                if(actual->dato > indice->dato)
                {
                    temp=actual->dato;
                    actual->dato=indice->dato;
                    indice->dato=temp;
                }
            }
        }
    }
}

*/
