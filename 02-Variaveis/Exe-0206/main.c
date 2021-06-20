/* Exe-0206 Faça um programa que leia um valor do tipo double e depois o
 * imprima na forma de notação científica. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    double d;

    scanf("%lf", &d);
    printf("%e\n", d);

    // system("pause");
    return 0;
}
