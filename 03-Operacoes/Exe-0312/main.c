/* Exe-0312 Leia a altura e o raio de um cilindro circular e
 * imprima o volume desse cilindro. O volume de um cilindro circular
 * é calculado por meio da seguinte fórmula:
 * V = PI * Raio² * altura, em que PI = 3.141592. */

#include <stdio.h>
#include <stdlib.h>

#define PI 3.141592

int main()
{
    float altura, raio, volume;

    printf("Digite a altura e o raio de um cilindro: ");
    scanf("%f%f", &altura, &raio);

    volume = PI * (raio*raio) * altura;

    printf("Um cilindro de altura %f e raio %f tem o volume %f\n",
           altura, raio, volume);

    system("pause");
    return 0;
}
