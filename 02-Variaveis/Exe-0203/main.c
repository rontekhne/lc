/* Exe-0203 Escreva um programa que leia um número inteiro e depois imprima a
 * mensagem "Valor lido:", seguido do valor inteiro. Use apenas um comando
 * printf() */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    scanf("%d", &i);
    printf("Valor lido: %d", i);

    // system("pause");
    return 0;
}
