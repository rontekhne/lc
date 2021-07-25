/* Exe-0407 Uma empresa vende o mesmo produto para quatro diferentes estados.
 * Cada estafo possui uma taxa diferente de imposto sobre o produto. Fa�a
 * um programa em que o usu�rio entre com o valor e o estado de destino do
 * produto e o programa retorne o pre�o final do produto acrescido do imposto
 * do estado em que ser� vendido. Se o estado digitado n�o for v�lido, mostrar�
 * uma mensagem de erro. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor;
    char est1, est2;

    printf("Digite o valor e o estado (Ex.: 27.0 RJ): ");
    scanf("%f %c %c", &valor, &est1, &est2);

    if (est1 == 'M' && est2 == 'G')
        printf("Pre�o final: %.1f\n", valor + (valor * 7 / 100));
    else if (est1 == 'S' && est2 == 'P')
        printf("Pre�o final: %.1f\n", valor + (valor * 12 / 100));
    else if (est1 == 'R' && est2 == 'J')
        printf("Pre�o final: %.1f\n", valor + (valor * 15 / 100));
    else if (est1 == 'M' && est2 == 'S')
        printf("Pre�o final: %.1f\n", valor + (valor * 8 / 100));
    else
        printf("Estado invalido.\n");

    system("pause");
    return 0;
}
