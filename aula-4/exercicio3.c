#include <stdio.h>

/*
 Criar um vetor de 20 posições e preenchê-lo da seguinte forma:
 1 0 2 0 3 0 4 0 5 0 6 0 7 0 8 0 9 0 10 0
*/
int main()
{
    int vetor[20];

    for (int i = 0; i < 20; i++)
    {
        if (i % 2 == 0)
        {
            vetor[i] = (i / 2) + 1;
        }
        else
        {
            vetor[i] = 0;
        }
    }

    for (int i = 0; i < 20; i++)
    {
        printf("%d ", vetor[i]);
    }

    return 0;
}