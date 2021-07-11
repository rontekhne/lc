/* Exe-0314 Faça um programa que converta uma letra maiúscula
 * em letra minúscula. Use a tabela ASCII para isso. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c = 'A';

    printf("c = A (65); c = c (65) + a (97) - A (65) = %c\n", c = c + 'a' - 'A');

    system("pause");
    return 0;
}
