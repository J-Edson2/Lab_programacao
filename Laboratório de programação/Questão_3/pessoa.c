#include "pessoa.h"

int gerarSenha() {
    return rand() % 100 + 1;
}

void formarPares(Pessoa pessoas[], int n) {
    Pessoa filaImpar[50], filaPar[50];
    int inicioImpar = 0, fimImpar = 0;
    int inicioPar = 0, fimPar = 0;

    printf("Pessoas e senhas:\n");
    for (int i = 0; i < n; i++) {
        pessoas[i].senha = gerarSenha();
        printf("%s, senha %d\n", pessoas[i].nome, pessoas[i].senha);

        if (pessoas[i].senha % 2 == 0) {
            filaPar[fimPar++] = pessoas[i];
        } else {
            filaImpar[fimImpar++] = pessoas[i];
        }
    }

    printf("\n\nPares formados:\n");
    while (inicioImpar < fimImpar && inicioPar < fimPar) {
        printf("%s e %s\n", filaImpar[inicioImpar].nome, filaPar[inicioPar].nome);
        inicioImpar++;
        inicioPar++;
    }

    printf("\n\nPessoas na fila:\n");
    for (int i = inicioImpar; i < fimImpar; i++) {
        printf("%s, senha %d\n", filaImpar[i].nome, filaImpar[i].senha);
    }
    for (int i = inicioPar; i < fimPar; i++) {
        printf("%s, senha %d\n", filaPar[i].nome, filaPar[i].senha);
    }
}
