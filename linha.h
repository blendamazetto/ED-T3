#ifndef __LINHA_H
#define __LINHA_H

typedef void* Linha;

Linha criaLinha(double x1, double y1, double x2, double y2, char cor[20]);

double getLinhaX1(Linha linha);

double getLinhaX2(Linha linha);

double getLinhaY1(Linha linha);

double getLinhaY2(Linha linha);

char* getLinhaCor(Linha linha);

void setLinhaX1(Linha linha, double x1);

void setLinhaX2(Linha linha, double x2);

void setLinhaY1(Linha linha, double y1);

void setLinhaY2(Linha linha, double y2);

void setLinhaCor(Linha linha, char cor[]);


#endif