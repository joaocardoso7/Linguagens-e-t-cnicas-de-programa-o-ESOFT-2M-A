#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//leia um valor par e calcule a raiz
int main (){
    int valor[10], i, cont;

    for (i=0; i<10; i++){
        scanf("%d", &valor[i]);
    }
    printf("acabou o for\n");
    printf("inicio do while\n");
    i=0;
    while (i<10){
        scanf("%d", &valor[i]);
        i++;
    }

    do{
        printf("%d", &valor[i]);
        i++;
    } while (i<10);
/*    
int valor;
printf("insira um valor par");
scanf("%d", &valor);

while (valor%2 == 1){
    printf("valor inserido impar, \n insira um novo valor");
    scanf("%d", &valor);
}

do {
    printf("valor inserido impar, \n insira um novo valor");
    scanf("%d", &valor);
} while (valor%2 == 1);

printf("a raiz de %d = %f,", valor, sqrt(valor));
*/
    return 0;
}
