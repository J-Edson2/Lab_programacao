#include "pilha.h"

struct No* novo_no(int data) {
    struct No* no = (struct No*)malloc(sizeof(struct No));
    no->data = data;
    no->next = NULL;
    return no;
}

int pilha_vazia(struct No* raiz) {
    return !raiz;
}

void push(struct No** raiz, int data) {
    struct No* no = novo_no(data);
    no->next = *raiz;
    *raiz = no;
}

int pop(struct No** raiz) {
    if (pilha_vazia(*raiz))
        return -1;
    struct No* temp = *raiz;
    *raiz = (*raiz)->next;
    int popped = temp->data;
    free(temp);
    return popped;
}

void decimal_binario(int numero) {
    struct No* binario = NULL;
    if (numero == 0) {
        push(&binario, 0);
    }

    while (numero > 0) {
        int resto = numero % 2;
        push(&binario, resto);
        numero = numero / 2;
    }
    printf("o número em binário é: ");
    while (!pilha_vazia(binario)) {
        printf("%d", pop(&binario));
    }
    printf("\n");
}
