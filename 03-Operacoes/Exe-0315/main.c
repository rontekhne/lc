/* Exe-0315 Fa�a um programa para ler um n�mero inteiro positivo
 * de tr�s d�gitos. Em seguida, calcule e mostre o n�mero formado
 * pelos d�gitos invertidos do n�mero lido.
 * Exemplo: N�mero lido = 123; N�mero gerado = 321.
 * OBS.: Para valores negativos seria necess�rio o uso de condi��es
 * e para uma melhor efici�ncia do c�digo seria necess�ria uma
 * estrutura de repeti��o. */


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor, digito;

    printf("Digite um valor inteiro de tres digitos: ");
    scanf("%d", &valor);

    printf("Valor invertido: ");
    digito = valor % 10;
    printf("%d", digito);
    valor = valor / 10;
    digito = valor % 10;
    printf("%d", digito);
    valor = valor / 10;
    printf("%d\n", valor);

    system("pause");
    return 0;
}
