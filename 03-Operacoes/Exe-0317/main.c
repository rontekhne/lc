/* Exe-0317 Escreva um programa que leia um número inteiro
 * e mostre seu complemento bit a bit. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Digite um valor inteiro: ");
    scanf("%d", &n);

    printf("Sem complemento (Original): %d\n", n);
    printf("Com complemento (Modificado): %d\n", ~n);

    system("pause");
    return 0;
}
