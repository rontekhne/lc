/* Exe-0503 Faça um programa que leia um número inteiro N e depois imprima
 * os N primeiros números naturais ímpares */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i;

    do {
        printf("Digite um valor natural: ");
        scanf("%d", &N);
    } while (N < 0);

    for (i = 0; i <= N; i++) {
        if (i % 2 != 0)
            printf("%d ", i);
    }
    printf("\n");

    system("pause");
    return 0;
}
