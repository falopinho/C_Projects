#include <stdio.h>
#include <stdlib.h>

int main()
{
    int multiplicando, multiplicador, produto;

    for(multiplicando = 1; multiplicando <= 10; multiplicando++){
        for(multiplicador = 1; multiplicador <=10; multiplicador++){
            produto = multiplicando *  multiplicador;

            printf("%d X %d = %d \n", multiplicando, multiplicador, produto);
        }
    printf("\n");
    }
    return 0;
}
