#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x=0, y=0, z=0;
    int op=0;

    printf("Selecione o primeiro numero: \n"); scanf("%f", &x);
    printf("Selecione o segundo numero: \n"); scanf("%f", &y);

    printf("Selecione o operador: \n");
    printf("1 - Adicao \n2 - subtracao \n3 - multiplicacao\n4 - divisao \n"); scanf("%d", &op);

    switch (op){
        case 1:
            z = x + y;
            printf("Resultado: %.2f", z);
            break;
        case 2:
            z = x - y;
            printf("Resultado: %.2f", z);
            break;
        case 3:
            z = x * y;
            printf("Resultado: %.2f", z);
            break;
        case 4:
            if (y != 0) {
            z = x / y;
            printf("Resultado: %.2f\n", z);
         } else {
            printf("Divisao por zero nao e permitida.\n");
         }
        default:
            printf("Nao e uma opcao valida!");
    }
    return 0;
}
