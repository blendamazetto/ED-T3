#ifndef __DENSIDADE_H
#define __DENSIDADE_H

typedef void* Densidade;

Densidade criaDensidade(double x, double y, double w, double h, double d);

double getDensidadeX(Densidade densidade);

double getDensidadeY(Densidade densidade);

double getDensidadeW(Densidade densidade);

double getDensidadeH(Densidade densidade);

double getDensidadeD(Densidade densidade);

void setDensidadeX(Densidade densidade, double x);

void setDensidadeY(Densidade densidade, double y);

void setDensidadeW(Densidade densidade, double w);

void setDensidadeH(Densidade densidade, double h);

void setDensidadeD(Densidade densidade, double d);


#endif