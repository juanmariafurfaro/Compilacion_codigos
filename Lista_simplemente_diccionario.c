//
// Created by furfa on 2/9/2022.
//

#include "Lista_simplemente_diccionario.h"
#include <stdio.h>
#include <stdlib.h>
/*
//funcion para generar una lista vacia
lista *newlista() {
    lista * aux= malloc(sizeof(lista));
    aux->campoNodos=NULL;
    return aux;
}
//funcion para crear un nodo
nodo *newnodo(int elemento) {
    nodo * aux= malloc(sizeof(nodo));
    aux->sig=NULL;
    aux->dato=elemento;
    return aux;
}
//funcion que apila un nodo
void apilar(lista *lista1, nodo *nodoAapilar) {

    nodoAapilar->sig=lista1->campoNodos;
    lista1->campoNodos=nodoAapilar;
}
//funcion que encola un nodo
void encolar(lista *cola, nodo *nodoAencolar) {
    nodo *aux=cola->campoNodos;
    //Caso lista este vacia el nodo a encolar va al principio
    if(cola->campoNodos==NULL)
    {
        cola->campoNodos=nodoAencolar;
    } else{//caso de que ya haya elementos recorremos la lista hasta el final y ahi pongo el nodo a encolar
        for (; aux->sig!=NULL ;aux=aux->sig) {}
        aux->sig=nodoAencolar;
    }
}
//funcion para mostrar una lista
void mostrar(lista *cola) {
    nodo * aux=cola->campoNodos;
    for (; aux!=NULL ; aux=aux->sig) {
        printf("%d-",aux->dato);
    }
    printf("\n");
}


//funcion para eliminar elementos repetidos
void eliminarduplicado(lista *lista1) {
    //actual apunta a la cabeza de la lista
    nodo * actual=lista1->campoNodos,* temp=NULL, *indice=NULL;
    while (actual!=NULL)
    {
        //temp apunta al nodo previo al indice
        temp=actual;
        //indice apunta al nodo siguiente a actual
        indice=actual->sig;
        while (indice!=NULL) {
            //si el dato de actual es igual al dato del indice
            //quiere decir que el indice esta apuntando a un duplicado
            if (actual->dato == indice->dato){
                //Salteamos el nodo duplicado
                temp->sig=indice->sig;
            } else{
                // caso contrario temp va a apuntar al nodo previo
                //al indice
                temp=indice;
            }
            indice=indice->sig;
        }
        actual=actual->sig;
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

void insertarOrdenado(lista *lista1, nodo *nodoAinsertar) {
    if ( lista1->campoNodos == NULL ) { //lista vacia
        lista1->campoNodos = nodoAinsertar;
    } else { //insertar ordenado
        nodo * act = NULL, * ant = NULL;
        act = lista1->campoNodos;
        ant = act;

        while ( act != NULL && act->dato < nodoAinsertar->dato ) {
            ant = act;
            act = act->sig;
        }
        if ( act == NULL ) {
            ant->sig = nodoAinsertar;
        } else if ( act == ant ) { // 1
            lista1->campoNodos = nodoAinsertar;
            nodoAinsertar->sig = act;
        } else {
            nodoAinsertar->sig = act;
            ant->sig = nodoAinsertar;
        }
    }
    lista1->tamanio++;
}

void eliminarUnNodo(lista *lista1, int valorAbuscar) {
    if(lista1->campoNodos==NULL)
    {
        printf("Lista vacia\n");
    }else{
     nodo * aux=lista1->campoNodos,*prev=aux;
        while (aux!=NULL && aux->dato!=valorAbuscar)
        {
            prev=aux;
            aux=aux->sig;
        }
        if(aux->dato==prev->dato)
        {
            lista1->campoNodos=prev->sig;
            aux->sig=NULL;
            free(aux);
        }else if(aux->dato!=prev->dato)
        {
            prev->sig=aux->sig;
            aux->sig=NULL;
            free(aux);
        }else{
            prev->sig=NULL;
            free(aux);
        }
    }
}

void ordenarlista(lista *lista1) {
    nodo * aux=lista1->campoNodos,*next=NULL;
    int temporal;
    for (; aux!=NULL; aux=aux->sig) {
        next=aux->sig;
        for (; next!=NULL; next=next->sig) {
            if(aux->dato > next->dato)
            {
                temporal=aux->dato;
                aux->dato=next->dato;
                next->dato=temporal;
            }
        }
        }

}
*/