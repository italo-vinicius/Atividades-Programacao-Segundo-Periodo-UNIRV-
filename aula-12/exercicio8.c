#include <stdio.h>
#include <stdlib.h>

int imprimirValorAleatorio()
{
    int valorAleatorio = rand() % 100;
    printf("Numero aleatorio gerado: %d ", valorAleatorio);

    if(valorAleatorio % 2 == 0)
    {
        return 0;
    } else {
        return 1;
    }
}

int main()
{
    imprimirValorAleatorio();
    return 0;
}
