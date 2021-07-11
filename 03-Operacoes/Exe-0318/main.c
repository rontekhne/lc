/* Exe-0318 Elabore um programa que leia dois números inteiros e
 * exiba o deslocamento , à esquerda e à direita, do primeiro
 * número pelo segundo. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;

    printf("Digite dois valores: ");
    scanf("%d%d", &num1, &num2);

    printf("%d << %d = %d\n", num1, num2, num1 << num2);
    printf("%d >> %d = %d\n", num1, num2, num1 >> num2);

    system("pause");
    return 0;
}
