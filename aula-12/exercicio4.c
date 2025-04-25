#include <stdio.h>

void verificarSeNumeroEhParOuImpar(int num)
{
    if (num % 2 == 0)
    {
        printf("O numero %d eh par", num);
    } else {
        printf("O numero %d eh impar", num);
    }
}

int main()
{
    verificarSeNumeroEhParOuImpar(5);
    return 0;
}
