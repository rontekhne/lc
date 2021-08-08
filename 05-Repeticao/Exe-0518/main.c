/* Exe-0518 Faça um programa que receba um número inteiro
 * maior do que 1 e verifique se o número é primo ou não. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n;

    do {
        printf("Digite um valor inteiro maior do que 1: ");
        scanf("%d", &n);
    }while (n <= 1);

    for (i = 2; i < n; ++i) {
        if (n != 2 && n % i == 0) {
            printf("Composto.\n");
            return 0;
        }
    }
    printf("Primo.\n");

    system("pause");
    return 0;
}
