#include <stdio.h>
#include <stdlib.h>

int x = 5; // variavel global

void incr()
{
    x++; // acesso a variavel global
}

int main()
{
    printf("x = %d\n", x); // acesso a variavel global
    incr();
    printf("x = %d\n", x); // acesso a variavel global

    // system("pause");
    return 0;
}
