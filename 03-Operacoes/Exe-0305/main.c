/* Exe-0305 Fa�a um programa que calcule o ano de nascimento de
 * uma pessoa a partir de sua idade e do ano atual.
 * OBS.: Algumas condi��es referentes ao dia e m�s de nascimento
 * seriam apropriadas para tornar o resultado mais preciso */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade, ano_atual;

    printf("Digite sua idade e o ano atual: ");
    scanf("%d%d", &idade, &ano_atual);
    printf("Ano de nascimento: %d\n", ano_atual - idade);

    system("pause");
    return 0;
}
