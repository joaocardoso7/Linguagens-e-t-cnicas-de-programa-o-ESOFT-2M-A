#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*ex1 Faça um programa que leia 100 números inteiros e depois os imprima na ordem inversa em que eles 
foram lidos, e ordenados do maior para o menor. */
void exercicio1() {
    int numeros[100];
    printf("Digite 100 numeros inteiros:\n");
    for (int i = 0; i < 100; i++) {
        scanf("%d", &numeros[i]);
    }

    printf("Numeros na ordem inversa:\n");
    for (int i = 99; i >= 0; i--) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    // Ordenar do maior para o menor
    for (int i = 0; i < 100 - 1; i++) {
        for (int j = 0; j < 100 - i - 1; j++) {
            if (numeros[j] < numeros[j + 1]) {
                int temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
            }
        }
    }

    printf("Numeros ordenados do maior para o menor:\n");
    for (int i = 0; i < 100; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");
}

/*Faça um programa que leia um valor do tipo double e depois o imprima na forma de notação científica 
O FORMATO PADRÃO É A × 10ⁿ, ONDE O NÚMERO A É MAIOR OU IGUAL A 1 E MENOR QUE 10 (1 ≤ A < 10), E O 
EXPOENTE N É UM NÚMERO INTEIRO. CONSIDEREM SOMENTE VALORES POSITIVOS. */
void exercicio2() {
    double valor;
    printf("Digite um valor positivo do tipo double: ");
    scanf("%lf", &valor);

    if (valor <= 0) {
        printf("Valor invalido. Por favor, digite um valor positivo.\n");
        return;
    }

    int expoente = 0;
    while (valor >= 10) {
        valor /= 10;
        expoente++;
    }
    while (valor < 1) {
        valor *= 10;
        expoente--;
    }

    printf("O valor em notacao cientifica e: %.6f x 10^%d\n", valor, expoente);
}


/*ex3 implemente um programa que leia um numero n e mostre na tela o seu valor em base binario(bits)*/
void exercicio3() {
    int n;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    printf("O valor de %d em binario e: ", n);
    while (n > 0) {
        printf("%d", n % 2);
        n /= 2;
    }
    printf("\n");
}

/*ex4 Faça um programa que leia 10 valores e apresente o maior dos 10 valores lidos seguido da 
mensagem “eh o maior formula: maiorab= (a+b+abs(a-b))/2 */
void exercicio4() {
    int valores[10];
    printf("Digite 10 valores inteiros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &valores[i]);
    }

    int maior = valores[0];
    for (int i = 1; i < 10; i++) {
        maior = (maior + valores[i] + abs(maior - valores[i])) / 2;
    }

    printf("%d eh o maior\n", maior);
}

/*ex5  Faça um programa que tenha um vetor de 100 inteiros e para cada item do vetor verifique sua paridade e 
sua primalidade.*/
void exercicio5() {
    int numeros[100];
    printf("Digite 100 numeros inteiros:\n");   
    for (int i = 0; i < 100; i++) {
        scanf("%d", &numeros[i]);
    }
    for (int i = 0; i < 100; i++) {
        if (numeros[i] % 2 == 0) {
            printf("%d eh par\n", numeros[i]);
        } else {
            printf("%d eh impar\n", numeros[i]);
        }
    }
}


int main(void) {
    int op;
    
    printf("Digite a opcao desejada (1 para exercicio 1, 2 para exercicio 2, 3 para exercicio 3, 4 para exercicio 4, 5 para exercicio 5): ");
    scanf("%d", &op);
    switch (op) {
        case 1:
            exercicio1();
            break;
        case 2:
            exercicio2();
            break;
        case 3:
            exercicio3();
            break;
        case 4:
            exercicio4();
            break;
        case 5:
            exercicio5();
            break;
        default:
            while (1) {
                printf("Opcao invalida. Digite novamente: ");
                scanf("%d", &op);
                if (op >= 1 && op <= 5) {
                    break;
                }
            }
            break;
    }


    return 0;
}
