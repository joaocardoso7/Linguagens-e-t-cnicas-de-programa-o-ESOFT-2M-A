#include <stdio.h>
#include <stdlib.h>
#define pi 3.141592



int main(int argc, char *argv[]) {
// calcula o ano que voce nasceu
printf("exercicio 1\n");	
	int idade, ano_atual, ano_nascimento;
	
	printf("digite sua idade: ");
	scanf("%d", &idade);
	
	printf("digite o ano atual :");
	scanf("%d", &ano_atual);
	
	ano_nascimento = ano_atual - idade;
	
	printf("O ano que voce nasceu e de : %d\n", ano_nascimento);

//velocidade em km/h (quilômetros por hora) e apresente convertida em m/s 
printf("exercicio 2\n");
	float km, ms, velocidade;
	printf("Digite a velocidade em km por hora: ");
	scanf("%f", &km);
	
	ms = km/3.6;
	velocidade = km/3.6;
	printf("A sua velocidade convertida e de : %f\n", velocidade);
	
/*Faça um programa que leia um valor em reais e a cotação do dólar. Em seguida, imprima o valor
correspondente em dólares.*/
printf("exercicio 3\n");
	float real, dollar, valor;
	
	printf("Digite o valor que deseja converter para dollar: ");
	scanf("%f", &real);
	
	valor = real * 5.16;
	dollar = valor;
	
	printf("O valor e de: %f\n", valor);

/* Leia um valor que represente uma temperatura em graus Celsius e apresente-a convertida em graus
Fahrenheit*/
printf("exercicio 4\n");
	float cel, fire, temperatura;
	
	printf("Digite a temperatura que deseja converter: ");
	scanf("%f", &cel);
	
	temperatura = (cel * (9.0/5.0)) + 32;
	fire = temperatura;
	
	printf("A temperatura e de: %f\n", temperatura);
	
	
//Leia um ângulo em graus e apresente-o convertido em radianos 
printf("exercicio 5\n");
	float graus, resultado;
	printf("Digite o valor do angulo em graus: ");
	scanf("%f", &graus);
	
	resultado = (graus * pi)/180;

	printf("O resultado em radiano e de: %f\n", resultado);
	
	
//Faça um programa que leia um número inteiro e retorne seu antecessor e seu sucessor
printf("exercicio 6\n");
	int n, antecessor, sucessor;
	printf("Digite um numero: ");
	scanf("%d", &n);
	
	sucessor = n + 1;
	antecessor = n - 1;
	
	printf("O sucessor e: %d\n", sucessor);
	printf("O antecessor e: %d\n", antecessor);

	
//Calcule e imprima a quantia recebida por cada um dos ganhadores.
printf("exercicio 7\n");
	float ganhador1, ganhador2, ganhador3, premio;
	printf("O premio e de  R$780.000\n");
	
	ganhador1 = 0.46 * 780.000;
	ganhador2 = 0.32 * 780.000;
	ganhador3 = 780.000-(ganhador1 + ganhador2);
	
	
	printf("O resultado do ganhador 1 e de: %f\n", ganhador1);
	printf("O resultado do ganhador 2 e de: %f\n", ganhador2);
	printf("O resultado do ganhador 3 e de: %f\n", ganhador3);
	
	/*(URI 1019) Leia um valor inteiro, que é o tempo de duração em segundos de um determinado evento
em uma fábrica, e informe-o expresso no formato horas:minutos:segundos.*/
    printf("exercicio 8\n");
    
    int tempo, horas, minutos, segundos;
    scanf("%d", &tempo);

     horas = tempo / 3600;
     minutos = (tempo % 3600) / 60;
     segundos = tempo % 60;

    printf("%d:%d:%d\n", horas, minutos, segundos);

    return 0;
}
    
    
    
	
