#include <stdio.h>

void imprimirTabuada5()
{
    for(int i = 0; i <= 10; i++)
    {
        printf("\n%d X 5 = %d ", i, i * 5);
    }
}

int main()
{
    imprimirTabuada5();
    return 0;
}
