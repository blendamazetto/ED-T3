#ifndef __QRY_h
#define __QRY_h
#include "circulo.h"
#include "retangulo.h"
#include "texto.h"
#include "hidrante.h"
#include "radiobase.h"
#include "semaforo.h"
#include "quadra.h"
#include "svg.h"
#include "lerQry.h"
#include "busca.h"
#include "posto.h"
#include "densidade.h"
#include <math.h>
#include "textoNumerico.h"
#include "linha.h"
#include "poligono.h"
#include "casos.h"



/*
    *Faz os calculos para ver a area da quadra e equipamentos urbanos dentro de um retangulo
    *Precizamos das coordenadas e tamanhos do retangulo, o vetor lista, e os dois arquivos de saida como parametro para a funcao
    *Retorna nada

*/
void car(Lista listasObjetos[], double x, double y, double w, double h, char saidaSvg[], FILE* saida, Lista listasQry[]);

/*
    *Calcula a distancia entre duas figuras
    *Precisamos das coordenadas dessas figuras
    *Retorna a distancia entre elas

*/
double distancia(double x1, double y1, double x2, double y2);

/*
    *Muda a cor da borda das quadras contidas dentro de um determinado espaco em circulo
    *Precizamos das coordenadas, a cor para ser alterada, o vetor lista, e os dois arquivos de saida como parametro para a funcao
    *Retorna nada
    * 
*/
void cbq(Lista listasObjetos[], double x, double y, double r, char corb[], FILE* saida);

/*
    *Faz as comparacoes do comando i? para saber qual funcao deve ser chamada chamar
    *Precizamos do vetor lista, o id, as coordenadas e os dois arquivos de saida como parametro para a funcao
    *Retorna nada
    
*/
void i(Lista listasObjetos[], int i,  double x, double y, char saidaSvg[], FILE* saida, Lista listasQry[]);

/*
    *Muda a cor das bordas e do preenchimento dos elementos selecionados
    *Precizamos das coordenadas, a cor para ser alterada, o vetor lista, e o arquivo de saida como parametro para a funcao
    *Retorna nada
    
*/
void pnt (Lista listasObjetos[], int j, char corb[], char corp[], FILE* saida);

/*
    *Remove a forma de identificacao j
    *Precizamos do vetor lista, a identificacao, e o arquivo de saida como parametro para a funcao
    *Retorna nada
    
*/
void delf(Lista listasObjetos[], int j, FILE* saida);

/*
    *Remove a forma dos equipamentos urbanos de identificacao j
    *Precizamos do vetor lista, a identificacao, e os arquivos de saida como parametro para a funcao
    *Retorna nada
    
*/
void del (Lista listasObjetos[], char id[], FILE* saida, char saidaSvg[], Lista listasQry[]);

/*
    *Imprime no arquivo as coordenadas e qual o tipo de equipamento urbano e
    *Precizamos do vetor lista, a identificacao, e o arquivo de saida como parametro para a funcao
    *Retorna nada
    
*/
void crd (Lista listasObjetos[], char id[], FILE* saida);

/*
    *Calcula se um numero e maior ou menor que o outro
    *Precizamos de dois numeros passando pelo parametro para serem comparados
    *Retorna o numero maior
    
*/
float max(float n1, float n2);

/*
    *Calcula se um numero e maior ou menor que o outro
    *Precizamos de dois numeros passando pelo parametro para serem comparados
    *Retorna o numero menor
    
*/
float min(float n1, float n2);

/*
    *Faz os calculos para ver se ha colisao entre um retangulo e um circulo
    *Precizamos de dois void pointer e os dois arquivos de saida como parametro para a funcao
    *Retorna nada
    
*/
void retanguloxCirculo(Info circ, Info ret, FILE* saida, Lista listasQry[]);

/*
    *Faz os calculos para ver se ha colisao entre um circulo e outro circulo
    *Precizamos de dois void pointer e os dois arquivos de saida como parametro para a funcao
    *Retorna nada
    
*/
void circuloInt(Info c1, Info c2, FILE* saida, Lista listasQry[]);

/*
    *Faz os calculos para ver se ha colisao entre um retangulo e outro retangulo
    *Precizamos de dois void pointer e os dois arquivos de saida como parametro para a funcao
    *Retorna nada
    
*/
void retanguloInt(Info r1, Info r2, FILE* saida, Lista listasQry[]);

/*
    *Faz as comparacoes do comando o? para saber qual funcao de colisao chamar
    *Precizamos dos dois ids, o vetor lista, e os dois arquivos de saida como parametro para a funcao
    *Retorna nada
    
*/
void o(int j, int k, FILE* saida, Lista listasObjetos[], Lista listasQry[]);

/*
    *Verifica as quadras dentro de uma certa regiao do equipamente urbano
    *Precizamos do void pointer com as listas, os dois arquivos de saida como parametro para a funcao, o id de 
    *identificacao, a distancia e o identificador para saber se ha ou nao um # no comando
    *Retorna nada
    
*/
void dq(Lista listaObjetos[], FILE* txt, char svg_qry[], char id[], double r, int ident, Lista listasQry[]);

void shellSort(double *vet, int size);

void soc(Lista listasObjetos[], int k, char cep[], char face[], double num, FILE* saida, Lista listasQry[]);

void cv(Lista listasObjetos[], double n, char cep[], char face[], double num, Lista listasQry[]);

int circIntRegiao(Densidade dd, double x, double y, double r);

int pontoInternoCirc(double xPonto, double yPonto, double xCirc, double yCirc, double r);

double obterArea(Lista l);

Posto centroide(Lista l, double area);

int orientacao(Casos a, Casos b, Casos c);

int comparar(Casos p0, Casos a, Casos b);

No partition(Lista l, No primeiro, No ultimo);

void quickSortList(Lista l, No primeiro, No ultimo);

Lista envoltoria(Lista list);

void ci(FILE* saida, Lista listasObjetos[], double x, double y, double r, Lista listasQry[]);


#endif