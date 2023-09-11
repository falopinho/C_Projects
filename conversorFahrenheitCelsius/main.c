#include <stdio.h>
#include <stdlib.h>

int main()
{
    float temperature=0, calculation=0;
    int option=0, again=0;

    do{
    printf("Qual a temperatura? "); scanf("%f", &temperature);

    printf("\nWhich one do you want convert? \n");
    printf("\n1 - Celsius to Fahrenheit\n");
    printf("2 - Fahrenheit to Celsius \n");
    printf("\nType here: "); scanf("%d", &option);


    switch(option){
        case 1:
            calculation = (temperature * 1.8) + 32;
            printf("\n%.2f Celsius in Fahrenheit is %.2f\n", temperature, calculation);
            break;
        case 2:
            calculation = (temperature - 32) / 1.8;
            printf("\n%.2f Fahrenheit in Celsius is %.2f\n", temperature, calculation);
            break;
        default:
            printf("NOT A VALID OPTION!");
            break;
    }
        printf("\nPress '1' to convert again\n"); scanf("%d", &option);
    }while(option == 1);

    return 0;
}
