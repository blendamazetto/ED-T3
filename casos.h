#ifndef __CASOS_H
#define __CASOS_H

typedef void* Casos;

Casos criaCasos(int n, double x, double y, char face[], double num, char cep[]);

int getCasosN(Casos casos);

double getCasosX(Casos casos);

double getCasosY(Casos casos);

double getCasosNum(Casos casos);

char* getCasosCEP(Casos casos);

char* getCasosFace(Casos casos);

void swap(Casos *p1, Casos *p2);

#endif