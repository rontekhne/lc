#include <stdio.h>
#include <stdlib.h>

int x = 5;

int main()
{
    printf("x = %d\n", x);

    int x = 4;
    printf("x = %d\n", x);

    {
        int x = 3;
        printf("x = %d\n", x);
    }

    printf("x = %d\n", x);

    // system("pause");
    return 0;
}
