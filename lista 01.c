#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	//*Faça um programa que leia dois números inteiros e depois os imprima na ordem inversa em que eles foram lidos
    
    int primeiro, segundo, aux;
    
    printf("\ninsira o primeiro valor: ");
    scanf("%d", &primeiro);

    printf("\ninsira o segundo valor: ");
    scanf("%d", &segundo);

    aux = primeiro;
    primeiro = segundo;
    segundo = aux;

    printf("\nValores na ordem inversa:\n%d\n%d\n", primeiro, segundo); //ordem inversa

    
    //Faça um programa que leia um valor do tipo double e depois o imprima na forma de notação científica.
    
    double numero; 
    
    printf("\ninsira o valor do numero para converte-lo em notação cientifica:");
    scanf("%le", &numero);
    
    printf("\nO valor em notacao cientifica e: %e", numero);
    
    //Implemente um programa que leia um número n e mostre na tela o seu valor em base binária (bits).
    
   int n;
    int binario = 0;
    int posicao = 1;

    printf("\nDigite um numero inteiro: ");
    scanf("%d", &n);

    
    for (; n > 0; n = n / 2);
        int resto = n % 2; 
        
        binario = binario + (resto * posicao);
        posicao = posicao * 10; 
    

    printf("Em binario: %d\n", binario);
   
   
   /*(URI 1009) Faça um programa que leia, o salário fixo e o valor total em vendas de um vendedor.
Sabendo que este vendedor ganha 15% de comissão sobre suas vendas efetuadas, mostre o total a
receber no final do mês, com duas casas decimais.*/
   
   float salario
   float comissao
   
   printf("digite seu salario:");
   scanf("%f", &comissao);
    
	return 0;
}
