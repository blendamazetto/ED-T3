#ifndef __POLIGONO_H
#define __POLIGONO_H

typedef void* Poligono;

Poligono criaPoligono(char cor[], int tamanho);

double getPoligonoX(Poligono poli, int index);

double getPoligonoY(Poligono poli, int index);

char* getPoligonoCor(Poligono poli);

int getPoligonoTamanho(Poligono poli);

void setPoligonoX(Poligono poli, double x, int index);

void setPoligonoY(Poligono poli, double y, int index);

#endif