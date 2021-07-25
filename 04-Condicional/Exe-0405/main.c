/* Exe-0405 Faça um programa que leia um número e, caso ele seja
 * positivo, calcule e mostre:
 * O número digitado ao quadrado.
 * A raiz quadrada do número digitado. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float n;

    printf("Digite um valor: ");
    scanf("%g", &n);

    if (n >= 0)
        printf("%g %g\n", pow(n,2), sqrt(n));
    else
        printf("O valor digitado é negativo.\n");

    system("pause");
    return 0;
}
