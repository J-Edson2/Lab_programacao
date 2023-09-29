#include <locale.h>
#include "conjunto.h"

int main() {
   setlocale(LC_ALL,"portuguese");
   //para inserir novos elementos ou mudar basta substituir abaixo nos conjuntos c1 e c2
   No *c1 = NULL;
   c1 = inserirNo(c1, 40);
   c1 = inserirNo(c1, 20);
   c1 = inserirNo(c1, 5);

   No *c2 = NULL;
   c2 = inserirNo(c2, 10);
   c2 = inserirNo(c2, 50);
   c2 = inserirNo(c2, 12);

   int opcao;

   do{
      printf("\n\nMenu de opções:\n");
      printf("1. União dos conjuntos\n");
      printf("2. Interseção dos conjuntos\n");
      printf("3. Diferença dos conjuntos\n");
      printf("4. Sair\n");
      printf("Digite a opção desejada: ");
      scanf("%d", &opcao);

      switch(opcao){
         case 1:
            printf("\nUnião dos conjuntos: ");
            imprimirLista(uniaoListas(c1, c2));
            break;

         case 2:
            printf("\nInterseção dos conjuntos: ");
            imprimirLista(intersecaoListas(c1, c2));
            break;

         case 3:
            printf("\nDiferença dos conjuntos: ");
            imprimirLista(diferencaListas(c1, c2));
            break;

         case 4:
            printf("\nSaindo do programa...");
            break;

         default:
            printf("\nOpção inválida!");
      }
   }while(opcao != 4);

   return 0;
}
