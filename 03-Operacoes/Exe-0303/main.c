/* Exe-0303 Faça um programa que leia três valores inteiros
 * e mostre sua soma .*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, z;

    printf("Digite 3 valores inteiros: ");
    scanf("%d%d%d", &x, &y, &z);

    printf("A soma %d + %d + %d = %d\n", x, y, z, x + y + z);

    system("pause");
    return 0;
}
