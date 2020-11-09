#ifndef __TEXTONUMERICO_H
#define __TEXTONUMERICO_H

typedef void* TextoNumerico;

TextoNumerico criaTextoNumerico(double x, double y, char corb[], char corp[], double txt);

double getTextoNumericoTexto(TextoNumerico texto);

double getTextoNumericoX(TextoNumerico texto);

double getTextoNumericoY(TextoNumerico texto);

char* getTextoNumericoCorb(TextoNumerico texto);

char* getTextoNumericoCorp(TextoNumerico texto);

void setTextoNumericoTexto(TextoNumerico texto, double txt);

void setTextoNumericoX(TextoNumerico texto, double x);

void setTextoNumericoY(TextoNumerico texto, double y);

void setTextoNumericoCorb(TextoNumerico texto, char corb[]);

void setTextoNumericoCorp(TextoNumerico texto, char corp[]);

#endif