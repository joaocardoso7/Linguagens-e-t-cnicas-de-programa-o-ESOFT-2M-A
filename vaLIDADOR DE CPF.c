#include <stdio.h>
#include <stdlib.h>

int multdigito(int dig, int valor) {
    return dig * valor;
}

int main() {
    
    int d0, d1, d2, d3, d4, d5, d6, d7, d8, d9, dgv;
    int soma, resto, restoII;

    printf("Digite o seu CPF: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", 
          &d0, &d1, &d2, &d3, &d4, &d5, &d6, &d7, &d8, &d9, &dgv);

    // --- 1º DIGITO ---
    soma = multdigito(d0, 10) + multdigito(d1, 9) + multdigito(d2, 8) 
         + multdigito(d3, 7)  + multdigito(d4, 6) + multdigito(d5, 5) 
         + multdigito(d6, 4)  + multdigito(d7, 3) + multdigito(d8, 2);

    soma *= 10;            
    resto = soma % 11;     
    if (resto == 10) {     
        resto = 0;
    }
printf("resto: %d\n", resto);
    
    soma = multdigito(d0, 11) + multdigito(d1, 10) + multdigito(d2, 9) 
         + multdigito(d3, 8)  + multdigito(d4, 7)  + multdigito(d5, 6) 
         + multdigito(d6, 5)  + multdigito(d7, 4)  + multdigito(d8, 3) 
         + multdigito(resto, 2); 

    soma *= 10;
    restoII = soma % 11;
    if (restoII == 10) {
        restoII = 0;
    }
printf("restoII: %d\n", restoII);
    
    if (resto == d9 && restoII == dgv) {
        printf("\nValido\n");
    } else {
        printf("\nInvalido\n");
    }

    return 0;
}
