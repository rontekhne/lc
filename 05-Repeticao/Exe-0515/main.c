/* Exe-0515 Elabore um programa que fa�a a leitura de v�rios n�meros inteiros
 * at� que se digite um n�mero negativo. O programa tem de retornar o maior e
 * o menor n�mero lido. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, maior, menor;

    i = 0;
    do {
        printf("Digite um valor: ");
        scanf("%d", &n);
        if (i == 0) {
            menor = maior = n;
        }
        if (n < menor && n >= 0) {
            menor = n;
        }
        if (n > maior) {
            maior = n;
        }
        i++;
    } while (n >= 0);

    printf("Maior = %d, Menor = %d\n", maior, menor);

    system("pause");
    return 0;
}
