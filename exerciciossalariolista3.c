//------------LISTA DE EXERCICIOS 3------------

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//exercicio 7
//calculo do inss
float calc_inss(float salario) {
    float inss;
    if (salario <= 1412.00) {
        inss = salario * 0.075;
    } else if (salario <= 2666.68) {
        inss = salario * 0.09;
    } else if (salario <= 4000.05) {
        inss = salario * 0.12;
    } else if (salario <= 7087.22) {
        inss = salario * 0.14;
    } else {
        inss = 7087.22 * 0.14; 
    }
    return inss;
}
//calculo do imposto de renda
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
    float valorHora, horasMes;
    float salarioBruto, inss, base_ir, ir, salarioLiquido;

    // Entrada de dados
    printf("Digite o valor da hora trabalhada: ");
    scanf("%f", &valorHora);

    printf("Digite a quantidade de horas no mes: ");
    scanf("%f", &horasMes);

    // processamento
    salarioBruto = valorHora * horasMes;
    inss = calc_inss(salarioBruto);
    base_ir = salarioBruto - inss;
    ir = calc_ir(base_ir);
    salarioLiquido = salarioBruto - inss - ir;

    //Contra-cheque
    printf("\n===================================================\n");
    printf("   RECIBO DE PAGAMENTO DE SALÁRIO (CONTRA-CHEQUE)   \n");
    printf("===================================================\n");
    printf(" Salário Bruto (Horas x Valor):  R$ %8.2f\n", salarioBruto);
    printf(" (-) Desconto INSS:              R$ %8.2f\n", inss);
    printf(" (-) Desconto IRPF:              R$ %8.2f\n", ir);
    printf("---------------------------------------------------\n");
    printf(" LÍQUIDO A RECEBER:              R$ %8.2f\n", salarioLiquido);
    printf("===================================================\n");

    return 0;
}
