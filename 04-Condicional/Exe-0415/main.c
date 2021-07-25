/* Exe-0415 Faça um programa que leia os coeficientes de uma equação
 * do segundo grau. Em seguida, calcule e mostre as raízes dessa
 * equação, lembrando que as raízes são calculadas como:
 * x1 = -b + sqrt(delta) / 2a e x2 = -b + sqrt(delta) / 2a
 * em que delta = b² -4ac e ax² + bx + c = 0 representa uma
 * equação do segundo grau. A variavel a tem de ser diferente de zero.
 * Caso seja igual, imprima a mensagem "Não é equação de segundo grau".
 * Do contrário, imprima:
 * Se delta < 0, não existe real. Imprima a mensagem "Não existe raiz".
 * Se delta = 0, existe uma raiz real. Imprima a raíz e a mensagem "Raiz única".
 * Se delta > 0, existem duas raízes reais. Imprima as raízes. */

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
