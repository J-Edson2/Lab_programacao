#ifndef CONJUNTO_H_INCLUDED
#define CONJUNTO_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int dado;
    struct no *proximo;
} No;

No* criarNo(int dado);
No* inserirNo(No* cabeca, int dado);
void imprimirLista(No* n);
int estaNaLista(No* cabeca, int dado);
No* uniaoListas(No* cabeca1, No* cabeca2);
No* intersecaoListas(No* cabeca1, No* cabeca2);
No* diferencaListas(No* cabeca1, No* cabeca2);

#endif
