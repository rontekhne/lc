/* Exe-0508 Faça um programa que leia 10 inteiros e imprima sua média. */

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i, n, soma = 0;

    printf("Media de 10 valores:\n\n");

    for (i = 0; i < 10; i++) {
        printf("#%d > ", i+1);
        scanf("%d", &n);
        soma += n;
    }

    printf("Media = %d\n", soma / 10);

    system("pause");
    return 0;
}
