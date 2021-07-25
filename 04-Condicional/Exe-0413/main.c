/* Exe-0413 Fa�a um programa que mostre ao usu�rio um menu com
 * quatro op��es de opera��es matem�ticas (as opera��es b�sicas,
 * por exemplo). O usu�rio escolhe uma das op��es, e o seu programa
 * pede dois valores num�ricos e realiza a opera��o, mostrando o resultado. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    double n1, n2, res = 0.0;
    char op;

    printf("### ARITMETICA ###\n\n");
    printf("[+]Somar [-]Subtrair\n[*]Multiplicar [/]Dividir\n\n");

    printf("Operador: ");
    scanf("%c", &op);
    printf("Valores: ");
    scanf("%lf%lf", &n1, &n2);

    switch(op) {
        case '+': res = n1 + n2; break;
        case '-': res = n1 - n2; break;
        case '*': res = n1 * n2; break;
        case '/':
            if (n2 == 0)
                printf("Divisao por zero.\n");
            else
                res = n1 / n2;
            break;
        default: printf("Operador invalido.\n");
    }

    printf("Resultado: %lf\n", res);
    system("pause");
    return 0;
}
