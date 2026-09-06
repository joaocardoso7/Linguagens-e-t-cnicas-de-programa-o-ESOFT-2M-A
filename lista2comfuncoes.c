#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159

void exercicio1() {
    printf("\n--- Exercicio 1 ---\n");   
    int idade, ano_atual, ano_nascimento;
    
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    
    printf("Digite o ano atual: ");
    scanf("%d", &ano_atual);

    ano_nascimento = ano_atual - idade;
    
    printf("O ano aproximado de nascimento e: %d\n", ano_nascimento);
}

void exercicio2() {
    printf("\n--- Exercicio 2 ---\n");
    float km, ms;
    printf("Digite a velocidade em km/h: ");
    scanf("%f", &km);
    
    ms = km / 3.6f;
    printf("Velocidade convertida: %.2f m/s\n", ms);
}

void exercicio3() {
    printf("\n--- Exercicio 3 ---\n");
    float reais, cotacao, dolares;
    
    printf("Digite o valor em reais (R$): ");
    scanf("%f", &reais);
    
    printf("Digite a cotacao do dolar: ");
    scanf("%f", &cotacao);
    
    dolares = reais / cotacao;
    
    printf("Valor correspondente: US$ %.2f\n", dolares);
}

void exercicio4() {
    printf("\n--- Exercicio 4 ---\n");
    float cel, fahr;
    
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &cel);
    
    fahr = (cel * (9.0f / 5.0f)) + 32.0f;
    
    printf("Temperatura em Fahrenheit: %.2f F\n", fahr);
}   

void exercicio5() {
    printf("\n--- Exercicio 5 ---\n");
    float graus, radianos;
    printf("Digite o valor do angulo em graus: ");
    scanf("%f", &graus);
    
    radianos = (graus * PI) / 180.0f;

    printf("Resultado em radianos: %f rad\n", radianos);
}   

void exercicio6() {
    printf("\n--- Exercicio 6 ---\n");
    int n;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    
    printf("Sucessor: %d\n", n + 1);
    printf("Antecessor: %d\n", n - 1);
}

void exercicio7() {
    printf("\n--- Exercicio 7 ---\n");
    double premio_total = 780000.0;
    double ganhador1, ganhador2, ganhador3;
    
    ganhador1 = 0.46 * premio_total;
    ganhador2 = 0.32 * premio_total;
    ganhador3 = premio_total - (ganhador1 + ganhador2);
    
    printf("Premio total: R$ %.2f\n", premio_total);
    printf("Ganhador 1 (46%%): R$ %.2f\n", ganhador1);
    printf("Ganhador 2 (32%%): R$ %.2f\n", ganhador2);
    printf("Ganhador 3 (Restante): R$ %.2f\n", ganhador3);
}   

void exercicio8() {
    printf("\n--- Exercicio 8 ---\n");
    int tempo, horas, minutos, segundos;
    printf("Digite o tempo total em segundos: ");
    scanf("%d", &tempo);

    horas = tempo / 3600;
    minutos = (tempo % 3600) / 60;
    segundos = tempo % 60;

    printf("%02d:%02d:%02d\n", horas, minutos, segundos);
}

void exercicio9() {
    printf("\n--- Exercicio 9 ---\n");
    int tempo, velocidade;
    double distancia, litros;
    
    printf("Informe o tempo (horas) e a velocidade media (km/h): ");
    scanf("%d %d", &tempo, &velocidade);

    distancia = tempo * velocidade;
    litros = distancia / 12.0;

    printf("Distancia percorrida: %.3f km\n", distancia);
    printf("Combustivel gasto: %.3f litros\n", litros);
}

void exercicio10() {
    printf("\n--- Exercicio 10 ---\n");
    int a, b, c, d, maior1, maior2, maior;
    
    printf("Informe quatro inteiros: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    maior1 = (a + b + abs(a - b)) / 2;
    maior2 = (maior1 + c + abs(maior1 - c)) / 2;
    maior = (maior2 + d + abs(maior2 - d)) / 2;
    
    printf("O maior entre [%d, %d, %d, %d] e: %d\n", a, b, c, d, maior);
}

int main(void) {
    int op;
    printf("Escolha o exercicio a executar (1 a 10): ");
    if (scanf("%d", &op) != 1) {
        printf("Entrada invalida!\n");
        return 1;
    }

    switch(op) {
        case 1:  exercicio1();  break;
        case 2:  exercicio2();  break;   
        case 3:  exercicio3();  break;
        case 4:  exercicio4();  break;
        case 5:  exercicio5();  break;
        case 6:  exercicio6();  break;
        case 7:  exercicio7();  break;    
        case 8:  exercicio8();  break;
        case 9:  exercicio9();  break;
        case 10: exercicio10(); break;
        default: printf("Opcao invalida!\n"); break;
    }

    return 0;
}
