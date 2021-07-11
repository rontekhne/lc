/* Exe-0319 Elabore um programa que leia dois números inteiros
 * e exiba o resultado das operações de "ou exclusivo",
 * "ou bit a bit" e "e bit a bit" entre eles. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;

    printf("Digite dois valores inteiros: ");
    scanf("%d%d", &num1, &num2);

    printf("%d ^ %d = %d\n", num1, num2, num1 ^ num2);
    printf("%d | %d = %d\n", num1, num2, num1 | num2);
    printf("%d & %d = %d\n", num1, num2, num1 & num2);

    system("pause");
    return 0;
}
