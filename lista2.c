#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	//Faça um programa que calcule o ano de nascimento de uma pessoa a partir de sua idade e do ano atual
	printf("exercicio 1\n");
	int idade, anoatual, anodenascimento;
	
	printf("digite sua idade:\n");
	scanf("%d", &idade);
	
	printf("\nagora digite o ano em que estamos:");
	scanf("%d", &anoatual);
	
	anodenascimento = anoatual - idade;
	
	printf("seu ano de nascimento e: %d", anodenascimento);
	
	
	return 0;
}
