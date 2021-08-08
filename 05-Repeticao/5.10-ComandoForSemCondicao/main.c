/* 5.10 Comando for sem condição */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;

    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);

    // O comando for abaixo e um laço infinito
    for (c = a; ; c++) {
        printf("%d \n", c);
    }

    system("pause");
    return 0;
}
