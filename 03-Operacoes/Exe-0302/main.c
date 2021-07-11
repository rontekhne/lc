/* Exe-0302 Faça um programa que leia um número real
 * e imprima a quinta parte desse número. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n, quintaParte;

    printf("Digite um valor real: ");
    scanf("%f", &n);

    quintaParte = n * 1/5;
    printf("A quinta parte de %f = %f\n", n, quintaParte);

    system("pause");
    return 0;
}
