/* Exe-0410 Faça um programa que leia três números inteiros e efetue
 * o cálculo de uma das seguintes médias de acordo com um valor digitado
 * pelo usuário e mostrado na tabela a seguir. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x, y, z;
    int    n;

    printf("### CALCULO DE MEDIAS ###\n");
    printf("1-Geometrica, 2-Ponderada,\n3-Harmonica, 4-Aritmetica\n\n");

    printf("Digite tres numeros inteiros e um codigo de operacao: ");
    scanf("%f%f%f%d", &x, &y, &z, &n);

    switch(n) {
        case 1: printf("Geometrica: %.1f\n", pow(x*y*z, (float)1/3)); break;
        case 2: printf("Ponderada: %.1f\n", (x+2*y+3*z)/(6)); break;
        case 3: printf("Harmonica: %.1f\n", (1)/((1/x)+(1/y)+(1/z))); break;
        case 4: printf("Aritmetica: %.1f\n", (x+y+z)/(3)); break;
        default: printf("Operacao invalida.\n");
    }

    system("pause");
    return 0;
}
