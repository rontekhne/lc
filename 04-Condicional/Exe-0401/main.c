/* Exe-0401 Faça um programa que leia dois números e mostre
 * qual deles é o maior */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2;

    printf("Digite dois valores inteiros: ");
    scanf("%d%d", &n1, &n2);

    if (n1 > n2) {
        printf("%d eh o maior.\n", n1);
    }else {
        printf("%d eh o maior.\n", n2);
    }

    system("pause");
    return 0;
}
