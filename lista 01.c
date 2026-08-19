#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.141592653589793

int main(int argc, char *argv[]) {

    // Ler dois inteiros e imprimir na ordem inversa
    printf("\nEXERCICIO 1\n");
    int primeiro, segundo, aux;

    printf("Insira o primeiro valor: ");
    scanf("%d", &primeiro);

    printf("Insira o segundo valor: ");
    scanf("%d", &segundo);

    aux = primeiro;
    primeiro = segundo;
    segundo = aux;

    printf("\nValores na ordem inversa:\n%d\n%d\n", primeiro, segundo);


    // EXERCICIO 2: Ler double e imprimir em notacao cientifica
    printf("\nEXERCICIO 2\n");
    double numero;

    printf("Insira o valor para converter em notacao cientifica: ");
    scanf("%lf", &numero); 

    printf("O valor em notacao cientifica e: %e\n", numero);


    //Imprimir numero em binario (7 bits)
    printf("\nEXERCICIO 3\n");
    int n;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    int b64 = (n / 64) % 2;
    int b32 = (n / 32) % 2;
    int b16 = (n / 16) % 2;
    int b8  = (n / 8)  % 2;
    int b4  = (n / 4)  % 2;
    int b2  = (n / 2)  % 2;
    int b1  = (n / 1)  % 2;

    printf("Em binario: %d%d%d%d%d%d%d\n", b64, b32, b16, b8, b4, b2, b1);


    //  Salario com comissao de 15% 
    printf("\nEXERCICIO 4\n");
    double salario, totalvendido, totalareceber;

    printf("Digite seu salario fixo: ");
    scanf("%lf", &salario);

    printf("Digite o total vendido: ");
    scanf("%lf", &totalvendido);

    totalareceber = salario + (totalvendido * 0.15);

    printf("TOTAL = R$ %.2lf\n", totalareceber);


    //  Soma, media e produtorio de 4 valores
    printf("\nEXERCICIO 5\n");
    float valor1, valor2, valor3, valor4, soma, media, produtorio;
    
    printf("Digite o valor (1/4): ");
    scanf("%f", &valor1);
    
    printf("Digite o valor (2/4): ");
    scanf("%f", &valor2);
    
    printf("Digite o valor (3/4): ");
    scanf("%f", &valor3); 
    
    printf("Digite o valor (4/4): ");
    scanf("%f", &valor4);
    
    soma = valor1 + valor2 + valor3 + valor4;
    media = soma / 4.0f;
    produtorio = valor1 * valor2 * valor3 * valor4;
    
    printf("\nSoma: %.2f\n", soma);
    printf("Media: %.2f\n", media);
    printf("Produtorio: %.2f\n", produtorio);


    // Converter idade em dias para anos, meses e dias
    printf("\nEXERCICIO 6\n");
    int idade_dias, anos, meses, dias, resto;

    printf("Digite sua idade em dias: ");
    scanf("%d", &idade_dias);

    anos = idade_dias / 365;
    resto = idade_dias % 365;

    meses = resto / 30;
    dias = resto % 30;

    printf("%d ano(s), %d mes(es) e %d dia(s)\n", anos, meses, dias);


    // Volume da esfera
    printf("\nEXERCICIO 7\n");
    double raio, volume;

    printf("Digite o raio da esfera: ");
    scanf("%lf", &raio);

    volume = (4.0 / 3.0) * PI * pow(raio, 3);

    printf("O volume da esfera e: %.2lf m^3\n", volume);


    // Distancia euclidiana entre dois pontos
    printf("\nEXERCICIO 8\n");
    float x1, x2, y1, y2, distancia;

    printf("Digite os valores de x1 e y1 (separados por espaco): ");
    scanf("%f %f", &x1, &y1);

    printf("Digite os valores de x2 e y2 (separados por espaco): ");
    scanf("%f %f", &x2, &y2);

    distancia = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    printf("A distancia entre os pontos e: %.2f\n", distancia);

    return 0;
}
