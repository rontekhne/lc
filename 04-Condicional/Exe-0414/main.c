/* Exe-0414 Fa�a um programa para verificar se determinado n�mero
 * inteiro lido � divis�vel por 3 ou 5, mas n�o simultaneamente
 * pelos dois. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Digite um valor: ");
    scanf("%d", &n);

    if (n % 3 == 0 || n % 5 == 0)
        if (n % 3 == 0 && n % 5 == 0)
            printf("Valor divisivel por 3 e 5.\n");
        else
            if (n % 3 == 0)
                printf("Valor divisivel por 3.\n");
            else
                printf("Valor divisivel por 5.\n");
    else
        printf("Valor nao divisivel por 3 ou 5.\n");

    system("pause");
    return 0;
}
