/* Exe-0306 Leia uma velocidade em km/h (quil�metros por hora) e
 * apresente convertida em m/s (metros por segundo). A f�rmula de
 * convers�o � M = K / 36, sendo K a velocidade em km/h M em m/s. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int kmh, ms;

    printf("Digite uma velocidade em km/h: ");
    scanf("%d", &kmh);
    ms = kmh / 36;
    printf("%d km/h = %d m/s\n", kmh, ms);

    system("pause");
    return 0;
}
