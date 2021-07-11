/* Exe-0307 Leia um valor que represente uma temperatura em graus
 * Celsius e apresente-a convertida em graus Fahrenheit. A fórmula
 * de conversão é: F = C * (9.0/5.0) + 32.0, sendo F a temperatura
 * em Fahrenheit e C a temperatura em Celsius. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c, f;

    printf("Digite uma temperatura em Celsius: ");
    scanf("%f", &c);

    f = c * (9.0/5.0) + 32.0;

    printf("%.1f Celsius = %.1f F\n", c, f);

    system("pause");
    return 0;
}
