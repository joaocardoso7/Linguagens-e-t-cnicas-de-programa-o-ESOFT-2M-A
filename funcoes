#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void exercicio2() {
    float reais, cotacao, dolares;

    printf("Digite o valor em reais: ");
    scanf("%f", &reais);

    printf("Digite a cotacao do dolar: ");
    scanf("%f", &cotacao);

    dolares = reais / cotacao;

    printf("O valor correspondente em dolares e: %.2f\n", dolares);
}

void exercicio3() {
    float celsius, fahrenheit;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    printf("A temperatura em graus Fahrenheit e: %.2f\n", fahrenheit);
}

void exercicio8() {
    int tempo, horas, minutos, segundos;

    printf("Digite o tempo de duracao em segundos: ");
    scanf("%d", &tempo);

    horas = tempo / 3600;
    minutos = (tempo % 3600) / 60;
    segundos = tempo % 60;

    printf("O tempo de duracao e: %02d:%02d:%02d\n", horas, minutos, segundos);
}

int main(int argc, char *argv[]) {
    int op;
    printf("Exercicios de fixacao: insira qual exercicio deseja resolver (2, 3 ou 8):\n");
    scanf("%d", &op);

    switch(op) {
        case 2:
            exercicio2();
            break;
            
        case 3:
            exercicio3();
            break;
            
        case 8:
            exercicio8();
            break;

        default:
            printf("Opcao invalida!\n");
            break;
    }

    return 0;
}
