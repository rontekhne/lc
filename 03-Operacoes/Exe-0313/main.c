/* Exe-0313 Sejam a e b os catetos de um triângulo cuja hipotenusa
 * h é obtida pela equação:
 * h = sqrt(a² + b²)
 * faça um programa que leia os valores de a e b, e calcule o valor
 * da hipotenusa através da fórmula dada. Imprima o resultado. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float catetoa, catetob, hipotenusa;

    printf("Digite os valores a e b dos catetos: ");
    scanf("%f%f", &catetoa, &catetob);

    hipotenusa = sqrt(pow(catetoa,2) + pow(catetob,2));

    printf("Hipotenusa = %f\n", hipotenusa);

    system("pause");
    return 0;
}
