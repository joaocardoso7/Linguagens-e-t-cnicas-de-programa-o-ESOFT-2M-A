#include <stdio.h>
#include <stdlib.h>

int comparaMaior(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int comparaMenor(int a, int b) {
    if (a < b)
        return a;
    else
        return b;
}

/* Faça um programa que leia 10 números,
   mostre o maior entre os 5 primeiros
   e o menor entre os 5 restantes */

int main() {
    int valor[10];
    int i, maior, menor;

    printf("Vamos ler valores:\n");

    for (i = 0; i < 10; i++) {
        scanf("%d", &valor[i]);
    }

    // maior
    maior = valor[0];

    for (i = 1; i < 5; i++) {
        maior = comparaMaior(maior, valor[i]);
    }

    printf("O maior entre os 5 primeiros e: %d\n", maior);

    // menor
    menor = valor[5];

    for (i = 6; i < 10; i++) {
        menor = comparaMenor(menor, valor[i]);
    }

    printf("O menor entre os 5 ultimos e: %d\n", menor);

    return 0;
}
