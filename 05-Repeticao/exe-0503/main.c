/* Exe-0503 Fa�a um programa que leia um n�mero inteiro N e depois imprima
 * os N primeiros n�meros naturais �mpares */

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
