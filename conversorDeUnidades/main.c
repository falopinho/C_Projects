#include <stdio.h>
#include <stdlib.h>

int main()
{
    float metro;

    printf("=-=-=-=-=-=-=-==-=-=-=-=-=-=-==-=-=-=-=-=-=-==-=-=-=-=-=-=-= \n");
    printf("Escolha uma largura em metro(s): \n");
    scanf("%f", &metro);

    printf("=-=-=-=-=-=-=-==-=-=-=-=-=-=-==-=-=-=-=-=-=-==-=-=-=-=-=-=-= \n");
    printf("%.2f metro(s), correspondem a %.2f quilometro(s)\n", metro, metro/1000);
    printf("%.2f metro(s), correspondem a %.2f hectometro(s)\n", metro, metro/100);
    printf("%.2f metro(s), correspondem a %.2f decametro(S)\n", metro, metro/10);

    printf("=-=-=-=-=-=-=-==-=-=-=-=-=-=-==-=-=-=-=-=-=-==-=-=-=-=-=-=-= \n");
    printf("%.2f metro(s), correspondem a %.2f decimetro(s)\n", metro, metro*10);
    printf("%.2f metro(s), correspondem a %.2f centimetro(s)\n", metro, metro*100);
    printf("%.2f metro(s), correspondem a %.2f milimetro(s)\n", metro, metro *1000);
    printf("=-=-=-=-=-=-=-==-=-=-=-=-=-=-==-=-=-=-=-=-=-==-=-=-=-=-=-=-= \n");

    return 0;
}
