#include <stdio.h>

void imprimirParesAte100()
{
    for(int i = 0; i <= 100; i++)
    {
        if(i % 2 == 0)
        {
            printf("%d ", i);
        }
    }
}

int main()
{
    imprimirParesAte100();
    return 0;
}
