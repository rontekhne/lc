/* Exe-0307 Faça um programa que leia um valor em reais e a cotação
 * do dólar. Em seguida imprima o valor correspondente em dólares. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float reais, cotacao_dolar, dolares;

    printf("Digite um valor em real e a cotacao do dolar: ");
    scanf("%f%f", &reais, &cotacao_dolar);

    dolares = reais / cotacao_dolar;
    printf("%.2f reais = %.2f dolares.\n", reais, dolares);

    system("pause");
    return 0;
}
