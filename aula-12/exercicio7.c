#include <stdio.h>
#include <stdlib.h>

void imprimirValorAleatorio()
{
    printf("%d ", rand() % 100);
}

int main()
{
    imprimirValorAleatorio();
    return 0;
}
