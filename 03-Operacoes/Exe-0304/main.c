/* Exe-0304 Leia quatro valores do tipo float.
 * Calcule e exiba a média aritmética desses valores. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float v1, v2, v3, v4;

    printf("Digite quatro valores reais: ");
    scanf("%f%f%f%f", &v1, &v2, &v3, &v4);

    printf("MA = %f\n", (v1 + v2 + v3 + v4) / 4);

    system("pause");
    return 0;
}
