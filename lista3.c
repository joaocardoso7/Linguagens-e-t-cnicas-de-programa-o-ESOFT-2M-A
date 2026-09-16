#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159265

int multDigito(int dig, int valor)
{
    return dig * valor;
}

float calcINSS (float sal_bruto) { // 7. "Faça uma função que calcule o valor do desconto do INSS dependendo do salario."
    if (sal_bruto <= 1412.00) {
        return sal_bruto * 0.075;
    } else if (sal_bruto >= 1412.01 && sal_bruto <= 2666.68) {
        return sal_bruto * 0.09;
    } else if (sal_bruto >= 2666.69 && sal_bruto <= 4000.03) {
        return sal_bruto * 0.12;
    } else {
        return sal_bruto * 0.14;
    }
}

float calcIRPF(float sal_base) {
    if (sal_base <= 2259.20) {
        return 0;
    } else if (sal_base >= 2259.21 && sal_base <= 2826.65) {
        return (sal_base * 0.075) - 169.44;
    } else if (sal_base >= 2826.66 && sal_base <= 3751.05) {
        return (sal_base * 0.15) - 381.44;
    } else if (sal_base >= 3751.06 && sal_base <= 4664.68) {
        return (sal_base * 0.225) - 662.77;
    } else {
        return (sal_base * 0.275) - 896.00;
    }  
}

void exec1()
{
    // 1. "Faça um programa que valide um CPF."
    int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, num11, soma, resto1, resto2;

    printf("Insira um cpf para validação: ");
    scanf("%1d%1d%1d.%1d%1d%1d.%1d%1d%1d-%1d%1d", &num1, &num2, &num3, &num4, &num5, &num6, &num7, &num8, &num9, &num10, &num11);
    soma = multDigito(num1, 10) + multDigito(num2, 9) + multDigito(num3, 8) + multDigito(num4, 7) + multDigito(num5, 6) + multDigito(num6, 5) + multDigito(num7, 4) + multDigito(num8, 3) + multDigito(num9, 2);
    soma *= 10;
    resto1 = soma % 11;
    if (resto1 == 10)
        resto1 = 0;

    soma = multDigito(num1, 11) + multDigito(num2, 10) + multDigito(num3, 9) + multDigito(num4, 8) + multDigito(num5, 7) + multDigito(num6, 6) + multDigito(num7, 5) + multDigito(num8, 4) + multDigito(num9, 3) + multDigito(num10, 2);
    soma *= 10;
    resto2 = soma % 11;
    if (resto2 == 10)
        resto2 = 0;

    if (resto1 == num10 && resto2 == num11)
    {
        printf("O CPF com final: %1d%1d, eh valido", num10, num11);
    }
    else
    {
        printf("O CPF com final: %1d%1d, eh invalido", num10, num11);
    }
}

void exec2()
{
    // 2. "Faça um programa que identifique a grandeza, e converta de C para F e vice versa"
    int unidade;
    float c, f;

    printf("Qual unidade quer utilizar (1 para C/2 para F): ");
    scanf(" %d", &unidade);

    if (unidade == 1)
    {
        printf("Digite o número em graus Celsius a ser convertido: ");
        scanf("%f", &c);
        f = (c * 9 / 5) + 32;
        printf("Com %.1f graus Celsius, se tem %.1f graus Fahrenheit.", c, f);
    }
    else if (unidade == 2)
    {
        printf("Digite o número em graus Fahrenheit a ser convertido: ");
        scanf("%f", &f);
        c = (f - 32) * 5 / 9;
        printf("Com %.1f graus Fahrenheit, se tem %.1f graus Celsius.", f, c);
    }
}

void exec3() {
    // 3. "Faça um programa que receba o nome de um aluno, e 3 notas dele, apos isso faça a media dele, e mostre o status aprovado, exame ou reprovado, se o status for exame diga quanto falta para ele ser aprovado."
    float nota1, nota2, nota3, media, faltando;
    char nome[30];
    printf("Digite o nome do aluno: ");
    scanf("%s", nome);
    printf("Insira as notas do aluno: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    if (media >= 7 && media <= 10) {
        printf("\033[34mO aluno esta APROVADO com media de %.1f\033[0m", media);
    } else if (media >= 4 && media < 7) {
        faltando = 7 - media;
        printf("\033[33mO aluno esta em EXAME com media de %.1f, e faltam %.1f pontos para a aprovacao\033[0m", media, faltando);
    } else {
        printf("\033[31mO aluno esta REPROVADO com media de %.1f\033[0m", media);
    }
}

