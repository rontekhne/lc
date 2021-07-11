/* Exe-0309 Leia um ângulo em graus e apresente-o convertido em
 * radianos. A fórmula de conversão é R = G * PI / 180, sendo G
 * o ângulo em graus e R em radianos e PI = 3.141592. */

#include <stdio.h>
#include <stdlib.h>

#define PI 3.141592

int main()
{
    int g;
    float r;

    printf("Digite um angulo em graus: ");
    scanf("%d", &g);

    r = (float)(g * PI / 180);

    printf("%d Graus = %f Radianos.\n", g, r);

    system("pause");
    return 0;
}
