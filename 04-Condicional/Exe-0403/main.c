/* Exe-0403 Faça um programa que leia um número inteiro
 * e verifique se esse número é par ou ímpar. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Digite um valor inteiro: ");
    scanf("%d", &n);

    if (n % 2 == 0)
        printf("Par.\n");
    else
        printf("Impar.\n");

    system("pause");
    return 0;
}
