/* Exe-0510 Fa�a um programa que leia 10 inteiros positivos,
 * ignorando n�o positivos, e imprima sua m�dia. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    float n, soma = 0;

    for (i = 0; i < 10; ++i) {
        do {
            printf("#%d> ", i+1);
            scanf("%f", &n);
        }while (n < 0);
        soma += n;
    }

    printf("Media = %.1f\n", soma/10);

    system("pause");
    return 0;
}
