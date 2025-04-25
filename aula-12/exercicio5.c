#include <stdio.h>

void imprimirTabuada(int num)
{
    for(int i = 0; i <= 10; i++)
    {
        printf("\n%d X %d = %d ", i, num, i * num);
    }
}

int main()
{
    imprimirTabuada(10);
    return 0;
}
