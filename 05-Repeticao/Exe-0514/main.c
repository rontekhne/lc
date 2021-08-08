/* Exe-0514 Escreva um programa que leia um número inteiro, maior ou igual a zero,
 * do usuário. Imprima o enésimo termo da sequência de Fibonacci. Essa sequência
 * começa no termo de ordem zero, e, a partir do segundo termo, seu valor é dado
 * pela soma dos dois termos anteriores. Alguns termos dessa sequência são:
 * 0, 1, 1, 2, 3, 5, 8, 13, 21, 34. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned long long int i, n, anterior1, anterior2, fib;

    do {
        printf("Digite um valor inteiro: ");
        scanf("%lld", &n);
    }while (n < 0);

    anterior1 = 1;
    anterior2 = 1;
    printf("0 %d %d ", anterior1, anterior2);

    for (i = 0; i <= n-3; i++) {
        fib = anterior1 + anterior2;
        printf("%lld ", fib);
        anterior2 = anterior1;
        anterior1 = fib;
    }
    printf("\n");

    system("pause");
    return 0;
}
