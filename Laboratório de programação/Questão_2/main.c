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
      printf("\n\nMenu de op��es:\n");
      printf("1. Uni�o dos conjuntos\n");
      printf("2. Interse��o dos conjuntos\n");
      printf("3. Diferen�a dos conjuntos\n");
      printf("4. Sair\n");
      printf("Digite a op��o desejada: ");
      scanf("%d", &opcao);

      switch(opcao){
         case 1:
            printf("\nUni�o dos conjuntos: ");
            imprimirLista(uniaoListas(c1, c2));
            break;

         case 2:
            printf("\nInterse��o dos conjuntos: ");
            imprimirLista(intersecaoListas(c1, c2));
            break;

         case 3:
            printf("\nDiferen�a dos conjuntos: ");
            imprimirLista(diferencaListas(c1, c2));
            break;

         case 4:
            printf("\nSaindo do programa...");
            break;

         default:
            printf("\nOp��o inv�lida!");
      }
   }while(opcao != 4);

   return 0;
}
