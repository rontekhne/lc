/* Exe-0509 Escreva um programa que leia 10 números
 * e escreva o menor valor lido e o maior valor lido. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, menor, maior;

    for (i = 0; i < 10; i++) {
        printf("#%d> ", i+1);
        scanf("%d", &n);
        if (i == 0)
            menor = maior = n;
        if (n < menor)
            menor = n;
        if (n > maior)
            maior = n;
    }
    printf("Menor = %d, Maior = %d\n", menor, maior);

    system("pause");
    return 0;
}
