#include <stdio.h>
#include <stdlib.h>


void convertercelcius(){
float celcius, fahrenheit;
printf("digite a temperatura em Celsius: ");
scanf("%f", &celcius);

fahrenheit = (celcius * 9 / 5) + 32;
printf("A temperatura em Fahrenheit e: %.2f\n", fahrenheit);    


}

void converterfahrenheit(){
float celcius, fahrenheit;
printf("digite a temperatura em Fahrenheit: ");
scanf("%f", &fahrenheit);

celcius = (fahrenheit - 32) * 5/9;
printf("A temperatura em Celsius e: %.2f\n", celcius);    


}

int main(void) {
    int op;
    printf("Escolha uma opcao para converter a temperatura:\n");
    printf("1. Celsius para Fahrenheit\n");
    printf("2. Fahrenheit para Celsius\n");
    if (scanf("%d", &op) != 1) {
        printf("Entrada invalida!\n");
        return 1;
    }

    switch(op) {
        case 1:
            convertercelcius();
            break;
        case 2:
            converterfahrenheit();
            break;
        default:
            printf("Opcao invalida!\n");
            return 1;
    }

    return 0;
}
