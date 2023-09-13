#include <stdio.h>
#include <stdlib.h>

int main()
{
    char text[256];
    int num=0;

    do{
    printf("Digite algo: "); scanf("%s", &text);
    printf("Aqui esta oque voce digitou... %s \n\n", text);

    printf("Digite '1' para digitar outra coisa.\n"); scanf("%d", &num);
    }while(num==1);
    return 0;
}
