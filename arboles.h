//
// Created by furfa on 12/10/2022.
//

#ifndef COMPILACION_CODIGOS_ARBOLES_H
#define COMPILACION_CODIGOS_ARBOLES_H
typedef struct leaf{
    int value;

    struct leaf * izq;
    struct leaf * der;

}Hoja;

Hoja * newLeaf(int);
void insertLeaf(Hoja **, Hoja *);

void inorden(Hoja *);
void posorden(Hoja *);
void preorden(Hoja *);

#endif //COMPILACION_CODIGOS_ARBOLES_H
