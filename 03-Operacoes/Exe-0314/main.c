/* Exe-0314 Fa�a um programa que converta uma letra mai�scula
 * em letra min�scula. Use a tabela ASCII para isso. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c = 'A';

    printf("c = A (65); c = c (65) + a (97) - A (65) = %c\n", c = c + 'a' - 'A');

    system("pause");
    return 0;
}
