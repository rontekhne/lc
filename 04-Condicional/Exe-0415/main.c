/* Exe-0415 Fa�a um programa que leia os coeficientes de uma equa��o
 * do segundo grau. Em seguida, calcule e mostre as ra�zes dessa
 * equa��o, lembrando que as ra�zes s�o calculadas como:
 * x1 = -b + sqrt(delta) / 2a e x2 = -b + sqrt(delta) / 2a
 * em que delta = b� -4ac e ax� + bx + c = 0 representa uma
 * equa��o do segundo grau. A variavel a tem de ser diferente de zero.
 * Caso seja igual, imprima a mensagem "N�o � equa��o de segundo grau".
 * Do contr�rio, imprima:
 * Se delta < 0, n�o existe real. Imprima a mensagem "N�o existe raiz".
 * Se delta = 0, existe uma raiz real. Imprima a ra�z e a mensagem "Raiz �nica".
 * Se delta > 0, existem duas ra�zes reais. Imprima as ra�zes. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a, b, c, x1, x2, delta;

    printf("Digite os coeficientes a, b e c: ");
    scanf("%lf%lf%lf", &a, &b, &c);

    delta = pow(b,2) - 4 * a * c;

    if (delta < 0)
        printf("Nao existe raiz.\n");
    else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        if (delta == 0)
            printf("Raiz unica: %lf\n", x1);
        if (delta > 0)
            printf("Raiz 1: %lf, Raiz 2: %lf\n", x1, x2);
    }

    system("pause");
    return 0;
}
