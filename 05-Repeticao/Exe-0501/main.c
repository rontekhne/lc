/* Exe-0501 Fa�a um programa que leia um n�mero N e imprima
 * todos os n�meros naturais de 0 at� N em ordem crescente. */

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
        printf("%d ", i);
    }
    printf("\n");

    system("pause");
    return 0;
}
