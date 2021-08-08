#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;

    inicio:
    if (i < 5) {
        printf("Numero %d\n", i);
        i++;
        goto inicio;
    }

    system("pause");
    return 0;
}
