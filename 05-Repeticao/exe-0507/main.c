/* Exe-0507 Elabore um programa que peça ao usuário para digitar 10
 * valores. Some esses valores e apresente o resultado na tela. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, soma = 0;

    printf("Some 10 valores:\n\n");

    for (i = 0; i < 10; i++) {
        printf("#%d > ", i+1);
        scanf("%d", &n);
        soma += n;
    }

    printf("Soma = %d\n", soma);

    system("pause");
    return 0;
}
