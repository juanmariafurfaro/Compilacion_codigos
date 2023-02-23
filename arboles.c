//
// Created by furfa on 12/10/2022.
//

#include "arboles.h"
#include <stdlib.h>
#include <stdio.h>

Hoja *newLeaf(int val) {

    Hoja * aux = NULL;

    aux = (Hoja *) malloc(sizeof(Hoja));

    aux->value = val;
    aux->der = NULL;
    aux->izq = NULL;

    return aux;
}

void insertLeaf(Hoja ** Arb, Hoja * hoj) {

    if(*Arb == NULL){
        *Arb = hoj;
    } else{
        if(hoj->value > (*Arb)->value){
            insertLeaf(&((*Arb)->der) , hoj);
        } else if(hoj->value < (*Arb)->value){
            insertLeaf(&((*Arb)->izq) , hoj);
        } else{
            printf("El valor ya se encuentra en el arbolo\n");
        }
    }
}

void inorden(Hoja * Arb) {

    if(Arb != NULL){
        inorden(Arb->izq);
        printf("%d ", Arb->value);
        inorden(Arb->der);
    }

}

void posorden(Hoja * Arb) {

    if(Arb != NULL){
        posorden(Arb->izq);
        posorden(Arb->der);
        printf("%d ", Arb->value);
    }
}

void preorden(Hoja * Arb) {

    if(Arb != NULL){
        printf("%d ", Arb->value);
        preorden(Arb->izq);
        preorden(Arb->der);
    }

}