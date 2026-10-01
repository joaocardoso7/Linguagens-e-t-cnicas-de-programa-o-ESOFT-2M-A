#include <stdio.h>
#include <stdlib.h>

//exercicio 0 esoft-m-a
/*faça um programa que receba 4 numeros inteiros e verifique quais sao impares e multiplos de 5*/
void exercicio0(){
    int a, b, c, d;
    printf("Insira 4 numeros inteiros: \n");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    if(a%2 != 0 && a%5 == 0){
        printf("%d eh impar e multiplo de 5\n", a);
    }
    if(b%2 != 0 && b%5 == 0){
        printf("%d eh impar e multiplo de 5\n", b);
    }
    if(c%2 != 0 && c%5 == 0){
        printf("%d eh impar e multiplo de 5\n", c);
    }
    if(d%2 != 0 && d%5 == 0){
        printf("%d eh impar e multiplo de 5\n", d);
    }
}

//exercicio 1 esoft-m-a
/*um legendario que vai escalar a montanha precisa saber quantas mochilas ele vai precisar*/
void exercicio1() {
    int capacidade, qtd_itens, mochilas_cheias;

    printf("Insira a quantidade total de itens a serem transportados: \n");
    scanf("%d", &qtd_itens);

    printf("insira a capacidade maxima de itens de cada mochila: \n");
    scanf("%d", &capacidade);

    if (capacidade <= 0) {
        printf("a capacidade da mochila deve ser maior que zero!\n");
        return;
    }

    mochilas_cheias = qtd_itens / capacidade;

    printf("Legendario, o numero de mochilas totalmente preenchidas e: %d\n", mochilas_cheias);
}

//exercicio 2 esoft-m-a
/* conversor de unidades de medida */
void exercicio2() {
    float valor, valor_em_metros, valor_convertido;
    int cod_origem, cod_destino;

    printf("\n--- TABELA DE UNIDADES ---\n");
    printf("1 - Milimetro (mm)\n");
    printf("2 - Centimetro (cm)\n");
    printf("3 - Metro (m)\n");
    printf("4 - Quilometro (km)\n");

    printf("Insira o valor a ser convertido: ");
    scanf("%f", &valor);

    printf("Insira o codigo da unidade de medida de entrada: ");
    scanf("%d", &cod_origem);

    printf("Insira o codigo da unidade de medida para conversao: ");
    scanf("%d", &cod_destino);

    switch (cod_origem) {
        case 1:
            valor_em_metros = valor / 1000.0;
            break;
        case 2:
            valor_em_metros = valor / 100.0;
            break;
        case 3:
            valor_em_metros = valor;
            break;
        case 4:
            valor_em_metros = valor * 1000.0;
            break;
        default:
            printf("Erro: Unidade de origem invalida!\n");
            return; 
    }

    switch (cod_destino) {
        case 1:
            valor_convertido = valor_em_metros * 1000.0;
            break;
        case 2:
            valor_convertido = valor_em_metros * 100.0;
            break;
        case 3:
            valor_convertido = valor_em_metros;
            break;
        case 4:
            valor_convertido = valor_em_metros / 1000.0;
            break;
        default:
            printf("Erro: unidade de conversao/destino invalida!\n");
            return; 
    }

    printf("\nResultado da conversao: %.2f\n", valor_convertido);
}

//exercicio 0 esoft-m-b
//exercicio do legendario tambem, mas agora tem os itens que vao sobrar
void exercicio0b() {
    int capacidade, qtd_itens, n_mochilas, resto;
    
    printf("Insira a quantidade de itens a serem dispostos nas mochilas: \n");
    scanf("%d",&qtd_itens);
    printf("Insira a capacidade de itens de cada mochila: \n");
    scanf("%d",&capacidade);
    
    n_mochilas = qtd_itens/capacidade;
    resto = qtd_itens%capacidade; 
    
    printf("Legendario, sao %d mochilas para seus itens, e sobram %d itens\n", n_mochilas, resto);
}

//exercicio 1 esoft-m-b
/*um programa que receba três números inteiros a, b e c entrados pelo usuário. Se
algum dos números for igual a outro, imprima a mensagem “os números têm que ser
distintos”. Caso contrário, imprima eles em uma mesma linha em ordem crescente.*/
void exercicio1b() {
    int a, b, c, temp;

    printf("Insira tres numeros inteiros distintos: \n");
    scanf("%d %d %d", &a, &b, &c);

    if (a == b || a == c || b == c) {
        printf("os numeros tem que ser distintos\n");
        return;
    }

    if (a > b) { temp = a; a = b; b = temp; }
    if (a > c) { temp = a; a = c; c = temp; }
    if (b > c) { temp = b; b = c; c = temp; }

    printf("Numeros em ordem crescente: %d %d %d\n", a, b, c);
}

