#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    // Ler dois inteiros e imprimir na ordem inversa
    int primeiro, segundo, aux;

    printf("\ninsira o primeiro valor: ");
    scanf("%d", &primeiro);

    printf("\ninsira o segundo valor: ");
    scanf("%d", &segundo);

    aux = primeiro;
    primeiro = segundo;
    segundo = aux;

    printf("\nValores na ordem inversa:\n%d\n%d\n", primeiro, segundo);


    // Ler double e imprimir em notacao cientifica
    double numero;

    printf("\ninsira o valor do numero para converte-lo em notacao cientifica: ");
    scanf("%lf", &numero); 

    printf("O valor em notacao cientifica e: %e\n", numero);


    // Imprimir numero em binario 
    int n;

    printf("\nDigite um numero inteiro: ");
    scanf("%d", &n);

    int b64 = (n / 64) % 2;
    int b32 = (n / 32) % 2;
    int b16 = (n / 16) % 2;
    int b8  = (n / 8)  % 2;
    int b4  = (n / 4)  % 2;
    int b2  = (n / 2)  % 2;
    int b1  = (n / 1)  % 2;

    printf("Em binario: %d%d%d%d%d%d%d\n", b64, b32, b16, b8, b4, b2, b1);


    // (URI 1009) Salario com comissao de 15%
    double salario, totalvendido, totalareceber;

    printf("\ndigite seu salario: ");
    scanf("%lf", &salario);

    printf("digite o total vendido: ");
    scanf("%lf", &totalvendido);

    totalareceber = salario + (totalvendido * 0.15);

    printf("TOTAL = R$ %.2lf\n", totalareceber);

    return 0;
}
