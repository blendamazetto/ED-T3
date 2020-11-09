#ifndef __POSTO_H
#define __POSTO_H

typedef void* Posto;

Posto criaPosto(int id, double x, double y, double distancia);

void copiarNo(Posto posto1, Posto posto2);

int getPostoId(Posto posto);

double getPostoX(Posto posto);

double getPostoY(Posto posto);

double getPostoDistancia(Posto posto);

void setPostoId(Posto posto, int id);

void setPostoX(Posto posto, double x);

void setPostoY(Posto posto, double y);

void setPostoDistancia(Posto posto, double distancia);

#endif
