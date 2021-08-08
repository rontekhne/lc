/* Exe-0512 Escreva um programa que leia um número inteiro
 * e calcule a soma de todos os divisores desse número, com
 * exceção dele próprio. Exemplo: A soma dos divisores do
 * número 66 é 1 + 2 + 3 + 6 + 11 + 22 + 33 = 78. */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int i, n, soma = 0;

    do {
        printf("Digite um valor inteiro: ");
        scanf("%d", &n);
    }while (n < 0);

    printf("\nSoma dos divisores de %d exceto ele.\n", n);

    for (i = 1; i < n; i++) {
        if (n % i == 0) {
            printf(" %d ", i);
            if (n / i == 2) {
                printf(" = ");
            }else {
                printf(" + ");
            }
            soma += i;
        }
    }
    printf("%d \n", soma);

    system("pause");
    return 0;
}
