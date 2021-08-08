/* Exe-0511 Fa�a um algoritmo que leia um n�mero positivo e imprima
 * seus divisores. Exemplo: Os divisores do n�mero 66 s�o: 1, 2, 3, 6,
 * 11, 22, 33 e 66. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n;

    do {
        printf("Digite um inteiro positivo: ");
        scanf("%d", &n);
    }while (n < 0);

    printf("Os divisores de %d: ", n);
    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            if (i == n)
                printf("e %d.", i);
            else
                printf("%d ", i);
        }
    }
    printf("\n");

    system("pause");
    return 0;
}
