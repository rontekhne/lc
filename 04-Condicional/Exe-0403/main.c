/* Exe-0403 Fa�a um programa que leia um n�mero inteiro
 * e verifique se esse n�mero � par ou �mpar. */

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
