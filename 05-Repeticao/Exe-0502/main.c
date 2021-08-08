/* Exe-0502 Faça um programa que leia um número N e imprima
 * todos os números naturais de 0 até N em ordem decrescente. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;

    do {
        printf("Digite um valor natural: ");
        scanf("%d", &N);
    } while (N < 0);

    for ( ; N >= 0; N--) {
        printf("%d ", N);
    }
    printf("\n");

    system("pause");
    return 0;
}
