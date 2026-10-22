#include <stdio.h>
#include <stdlib.h>
/*
faça um programa que leia uma palavra e verifique se ela é um palíndromo

entrada: abba
saida: abba é um palíndromo
*/

int main() {
    int palindromo; 
    char palavra[100];
    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    printf("Palavra digitada: %s\n", palavra);
    for (int i = 0; palavra[i] != '\0'; i++) {
        printf("%c ", palavra[i]);
    }
    printf("\n");

    int tamanho = 0;
    while (palavra[tamanho] != '\0') {
        tamanho++;
    }

    palindromo = 1;
    for (int i = 0; i < tamanho / 2; i++) {
        if (palavra[i] != palavra[tamanho - 1 - i]) {
            palindromo = 0;
            break;
        }
    }

    if (palindromo) {
        printf("%s e um palindromo\n", palavra);
    } else {
        printf("%s nao e um palindromo\n", palavra);
    }
    return 0;
}
