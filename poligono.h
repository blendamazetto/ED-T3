#ifndef __POLIGONO_H
#define __POLIGONO_H

typedef void* Poligono;

Poligono criaPoligono(double x, double y, char cor[], int tamanho);

double getPoligonoX(Poligono poli);

double getPoligonoY(Poligono poli);

char* getPoligonoCor(Poligono poli);

int getPoligonoTamanho(Poligono poli);


#endif