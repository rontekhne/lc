/* Exe-0210 Elabore um programa que solicite ao usuário entrar com o valor do
 * dia, mês e ano (inteiros). Em seguida, imprima os valores lidos separados
 * por uma barra (\) */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d, m, a;

    printf("Digite o dia, mes e ano (dd mm aaaa): ");
    scanf("%d%d%d", &d, &m, &a);
    printf("%d\\%d\\%d\n", d, m, a);

    // system("pause");
    return 0;
}