//exercicio 2 esoft-m-b
/*faca um programa que receba dois valores e um código de operação. 
O programa deve realizar a operação correspondente ao código e  
imprimir o resultado. Os códigos de operação são: 1 para maior que (>), 2 para menor que (<), 3 para igual a (==) e 4 para diferente de (!=).*/
void exercicio2_B() {
    float v1, v2;
    int codigo;

    printf("\n--- OPERACOES RELACIONAIS ---\n");
    printf("Insira o primeiro valor: ");
    scanf("%f", &v1);

    printf("Insira o segundo valor: ");
    scanf("%f", &v2);

    printf("\nCodigos disponiveis:\n");
    printf("1 - Maior que (>)\n");
    printf("2 - Menor que (<)\n");
    printf("3 - Igual a (==)\n");
    printf("4 - Diferente de (!=)\n");
    printf("Insira o codigo da operacao: ");
    scanf("%d", &codigo);

    switch (codigo) {
        case 1:
            if (v1 > v2) {
                printf("Verdadeiro\n");
            } else {
                printf("Falso\n");
            }
            break;

        case 2:
            if (v1 < v2) {
                printf("Verdadeiro\n");
            } else {
                printf("Falso\n");
            }
            break;

        case 3:
            if (v1 == v2) {
                printf("Verdadeiro\n");
            } else {
                printf("Falso\n");
            }
            break;

        case 4:
            if (v1 != v2) {
                printf("Verdadeiro\n");
            } else {
                printf("Falso\n");
            }
            break;

        default:
            printf("operador invalido\n");
            break;
    }
}

//exercicio 0 ads-n-a
/*Faça um programa que receba 5 números inteiros do teclado, verifique se em algum
deles são números consecutivos, e mostre os valores que estão em ordem consecutiva.*/
void exercicio0ads(){
    int a, b, c, d, e;

    printf("Insira 5 numeros inteiros: \n");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    if (a + 1 == b || a - 1 == b) {
        printf("%d e %d sao consecutivos\n", a, b);
    }
    if (b + 1 == c || b - 1 == c) {
        printf("%d e %d sao consecutivos\n", b, c);
    }
    if (c + 1 == d || c - 1 == d) {
        printf("%d e %d sao consecutivos\n", c, d);
    }
    if (d + 1 == e || d - 1 == e) {
        printf("%d e %d sao consecutivos\n", d, e);
    }
}

//exercicio 1 ads-n-a
/*um programa que calcule o imc e apareca na tela sua classificacao conforme o ministerio da saude*/
void exercicio1ads() {
    float peso, altura, imc;

    printf("Insira seu peso em kg: ");
    scanf("%f", &peso);

    printf("Insira sua altura em metros: ");
    scanf("%f", &altura);

    if (altura <= 0) {
        printf("Altura deve ser maior que zero!\n");
        return;
    }

    imc = peso / (altura * altura);

    printf("Seu IMC é: %.2f\n", imc);

    if (imc < 18.5) {
        printf("Classificacao: Abaixo do peso\n");
    } else if (imc < 25) {
        printf("Classificacao: Peso normal\n");
    } else if (imc < 30) {
        printf("Classificacao: Sobrepeso\n");
    } else {
        printf("Classificacao: Obesidade\n");
    }
}

//exercicio 2 ads-n-a
//torre de hanoi
void exercicio2_C() {
    int A = 6;
    int B = 0;
    int C = 0;

    printf("\n--- RESOLUCAO DA TORRE DE HANOI ---\n");
    printf("Estado inicial: Pino A = %d, Pino B = %d, Pino C = %d\n\n", A, B, C);

    A = A - 1;
    C = C + 1;
    printf("Passo 1: Mover disco 1 de A para C -> [A = %d, B = %d, C = %d]\n", A, B, C);

    A = A - 2;
    B = B + 2;
    printf("Passo 2: Mover disco 2 de A para B -> [A = %d, B = %d, C = %d]\n", A, B, C);

    C = C - 1;
    B = B + 1;
    printf("Passo 3: Mover disco 1 de C para B -> [A = %d, B = %d, C = %d]\n", A, B, C);

    A = A - 3;
    C = C + 3;
    printf("Passo 4: Mover disco 3 de A para C -> [A = %d, B = %d, C = %d]\n", A, B, C);

    B = B - 1;
    A = A + 1;
    printf("Passo 5: Mover disco 1 de B para A -> [A = %d, B = %d, C = %d]\n", A, B, C);

    B = B - 2;
    C = C + 2;
    printf("Passo 6: Mover disco 2 de B para C -> [A = %d, B = %d, C = %d]\n", A, B, C);

    A = A - 1;
    C = C + 1;
    printf("Passo 7: Mover disco 1 de A para C -> [A = %d, B = %d, C = %d]\n", A, B, C);

    printf("\nResultado final: Todos os discos no Pino C!\n");
    printf("Pino A = %d, Pino B = %d, Pino C = %d\n", A, B, C);
}

int main() {
    int prova, op;

    printf("Insira a prova (1 - esoft-m-a, 2 - esoft-m-b, 3 - ads-n-a): \n");
    scanf("%d", &prova);

    printf("Insira o numero do exercicio que deseja executar (0, 1 ou 2): \n");
    scanf("%d", &op);

    if (prova == 1) {
        if (op == 0) exercicio0();
        else if (op == 1) exercicio1();
        else if (op == 2) exercicio2();
        else printf("opcao invalida\n");
    } 
    else if (prova == 2) {
        if (op == 0) exercicio0b();
        else if (op == 1) exercicio1b();
        else if (op == 2) exercicio2_B();
        else printf("opcao invalida\n");
    } 
    else if (prova == 3) {
        if (op == 0) exercicio0ads();
        else if (op == 1) exercicio1ads();
        else if (op == 2) exercicio2_C();
        else printf("opcao invalida\n");
    } 
    else {
        printf("opcao invalida\n");
    }

    return 0;
}
