/* Exe-0301 Faça um programa que leia um número inteiro e
 * retorne seu antecessor e sucessor. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    printf("Digite um valor inteiro: ");
    scanf("%d", &i);

    printf("Antecessor: %d\n", i - 1);
    printf("Seu valor : %d\n", i);
    printf("Sucessor  : %d\n", i + 1);

    system("pause");
    return 0;
}
