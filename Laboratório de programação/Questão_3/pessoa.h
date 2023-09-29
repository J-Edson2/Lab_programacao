#ifndef PESSOA_H_INCLUDED
#define PESSOA_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[50];
    int senha;
} Pessoa;

int gerarSenha();
void formarPares(Pessoa pessoas[], int n);


#endif // PESSOA_H_INCLUDED
