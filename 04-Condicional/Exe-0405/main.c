/* Exe-0405 Fa�a um programa que leia um n�mero e, caso ele seja
 * positivo, calcule e mostre:
 * O n�mero digitado ao quadrado.
 * A raiz quadrada do n�mero digitado. */

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
        printf("O valor digitado � negativo.\n");

    system("pause");
    return 0;
}
