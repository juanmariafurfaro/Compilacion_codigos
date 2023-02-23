//
// Created by furfa on 2/9/2022.
//

#include "lista_circular_diccionario.h"
#include <stdlib.h>
#include <stdio.h>
/*
//funcion que inicia la nueva lista
lista *newlistacircular() {
    lista * aux= malloc(sizeof(lista));
    aux->tamanio=0;
    aux->fin=NULL;
    aux->cabecera=NULL;
    return aux;
}
//funcion que crea un nodo
nodo *newnodo(int numero) {
    nodo * aux= malloc(sizeof(nodo));
    aux->sig=NULL;
    aux->dato=numero;
    return aux;
}
//funcion que junta los datos en la lista circular
void agregar(lista *lista1, nodo *nodoAagregar) {
    //caso de que el elemento sea el primero de la lista
    if(lista1->cabecera==NULL)
    {
        lista1->cabecera=nodoAagregar;
        lista1->fin=nodoAagregar;
        nodoAagregar->sig=lista1->cabecera;
    }else{//el elemento no es el primero
        lista1->fin->sig=nodoAagregar;
        lista1->fin=nodoAagregar;
        lista1->fin->sig=lista1->cabecera;
    }
    lista1->tamanio++;
}
//funcion que muestra los elementos de la lista
void mostrar(lista *lista1) {
    nodo * aux=lista1->cabecera;
    do {
        printf("%d-",aux->dato);
        aux=aux->sig;
    } while (aux!=lista1->cabecera);
    printf("\n");
}
//funcion que elimina los elementos de la lista
void eliminar(lista *lista1, int valorAeliminar) {
    nodo *actual=lista1->cabecera,*temp=lista1->fin;
    if(lista1->cabecera==NULL) {
        printf("Lista vacia");
    }else if(actual->dato==valorAeliminar){
    //el elemento se encuentra en la primer posicion
        if(actual!=temp)
        {
            lista1->cabecera=actual->sig;//la cabecera apunta al siguiente elemento desvinculando el primero
            actual=actual->sig;//actual avanza al segundo elemento
            temp->sig=actual;//temp que apuntaba al final se saltea actual para desvincularlo totalmente
        }
    }else if(lista1->fin->dato==valorAeliminar)//el elemento se encuentra al final
    {
        while (actual->sig!=temp)//hacemos avanzar actual hasta llegar al final
        {
            actual=actual->sig;
        }
        lista1->fin=actual;//reasignamos valores
        lista1->fin->sig=lista1->cabecera;
    }
    else{//el valor se encuentra en el medio de la lista
        nodo *temp2=NULL;//creamos otro auxiliar para guardare la posicion previa mientras actual avanza
        while (actual->dato!=valorAeliminar)//avanzamos hasta encontrar el nodo a eliminar
        {
            temp2=actual;
            actual=actual->sig;
        }
        temp2->sig=actual->sig;//reasignamos valores
    }
    lista1->tamanio--;
}

void eliminarrepetido(lista *lista1) {
    nodo *actual = lista1->cabecera, *indice = NULL, *temp = NULL;
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
        } while (actual->sig != lista1->cabecera);
    }
}
//funcion para ordenar la lista por el metodo burbuja
void OrdenarLista(lista *lista1) {
       nodo * actual=lista1->cabecera, *indice=NULL;
       int temporal;
       if(lista1->cabecera==NULL)
       {
           printf("Lista vacia\n");
       } else{
           do {
               indice=actual->sig;
               while (indice!=lista1->cabecera){
                   if(actual->dato > indice->dato){
                       temporal=actual->dato;
                       actual->dato=indice->dato;
                       indice->dato=temporal;
                   }
                   indice=indice->sig;
               }
               actual=actual->sig;
           } while (actual->sig!=lista1->cabecera);
       }
}
*/