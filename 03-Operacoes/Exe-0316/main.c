/* Exe-0316 Escreva um programa que leia um número inteiro e
 * mostre a multiplicação  e a divisão desse número por dois
 * (utilize os operadores de deslocamento de bits). */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor;

    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);

    printf("%d multiplicado por 2 = %d\n", valor, valor << 1);
    printf("%d dividido por 2 = %d\n", valor, valor >> 1);

    system("pause");
    return 0;
}
