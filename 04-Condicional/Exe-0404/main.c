/* Exe-0404 Faça um programa que leia o salario de um trabalhador
 * e o valor da prrestação de um empréstimo. Se a prestação:
 * - For maior que 20% do salário, imprima: "Empréstimo não concedido."
 * - Caso contrário, imprima: "Empréstimo concedido." */

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
