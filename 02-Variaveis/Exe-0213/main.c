/* Exe-0213 Faça um programa que leia um caractere do tipo char e depois o
 * imprima entre aspas duplas. Assim, se o caractere lido for a letra A,
 * deverá ser impresso "A". */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;

    c = getchar();
    printf("\"%c\"\n", c);

    // system("pause");
    return 0;
}
