/* Exe-0404 Fa�a um programa que leia o salario de um trabalhador
 * e o valor da prresta��o de um empr�stimo. Se a presta��o:
 * - For maior que 20% do sal�rio, imprima: "Empr�stimo n�o concedido."
 * - Caso contr�rio, imprima: "Empr�stimo concedido." */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, emprestimo, vinte_por_cento_do_salario;

    printf("Valor do salario: ");
    scanf("%f", &salario);
    printf("Valor do emprestimo: ");
    scanf("%f", &emprestimo);

    vinte_por_cento_do_salario = (float) (salario * 20 / 100);

    if (emprestimo > vinte_por_cento_do_salario)
        printf("Emprestimo nao concedido.\n");
    else
        printf("Emprestimo concedido.\n");

    system("pause");
    return 0;
}
