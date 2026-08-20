#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	
	int a, b, c, d, maior, maior_temp1, maior_temp2;
	
	printf("informe os valores a serem comparados:");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	//conta
	maior_temp1 = (a+b+abs(a-b))/2;
	maior_temp2 = (maior_temp1+c+abs(maior_temp1-c))/2;
	maior = (maior_temp2+d+abs(maior_temp2-d))/2;
	
	printf("o maior entre [%d][%d][%d][%d] = %d", a,b,c, d, maior);
	
	
	return 0;
}
