#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a, b, c, r;
	
    printf("Entre com os valores a, b e c:");
    scanf("%d %d %d", &a, &b, &c);
    
    if (a>b){
    	r=a;
	}
	
	else{
		r=b;
	}
	
	if(c>r){
		r=c;
	}	
	
	printf("\no maior resultado e:%d", r);
    

//ler um numero e informar se é impar ou par
   int n;
   printf("\ndigite um numero:");
   scanf("%d", &n);
   
    if (n % 2 == 0){
    printf("\nPar");
}
   
    else{
    printf("\nimpar");
}
	return 0;
}
