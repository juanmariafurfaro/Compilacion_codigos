//
// Created by furfa on 14/9/2022.
//

#ifndef COMPILACION_CODIGOS_LISTA_ESTATICA_CIRCULAR_H
#define COMPILACION_CODIGOS_LISTA_ESTATICA_CIRCULAR_H
#define max 7
#define vacio -1
typedef struct Casilla{
    int inicio;
    int final;
    char vector[max];
}cola;
void inicializar(cola * cola1);
int estaVacia(cola * cola1);
int estaLLena(cola * cola1);
int elementos(cola * cola1);
void agregar(cola * cola1,char c);
void eliminar(cola * cola1);
#endif //COMPILACION_CODIGOS_LISTA_ESTATICA_CIRCULAR_H
