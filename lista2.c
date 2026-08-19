#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	//Faça um programa que calcule o ano de nascimento de uma pessoa a partir de sua idade e do ano atual
	printf("exercicio 1\n");
	int idade, anoatual, anodenascimento;
	
	printf("digite sua idade:\n");
	scanf("%d", &idade);
	
	printf("\nagora digite o ano em que estamos:\n");
	scanf("%d", &anoatual);
	
	anodenascimento = anoatual - idade;
	
	printf("seu ano de nascimento e: %d", anodenascimento);
	
 /*Leia uma velocidade em km/h (quilômetros por hora) e apresente convertida em m/s (metros por
segundo). A fórmula de conversão é M = K/36, sendo K a velocidade em km/h e M em m/s*/

printf("exercicio 2");
    float K, M;

    printf("Digite a velocidade em km/h: ");
    scanf("%f", &K);

    
    M = K / 3.6;

    printf("Velocidade em m/s: %.2f\n", M);


	
	return 0;
}
