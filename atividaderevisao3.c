#include <stdio.h>
#include <stdlib.h>
int main() {
    
float a, b, c;
printf("digite suas notas separadas por espaco: ");
scanf("%f %f %f", &a, &b, &c);

float media = (a + b + c) / 3;
float falta = 7 - media;
 if (media >= 7) {
    printf("Aprovado com media: %.2f\n", media);
    } else if (media >= 5) {
    printf("Recuperacao com media e falta: %.2f %.2f\n", media, falta);
    } else {
    printf("Reprovado com media: %.2f\n", media);
    return 0;
}
}
