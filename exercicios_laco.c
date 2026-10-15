#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* ex1: Contagem de inicio ate fim com passo ajustavel */
void exercicio1(void) {
    int inicio, fim, passo; 

    printf("\n--- EXERCICIO 1 ---\n");
    printf("Digite o valor inicial: ");
    scanf("%d", &inicio);
    printf("Digite o valor final: ");
    scanf("%d", &fim);
    printf("Digite o passo da contagem: ");
    scanf("%d", &passo);

    if (passo == 0) {
        printf("Erro: O passo deve ser diferente de zero.\n");
        return;
    }

    int passoAtual = passo < 0 ? -passo : passo;
    int direcao = (inicio <= fim) ? 1 : -1;

    if (inicio != fim && ((inicio < fim && passo < 0) || (inicio > fim && passo > 0))) {
        printf("Ajustando o sinal do passo para manter a contagem correta.\n");
    }

    printf("Contando de %d a %d com passo %d:\n", inicio, fim, passoAtual);

    if (direcao > 0) {
        for (int i = inicio; i <= fim; i += passoAtual) {
            printf("%d ", i);
        }
    } else {
        for (int i = inicio; i >= fim; i -= passoAtual) {
            printf("%d ", i);
        }
    }

    printf("\n");
}

/* ex2: Soma dos n primeiros termos de [s = 1/2 + 1/4 + 1/8 + 1/16 + ...] */
void exercicio2(void) {
    int n;
    printf("\n--- EXERCICIO 2 ---\n");
    printf("Digite o numero de termos: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Erro: O numero de termos deve ser maior que zero.\n");
        return;
    }

    double soma = 0.0;
    double termo = 0.5; 

    for (int i = 1; i <= n; i++) {
        soma += termo;
        termo /= 2.0; 
    }

    printf("A soma dos %d primeiros termos e: %.10f\n", n, soma);
}

/* ex3: Exibicao do Triangulo de Pascal */
void exercicio3(void) {
    int linhas;
    printf("\n--- EXERCICIO 3 ---\n");
    printf("Digite o numero de linhas do Triangulo de Pascal: ");
    scanf("%d", &linhas);

    if (linhas <= 0) {
        printf("Erro: O numero de linhas deve ser maior que zero.\n");
        return;
    }

    for (int i = 0; i < linhas; i++) {
        int coef = 1;

        
        for (int espaco = 1; espaco <= linhas - i; espaco++) {
            printf("  ");
        }

        for (int j = 0; j <= i; j++) {
            printf("%4d", coef);
            coef = coef * (i - j) / (j + 1);
        }
        printf("\n");
    }
}

int main(void) {
    int op = 0;

    while (op != 4) {
        printf("\n========================\n");
        printf("Escolha uma opcao:\n");
        printf("1 - Exercicio 1 (Contagem)\n");
        printf("2 - Exercicio 2 (Serie 1/2^n)\n");
        printf("3 - Exercicio 3 (Triangulo de Pascal)\n");
        printf("4 - Sair\n");
        printf("========================\n");
        printf("Opcao: ");
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
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opcao invalida! Escolha entre 1 e 4.\n");
                break;
        }
    }

    return 0;
}
