/* Exe-0408 Escreva um programa que, dada a idade de um nadador,
 * classifique-o em uma das seguintes categorias. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    short int idade;

    printf("Digite a idade do nadador: ");
    scanf("%hd", &idade);

    if (idade >= 5 && idade <=7)
        printf("Categoria: Infantil A.\n");
    else if (idade >= 8 && idade <= 10)
        printf("Categoria: Infantil B.\n");
    else if (idade >= 11 && idade <= 13)
        printf("Categoria: Juvenil A.\n");
    else if (idade >= 14 && idade <= 17)
        printf("Categoria: Juvenil B.\n");
    else if (idade >= 18)
        printf("Categoria: Senior.\n");
    else
        printf("Idade invalida.\n");

    system("pause");
    return 0;
}
