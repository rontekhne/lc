/* Exe-0504 Fa�a um programa que determine e mostre os cinco primeiros
 * m�ltiplos de 3 considerando n�meros maiores que 0. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    for (i = 1; i <= 5; i++) {
        printf("%d x 3 = %d\n", i, i * 3);
    }

    system("pause");
    return 0;
}
