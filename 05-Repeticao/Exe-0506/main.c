/* Exe-0506 Faça um programa que mostre uma contagem regressiva
 * na tela, iniciando em 10 e terminado em 0. Mostre uma mensagem
 * "FIM!" após a contagem. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i = 10;

    while (i >= 0) {
        printf("%d\n", i);
        i--;
        sleep(1);
    }

    printf("FIM!\n");

    system("pause");
    return 0;
}
