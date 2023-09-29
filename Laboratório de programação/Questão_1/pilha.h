#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

struct No {
    int data;
    struct No* next;
};

struct No* novo_no(int data);
int pilha_vazia(struct No* raiz);
void push(struct No** raiz, int data);
int pop(struct No** raiz);
void decimal_binario(int numero);

#endif
