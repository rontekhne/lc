/* Exe-0315 Faça um programa para ler um número inteiro positivo
 * de três dígitos. Em seguida, calcule e mostre o número formado
 * pelos dígitos invertidos do número lido.
 * Exemplo: Número lido = 123; Número gerado = 321.
 * OBS.: Para valores negativos seria necessário o uso de condições
 * e para uma melhor eficiência do código seria necessária uma
 * estrutura de repetição. */


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
