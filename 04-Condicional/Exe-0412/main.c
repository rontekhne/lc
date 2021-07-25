/* Exe-0412 Usando o comando switch, escreva um programa que leia
 * um inteiro entre 1 e 7 e imprima o dia da semana correspondente
 * a esse número. Isto é, domingo, se 1, segunda-feira, se 2, e
 * assim por diante. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    short int d;

    printf("Digite um valor de 1 a 7 referente ao dia da semana: ");
    scanf("%hd", &d);

    switch(d) {
        case 1: printf("Domingo.\n"); break;
        case 2: printf("Segunda-feira.\n"); break;
        case 3: printf("Terca-feira.\n"); break;
        case 4: printf("Quarta-feira.\n"); break;
        case 5: printf("Quinta-feira.\n"); break;
        case 6: printf("Sexta-feira.\n"); break;
        case 7: printf("Sabado.\n"); break;
        default: printf("Dia da semana invalido.\n");
    }

    system("pause");
    return 0;
}
