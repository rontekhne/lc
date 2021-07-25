/* Exe-0409 Faça um programa que leia a altura e o peso de uma pessoa.
 * De acordo com a tabela a seguir, verifique e mostre qual é a
 * classificação dessa pessoa. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura;
    int   peso;

    printf("Digite sua altura e peso: ");
    scanf("%f%d", &altura, &peso);

    if (altura < 1.20) {
        if (peso < 60)
            printf("A\n");
        else if (peso >= 60 && peso <= 90)
            printf("D\n");
        else if (peso > 90)
            printf("G\n");
        else
            printf("Peso invalido");
    }else if (altura >= 1.20 && altura <= 1.70) {
        if (peso < 60)
            printf("B\n");
        else if (peso >= 60 && peso <= 90)
            printf("E\n");
        else if (peso > 90)
            printf("H\n");
        else
            printf("Peso invalido");
    }else if (altura > 1.70) {
        if (peso < 60)
            printf("C\n");
        else if (peso >= 60 && peso <= 90)
            printf("F\n");
        else if (peso > 90)
            printf("I\n");
        else
            printf("Peso invalido");
    }else
        printf("Altura invalida.\n");

    system("pause");
    return 0;
}
