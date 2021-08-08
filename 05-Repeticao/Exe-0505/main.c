/* Exe-0505 Faça um programa que calcule e mostre a soma dos 50
 * primeiros números pares */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, p;

    i = 2;
    p = 0;
    while (i <= 100) {
        if (i % 2 == 0) {
            if (i == 100)
                printf("%d = ", i);
            else
                printf("%d + ", i);
            p = p + i;
        }
        i++;
    }

    printf("%d\n", p);

    i = ((0 + 50) * 50) / 2 * 2;
    printf("%d", i);

    system("pause");
    return 0;
}
