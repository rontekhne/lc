/* Exe-0517 Escreva um programa que leia um número inteiro positivo N
 * e em seguida imprima N linhas do chamado triângulo de Floyd:
 * 1
 * 2 3
 * 4 5 6
 * 7 8 9 10
 * 11 12 13 14 15
 * 16 17 18 19 20 21 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, l, count, n;

    do {
        printf("Digite um valor inteiro: ");
        scanf("%d", &n);
    }while (n < 0);

    for (l = 1, i = 1; l <= n; l++) {
        for (count = l; count > 0; count--, i++) {
            printf("%d ", i);
        }
        printf("\n");
    }

    system("pause");
    return 0;
}
