#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "poligono.h"

typedef struct p
{
    double x;
    double y;
    char cor[22];
    int tamanho;

}PoligonoStruct;

Poligono criaPoligono(double x, double y, char cor[], int tamanho)
{
    PoligonoStruct* poli = (PoligonoStruct*) malloc(sizeof(PoligonoStruct));

    poli->x = x;
    poli->y = y;
    strcpy(poli->cor, cor);
    poli->tamanho = tamanho;

    return poli;
}

double getPoligonoX(Poligono poli)
{
    PoligonoStruct* p = (PoligonoStruct*) poli;
    return p->x;
}

double getPoligonoY(Poligono poli)
{
    PoligonoStruct* p = (PoligonoStruct*) poli;
    return p->y;
}

char* getPoligonoCor(Poligono poli)
{
    PoligonoStruct* p = (PoligonoStruct*) poli;
    return p->cor;
}

int getPoligonoTamanho(Poligono poli)
{
    PoligonoStruct* p = (PoligonoStruct*) poli;
    return p->tamanho;
}