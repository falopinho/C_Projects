#include <stdio.h>
#include <stdlib.h>

int main()
{
    int language, op = 0;

    do{
    printf("Select a language: \n");

    printf("\n\t1 - English \n\t2 - Portugues \n\t3 - Espanol \n\t4 - Francais \n"); scanf("%d", &language);

    switch(language) {
            case 1:
                printf("\nHello World! \n");
                break;
            case 2:
                printf("\nOla Mundo! \n");
                break;
            case 3:
                printf("\nHola Mundo! \n");
                break;
            case 4:
                printf("\nBonjour le monde! \n");
                break;
            default:
                printf("\nNot a valid option \n");
        }
        printf("\nPress '1' for continue: \n"); scanf("%d", &op);
        }while(op == 1);
    return 0;
}
