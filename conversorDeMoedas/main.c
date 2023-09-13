#include <stdio.h>

int main() {
   float valorReal, taxaCambio, valorDolar, valorEuro;
   int opcao;

   printf("Bem-vindo ao Conversor de Moedas!\n");

   do {
      printf("Selecione uma opcao:\n");
      printf("1 - Real para Dolar\n");
      printf("2 - Real para Euro\n");

      printf("3 - Dolar para Real\n");
      printf("4 - Dolar para Euro\n");

      printf("5 - Euro para Real\n");
      printf("6 - Euro para Dolar\n");

      printf("7 - Sair\n"); scanf("%d", &opcao);

      switch(opcao){
          case 1: {
            printf("Digite o valor em Real: "); scanf("%f", &valorReal);

            taxaCambio = 4.92;

            valorDolar = valorReal / taxaCambio;

            printf("Valor em Dolar: %.2f\n\n", valorDolar);
            break;
            }

          case 2: {
            printf("Digite o valor em Real: "); scanf("%f", &valorReal);

            taxaCambio = 5.28;

            valorEuro = valorReal / taxaCambio;

            printf("Valor em Euro: %.2f\n\n", valorEuro);
            break;
          }

          case 3: {
            printf("Digite o valor em Dolar: "); scanf("%f", &valorDolar);

            taxaCambio = 4.92;

            valorReal = valorDolar * taxaCambio;

            printf("Valor em Real: %.2f\n\n", valorReal);
            break;
          }

          case 4: {
            printf("Digite o valor em Dolar: "); scanf("%f", &valorDolar);

            taxaCambio = 0.93;

            valorEuro = valorDolar / taxaCambio;

            printf("Valor em Euro: %.2f\n\n", valorEuro);
            break;
          }

          case 5: {
              printf("Digite o valor em Euro: "); scanf("%f", &valorEuro);

              taxaCambio = 5.28;

              valorReal = valorEuro * taxaCambio;

              printf("Valor em Real: %.2f\n\n", valorReal);
              break;
          }

          case 6: {
              printf("Digite o valor em Euro: "); scanf("%f", &valorEuro);

              taxaCambio = 0.93;

              valorDolar = valorEuro * taxaCambio;

              printf("Valor em Dolar: %.2f\n\n", valorDolar);
              break;
          }
          default: {
            printf("Opcao invalida.\n");
            break;
          }
      }
        printf("Digite '1' para continuar. \n"); scanf("%d", &opcao);
    }while(opcao == 1);

    return 0;
}
