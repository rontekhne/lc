/* Exe-0520 Fça um programa que leia um valor inteiro e positivo N,
 * calcule e mostre o valor E, conforme a fórmula a seguir:
 * E = 1/1! + 1/2! + 1/3! +...+ 1/N! */

#include <stdio.h>
#include <stdlib.h>

#define NUMERADOR 1.0

int main()
{
    int n, i, cont;
    float e, d;

    do {
        printf("Digite um inteiro positivo: ");
        scanf("%d", &n);
    }while (n < 1);

    for (e = 0, i = 1; i <= n; i++) {
        if (i == NUMERADOR) {
            d = NUMERADOR;
        }else {
            for (d = i, cont = i; cont > 1; cont--) {
                d = d * (cont-1);
            }
        }
        e = e + NUMERADOR/d;
    }

    printf("E = %f\n", e);

    system("pause");
}
