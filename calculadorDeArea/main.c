#include <stdio.h>
#include <stdlib.h>

int main()
{
    float largura, comprimento, area;

    printf("Qual a largura? \n"); scanf("%f", &largura);
    printf("Qual o comprimento? \n"); scanf("%f", &comprimento);

    area = largura*comprimento;

    printf("%.2f de largura e %.2f de comprimento, tem uma AREA = %.2f m2 \n", largura, comprimento, area);

    return 0;

}
