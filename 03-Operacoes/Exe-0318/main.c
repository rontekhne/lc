/* Exe-0318 Elabore um programa que leia dois n�meros inteiros e
 * exiba o deslocamento , � esquerda e � direita, do primeiro
 * n�mero pelo segundo. */

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
