/* Exe-0311 Leia o valor do raio de um círculo. Calcule e imprima
 * a área do círculo correspondente. A área do cículo é
 * A = PI * Raio², sendo PI = 3.141592. */

#include <stdio.h>
#include <stdlib.h>

#define PI 3.141592

int main()
{
    float r, a;

    printf("Digite o raio de um circulo: ");
    scanf("%f", &r);

    a = PI * (r * r);

    printf("Um circulo de raio %f tem area = %f\n", r, a);

    system("pause");
    return 0;
}
