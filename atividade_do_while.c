#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*elabore um programa que peça ao usuario 10 numeros inteiros que sejam positivos e
ignore os negativos, e mostre na tela o resultado da soma e a media desses valores usando for e while e do while*/

int main() {
    int numeros[10];
    int soma = 0;
    int count = 0;
    int i = 0;

    printf("Digite 10 numeros inteiros positivos:\n");

    while (i < 10) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);

        do {
            if (numeros[i] >= 0) {
                soma += numeros[i];
                count++;
            } else {
                printf("numero negativo ignorado, por favor, digite um numero positivo.\n");
            }
        } while (0);
        i++;
    }

    double media = (double)soma / count;

    printf("Soma dos numeros positivos: %d\n", soma);
    printf("Media dos numeros positivos: %.2f\n", media);

    return 0;
}
