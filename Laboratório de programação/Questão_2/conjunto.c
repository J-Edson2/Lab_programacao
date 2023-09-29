#include "conjunto.h"

No* criarNo(int dado) {
    No* novoNo = (No*) malloc(sizeof(No));
    if (!novoNo) {
        printf("Erro na alocação de memória\n");
        exit(0);
    }
    novoNo->dado = dado;
    novoNo->proximo = NULL;
    return novoNo;
}

No* inserirNo(No* cabeca, int dado) {
    No* novoNo = criarNo(dado);
    if (cabeca == NULL) {
        cabeca = novoNo;
    } else {
        No* temp = cabeca;
        while (temp->proximo != NULL) {
            temp = temp->proximo;
        }
        temp->proximo = novoNo;
    }
    return cabeca;
}

void imprimirLista(No* n) {
    while (n != NULL) {
        printf("%d ", n->dado);
        n = n->proximo;
    }
}

int estaNaLista(No* cabeca, int dado) {
    No* temp = cabeca;
    while (temp != NULL) {
        if (temp->dado == dado)
            return 1;
        temp = temp->proximo;
    }
    return 0;
}

No* uniaoListas(No* cabeca1, No* cabeca2) {
    No* resultado = NULL;
    No* temp = cabeca1;

    while (temp != NULL) {
        resultado = inserirNo(resultado, temp->dado);
        temp = temp->proximo;
    }

    temp = cabeca2;
    while (temp != NULL) {
        if (!estaNaLista(resultado, temp->dado)) {
            resultado = inserirNo(resultado, temp->dado);
        }
        temp = temp->proximo;
    }

    return resultado;
}

No* intersecaoListas(No* cabeca1, No* cabeca2) {
    No* resultado = NULL;

    while (cabeca1 != NULL) {
        if (estaNaLista(cabeca2, cabeca1->dado)) {
            resultado = inserirNo(resultado, cabeca1->dado);
        }
        cabeca1 = cabeca1->proximo;
    }

    return resultado;
}

No* diferencaListas(No* cabeca1, No* cabeca2) {
    No* resultado = NULL;
    while (cabeca1 != NULL) {
        if (!estaNaLista(cabeca2, cabeca1->dado)) {
            resultado = inserirNo(resultado, cabeca1->dado);
        }
        cabeca1 = cabeca1->proximo;
    }

    return resultado;
}
