/* Exe-0215 Escreva um programa que leia três variáveis: char, int e float.
 * Em seguida, imprima-as de três maineiras diferentes: separadas por espaço,
 * por uma tabulação horizontal e uma em cada linha. Use um único comando
 * printf() para cada operação de escrita das três variáveis. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char  c;
    int   i;
    float f;

    scanf("%c %d %f", &c, &i, &f);
    printf("%c %d %f\n", c, i, f);
    printf("%c\t%i\t%f\n", c, i, f);
    printf("%c\n%i\n%f\n", c, i, f);

    // system("pause");
    return 0;
}