void exec5() {
    // 5. "Terminal Infinity Cash - simulador de saque com menor quantidade de notas."
    int valor, qtd100, qtd50, qtd10, qtd5, qtd2, qtd1;

    printf("Digite o valor do saque: ");
    scanf("%d", &valor);

    qtd100 = valor / 100;
    valor = valor % 100;

    qtd50 = valor / 50;
    valor = valor % 50;

    qtd10 = valor / 10;
    valor = valor % 10;

    qtd5 = valor / 5;
    valor = valor % 5;

    qtd2 = valor / 2;
    valor = valor % 2;

    qtd1 = valor / 1;
    valor = valor % 1;

    printf("\n===================================================\n");
    printf("        RESUMO DA ENTREGA DE CEDULAS - CAIXA        \n");
    printf("===================================================\n");
    printf(" Notas de R$100: %d\n", qtd100);
    printf(" Notas de R$50:  %d\n", qtd50);
    printf(" Notas de R$10:  %d\n", qtd10);
    printf(" Notas de R$5:   %d\n", qtd5);
    printf(" Notas de R$2:   %d\n", qtd2);
    printf(" Notas de R$1:   %d\n", qtd1);
    printf("===================================================\n");
}

void simulaPasso(float x, float y, float vx, float vy, float tempo, float dt, float g, float k) {
    // condicao de parada: quando o projetil "toca o chao"
    if (y <= 0 && tempo > 0) {
        printf("Alcance maximo: %.2f metros\n", x);
        printf("Tempo de voo: %.2f segundos\n", tempo);
        return;
    }

    // calcula o atrito nesse instante
    float atrito_x = -k * vx;
    float atrito_y = -k * vy;

    // atualiza velocidade e posicao para o proximo instante
    float novo_vx = vx + atrito_x * dt;
    float novo_vy = vy + (atrito_y - g) * dt;
    float novo_x = x + novo_vx * dt;
    float novo_y = y + novo_vy * dt;
    float novo_tempo = tempo + dt;

    // chama a si mesma com o novo estado (isso substitui o loop)
    simulaPasso(novo_x, novo_y, novo_vx, novo_vy, novo_tempo, dt, g, k);
}

void exec6() {
    // 6. "Operacao ENIAC - Trajetoria com resistencia do ar."
    float v0, graus, rad;
    float g = 9.8, k = 0.5;
    float dt = 0.01;
    float vx, vy;

    printf("Digite a velocidade inicial (v0): ");
    scanf("%f", &v0);
    printf("Digite o angulo em graus: ");
    scanf("%f", &graus);

    rad = graus * (PI / 180);

    vx = v0 * cos(rad);
    vy = v0 * sin(rad);

    simulaPasso(0, 0, vx, vy, 0, dt, g, k); // comeca em x=0, y=0, tempo=0
}

void exec9() {
    float h_trabalhada, h_mensal, sal_bruto, sal_base, sal_liquido, desconto_INSS, desconto_IRPF;

    printf("Digite o valor da sua hora trabalhada: R$");
    scanf("%f", &h_trabalhada);
    printf("Digite quantas horas trabalhou no mes: ");
    scanf("%f", &h_mensal);

    sal_bruto = h_trabalhada * h_mensal;

    desconto_INSS = calcINSS(sal_bruto);
    sal_base = sal_bruto - desconto_INSS;
    desconto_IRPF = calcIRPF(sal_base);
    sal_liquido = (sal_bruto - desconto_INSS) - desconto_IRPF;

    printf("Seu salario liquido e de: R$%.2f", sal_liquido);
}
int main(int argc, char *argv[])
{
    int opcao;
    float salario, desconto, salario_base, imposto;

    printf("Qual exercicio quer resolver: |1|2|3|5|6|7|8|9|\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        exec1();
        break;
    case 2:
        exec2();
        break;
     case 3:
        exec3();
        break;
     case 5:
        exec5();
        break;
     case 6:
        exec6();
        break;
     case 7:
        printf("Digite seu salario, para calcularmos seu desconto do INSS: ");
        scanf("%f", &salario);
        desconto = calcINSS(salario);
        printf("Com seu salario de R$%.2f, voce tem um desconto de: R$%.2f", salario, desconto);
        break;
     case 8:
        printf("Digite seu salario base (salario bruto - INSS): ");
        scanf("%f", &salario_base);
        imposto = calcIRPF(salario_base);
        printf("Com um salario de R$%.2f, voce tem R$%.2f de imposto retido.", salario_base, imposto);
        break;
     case 9:
        exec9();
        break;
    }
    return 0;
}
