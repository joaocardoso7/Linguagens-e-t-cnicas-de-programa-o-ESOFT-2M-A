#include <stdio.h>
#include <stdlib.h>
#define pi 3.141592



int main(int argc, char *argv[]) {
	
	float raio, area;
	float basem, basemn, altura, areatrapezio;
	
	printf("insira o raio do circulo:");
	scanf("%f", &raio);
	
	area = pi*(raio*raio);
	
	printf("\na area do circulo de %f = %f,", raio, area);
	
	printf("\nagora a do trapezio");
	
	printf("\ninsira a base maior do trapezio:");
	scanf("%f", &basem );
	
	printf("\nagora insira a base menor do trapezio:");
	scanf("%f", &basemn);
	
    printf("\ninsira a altura do trapezio:");
    scanf("%f", &altura);
    
	areatrapezio = ((basem+basemn) *altura) /2;
    
    printf("\nA area do trapezio de basemn = %.1f, basem = %.1f e altura = %.1f e igual a %.1f", basemn, basem, altura, areatrapezio);	
    
	 
	return 0;
}
