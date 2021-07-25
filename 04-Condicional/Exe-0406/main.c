/* Exe-0406 Faça um programa que receba a altura e o sexo de
 * uma pessoa e calcule e mostre seu peso ideal, utilizando as
 * seguintes fórmulas (em que "h" corresponde à altura):
 * - Homens (72,7 * h) - 58
 * - Mulheres (62,1 * h) - 44,7 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura;
    char sexo;

    printf("Sua altura (em metros) e sexo (m/f): ");
    scanf("%f %c", &altura, &sexo);

    switch(sexo) {
        case 'm':
        case 'M':
            printf("Peso ideal: %d\n", (int) ((72.7 * altura) - 58));
            break;
        case 'f':
        case 'F':
            printf("Peso ideal: %d\n", (int) ((62.1 * altura) - 44.7));
            break;
        default: ("Sexo (m/f)!\n");
    }

    system("pause");
    return 0;
}
