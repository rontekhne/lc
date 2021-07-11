/* Exe-0310 A importância de R$ 780.000,00 será dividida entre
 * três ganhadores de um concurso, sendo que:
 * i.   O primeiro ganahador receberá 46% do total.
 * ii.  O sengundo receberá 32% do total.
 * iii. O terceiro receberá o restante.
 * Calcule e imprima a quantia recebida por cada um dos ganhadores. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    const float v = 780.00000; // valor da importância
    float q1, q2, q3;          // quantia ganha por cada um

    printf("## 3 ganhadores recebem a valor de R$ 780.000,00 ##\n");

    q1 = v * 46 / 100;
    q2 = v * 32 / 100;
    q3 = v * (100 - (46+32)) / 100;

    printf("O primeiro ganhador recebe 46%%: R$%f\n", q1);
    printf("O segundo  ganhador recebe 32%%: R$%f\n", q2);
    printf("O terceiro ganhador recebe %d%%: R$%f\n", 100-(46+32), q3);

    system("pause");
    return 0;
}
