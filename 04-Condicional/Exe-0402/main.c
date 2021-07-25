/* Exe-0402 Faça um programa que leia dois números e mostre
 * o maior deles. Se, por acaso, os dois números forem iguais,
 * imprima a mensagem "Números iguais". */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2;

    printf("Digite dois valores inteiros: ");
    scanf("%d%d", &n1, &n2);

    if (n1 > n2)
        printf("%d eh o maior.\n", n1);
    else if (n2 > n1)
        printf("%d eh o maior.\n", n2);
    else
        printf("Valores iguais.\n");

    system("pause");
    return 0;
}
