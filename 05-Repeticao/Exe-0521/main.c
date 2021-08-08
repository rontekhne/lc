/* EXe-0521 Escreva um programa que leia certa quantidade de números, imprima
 * o maior deles e quantas vezes o maior número foi lido. A quantidade de
 * números a serem lidos deve ser fornecida pelo usuário. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int n; // numero a ser lido
    int q; // quantidade de numeros
    int m; // o maior valor
    int xm; // vezes que o maior foi lido

    printf("Digite a quantidade de valores a serem lidos: ");
    scanf("%d", &q);

    int x[q]; // lista de numeros

    for (i = 0, m = 0; i < q; i++) {
        printf("#%d > ", i+1);
        scanf("%d", &n);
        x[i] = n;
        if (n > m)
            m = n;
    }

    for (i = 0, xm = 0; i < q; i++)
        if (x[i] == m)
            xm++;

    printf("Maior = %d; Vezes lido = %d\n", m, xm);

    system("pause");
    return 0;
}
