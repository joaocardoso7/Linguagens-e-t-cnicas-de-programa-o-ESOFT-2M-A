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

    printf("\nDigite um numero inteiro:");
    scanf("%d", &n);

    int b64 = (n / 64) % 2; 
    int b32 = (n / 32) % 2; 
    int b16 = (n / 16) % 2; 
    int b8  = (n / 8)  % 2;
    int b4  = (n / 4)  % 2; 
    int b2  = (n / 2)  % 2; 
    int b1  = (n / 1)  % 2; 
    
   printf("Em binario: %d%d%d%d%d%d%d\n", b64, b32, b16, b8, b4, b2, b1);
   
   /*(URI 1009) Faça um programa que leia, o salário fixo e o valor total em vendas de um vendedor.
Sabendo que este vendedor ganha 15% de comissão sobre suas vendas efetuadas, mostre o total a
receber no final do mês, com duas casas decimais.*/
   
   float salario, comissao, totalvendido, totalareceber;
 
   
   printf("digite seu salario:");
   scanf("%f", &salario);
   
   printf("agora digite ")
   
  
   

    
	return 0;
}
