//------------LISTA DE EXERCICIOS 3------------

#include <stdio.h>
#include <stdlib.h>

//exercicio 7
float calc_inss(float salario) {
    float inss;
    if (salario <=1412.00) {
        inss = salario * 0.075;
    } else if (salario <= 2666.68) {
        inss = salario * 0.09;
    } else if (salario <= 4000.05) {
        inss = salario * 0.12;
    } else if (salario <= 7087.22) {
        inss = salario * 0.14;
    } else {
        inss = 7087.22  * 0.14; 
    }
    return inss;
}

float calc_ir(float salario) {
    float ir;
    if (salario <= 2259.20) {
        ir = 0;
    } else if (salario <= 2826.65) {
        ir = salario * 0.075 - 169.44;
    } else if (salario <= 3751.05) {
        ir = salario * 0.15 - 381.44;
    } else if (salario <= 4664.68) {
        ir = salario * 0.225 - 662.77;
    } else {
        ir = salario * 0.275 - 896.00;
    }
    return ir;
}

int main() {
    
float salario; 
scanf("%f", &salario);
float inss = calc_inss(salario);
float base_ir = salario - inss;
float ir = calc_ir(base_ir);
printf("%.2f\n", salario);
printf("%.2f\n", inss);
printf("%.2f\n", base_ir);
printf("%.2f\n", ir);
    return 0;
}
