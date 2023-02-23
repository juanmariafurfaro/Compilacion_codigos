//
// Created by furfa on 14/9/2022.
//
#include <stdio.h>
#include "lista_estatica_circular.h"

void inicializar(cola *cola1) {
     cola1->inicio=vacio;
     cola1->final=vacio;
}

int estaVacia(cola *cola1) {
    if(cola1->final==vacio)
        return 1;
    else
        return 0;
}

int estaLLena(cola *cola1) {
    if(elementos(cola1)==max){
        return 1;
    } else
    return 0;
}

int elementos(cola *cola1) {
    if(estaVacia(cola1)){
        return 0;
    } else{
        if(cola1->inicio <= cola1->final)
            return cola1->final-cola1->inicio +1;
        else{
            return max- cola1->inicio + cola1->final+1;
        }
    }
}

void agregar(cola *cola1, char c) {
    if(!(estaLLena(cola1))){
        if(estaVacia(cola1)){
            cola1->inicio=0;
        }
        if(cola1->final==max-1)
        {
            cola1->final=0;
        }else
        {
            cola1->final++;
        }
        cola1->vector[cola1->final]=c;
    } else{
        printf("Esta llena\n");
    }
}

void eliminar(cola *cola1) {
    if(estaLLena(cola1))
    {
        if(elementos(cola1)==1 )
        {
            inicializar(cola1);
        } else{
            cola1->inicio++;
        }
    } else{
         printf("Esta vacia\n");
    }

}
