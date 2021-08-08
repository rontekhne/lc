/* Exe-0516 Em matemática, o número harmônico designado por Hn define-se como
 * o enésimo termo da série harmônica. Ou seja: Hn = 1 + 1/2 + 1/3 + 1/4 ... + 1/n.
 * Apresente um programa que calcule o valor de qualquer Hn. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float h = 0;
    int n, k;

    printf("Digite o valor de Hn: ");
    scanf("%d", &n);

    k = n;
    while (k >= 1) {
        h = h + 1.0 / k;
        k = k - 1;
    }
    printf("O Hn de %d = %8.4f\n", n, h);

    system("pause");
    return 0;
}
