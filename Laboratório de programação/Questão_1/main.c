#include <locale.h>
#include "pilha.h"

int main() {
    setlocale(LC_ALL, "portuguese");
    int numero_decimal;
    printf("Digite um número decimal: ");
    scanf("%d", &numero_decimal);

    while (numero_decimal < 0) {
        printf("Por favor, insira um número decimal que não seja negativo.\n");
        scanf("%d", &numero_decimal);
    }

    decimal_binario(numero_decimal);
    return 0;
}
