/* Exe-0513 Faça um programa que exiba a soma de todos os números
 * naturais abaixo de 1000 que são múltiplos de 3 ou 5. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, soma = 0, n = 1000;

    printf("Soma dos valores naturais abaixo de 1000\nque sao multiplos de 3 ou 5.\n\n");

    for (i = 1; i < n; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            soma += i;
        }
    }

    printf("Soma = %d\n", soma+1);

    system("pause");
    return 0;
}
