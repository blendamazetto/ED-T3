#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "densidade.h"

typedef struct d{

    double w;
    double h;
    double x;
    double y;
    double d;

}DensidadeStruct;

Densidade criaDensidade(double w, double h, double x, double y, double d)
{
    DensidadeStruct* densidade = (DensidadeStruct*) malloc(sizeof(DensidadeStruct));
    densidade->x = x;
    densidade->y = y;
    densidade->w = w;
    densidade->h = h;
    densidade->d = d;

    return densidade;
}
