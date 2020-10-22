#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

typedef struct node{

    Info info;
    struct node *anterior;
    struct node *proximo;

}NoStruct;

typedef struct lista{

    NoStruct *primeiro;
    NoStruct *ultimo;

}ListaStruct;

Lista create()
{
    ListaStruct* lista = (ListaStruct*) malloc(sizeof(ListaStruct));
    lista->primeiro = NULL;
    lista->ultimo = NULL;
    return lista;
}

void insert(Lista l, Info info) 
{
    ListaStruct* lista = (ListaStruct*) l;
    NoStruct* node = (NoStruct*) malloc(sizeof(NoStruct));

    node->info = info;

    if(lista->primeiro == NULL) 
    {
        node->anterior = NULL;
        lista->primeiro = node;
    } 

    else 
    {
        lista->ultimo->proximo = node;
        node->anterior = lista->ultimo;
    }
    
    node->proximo = NULL;
    lista->ultimo = node;
}

No getFirst(Lista lista)
{
    ListaStruct* l = (ListaStruct*) lista;
    return l->primeiro;
}

No getLast(Lista lista)
{
    ListaStruct* l = (ListaStruct*) lista;
    return l->ultimo;
}

No getNext(No elemento)
{
    NoStruct* node = (NoStruct*) elemento;
    return node->proximo;
}

No getPrevious(No elemento)
{
    NoStruct* node = (NoStruct*) elemento;
    return node->anterior;
}

Info getInfo(No elemento)
{
    NoStruct* node = (NoStruct*) elemento;
    return node->info;
}

void insertAfter(Lista lista, No node, Info info)
{
    ListaStruct* lis = (ListaStruct*) lista;
    NoStruct* nod = (NoStruct*) node;
    NoStruct* novo = (NoStruct*) malloc(sizeof(NoStruct));

    novo->info = info;

    if(nod->proximo == NULL){
        nod->proximo = novo;
        novo->proximo = NULL;
        novo->anterior = nod;
        lis->ultimo = novo;
    }
    else
    {
        NoStruct* aux = nod->proximo;
        nod->proximo = novo;
        novo->proximo = aux;
        novo->anterior = nod;
        aux->anterior = novo;
    }

}

void insertBefore(Lista lista, No node, Info info)
{
    ListaStruct* lis = (ListaStruct*) lista;
    NoStruct *nod = (NoStruct*) node;

    NoStruct* novo = (NoStruct*) malloc(sizeof(NoStruct));
    novo->info = info;

    if(nod->anterior == NULL)
    {
        nod->anterior = novo;
        novo->proximo = nod;
        novo->anterior = NULL;
        lis->primeiro = novo;
    }
    else
    {
        NoStruct* aux = nod->anterior;
        nod->anterior = novo;
        novo->proximo = nod;
        novo->anterior = aux;
        aux->proximo = novo;
    }
}

void removerNo(Lista lista, No no)
{
    ListaStruct* l = (ListaStruct*) lista;
    NoStruct* node = (NoStruct*) no;

    if(node->anterior == NULL)
    {
        l->primeiro = node->proximo;
    }
    else
    {
        node->anterior->proximo = node->proximo;
    }
    if(node->proximo == NULL)
    {
        l->ultimo = node->anterior;
    }
    else
    {
        node->proximo->anterior = node->anterior;
    }

    free(getInfo(node));
    free(node);
}

void removeList(Lista l)
{
    ListaStruct* lista = (ListaStruct*) l;
    NoStruct* node = lista->primeiro;
    NoStruct* aux;
    
    while(node != NULL)
    {
        aux = node;
        node = node->proximo;
        free(getInfo(aux));
        free(aux);
    }
    free(lista);
}
