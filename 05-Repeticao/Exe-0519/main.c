/* Exe-0519 Faça um programa que calcule e escreva o valor de S:
 * S = 1/1 + 3/2 + 5/3 + 7/4 +...+ 99/55 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float s, n, d;

    s = 0;
    n = 1;
    d = 1;

    while (d <= 50) {
        s = s + n/d;
        n += 2;
        d++;
    }

    printf("S = %f\n", s);

    system("pause");
    return 0;
}
