#include <time.h>
#include "pessoa.h"

int main() {
    srand(time(NULL));

    Pessoa pessoas[50];
    int n = 0;
    char nome[50];

    printf("Digite os nomes das pessoas (digite 'fim' para terminar):\n");
    while (1) {
        scanf("%s", nome);
        if (strcmp(nome, "fim") == 0) {
            break;
        }
        strcpy(pessoas[n++].nome, nome);
    }
    formarPares(pessoas, n);

    return 0;
}
