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
	
	printf("\nseu ano de nascimento e: %d", anodenascimento);
	
 /*Leia uma velocidade em km/h (quilômetros por hora) e apresente convertida em m/s (metros por
segundo). A fórmula de conversão é M = K/36, sendo K a velocidade em km/h e M em m/s*/

printf("\nexercicio 2\n");
    float K, M;

    printf("\nDigite a velocidade em km/h: ");
    scanf("%f", &K);

    
    M = K / 3.6;

    printf("\nVelocidade em m/s: %.2f\n", M);

/*Faça um programa que leia um valor em reais e a cotação do dólar. Em seguida, imprima o valor
correspondente em dólares.*/

  printf("\nexercicio 3\n");
  
float real, resultado, dolar;

  printf("\ndigite o quanto voce quer converter:\n");
  scanf("%f", &real);

	dolar = 0.19;
  resultado = real * dolar; //valor do real no dia 19/08( 0,19 corresponde ao valor do real em dolares.)
  
  printf("\no resutado em dolar e:%f\n", resultado);
  
	
	return 0;
}
