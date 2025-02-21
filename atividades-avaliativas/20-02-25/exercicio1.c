#include <stdio.h>

/*
 Crie um algoritmo que preencha o vetor de 20 posições da seguinte forma:
 1 1 2 4 3 9 4 16 5 25 6 36 7 49 8 64 9 81 10 100
*/
int main()
{
    int vetorA[20];
    int numsEmPosicoesPares = 1;

    for (int i = 0; i < 20; i++)
    {
        if (i % 2 == 0)
        {
            vetorA[i] = numsEmPosicoesPares;
            numsEmPosicoesPares += 1;
        }
        else
        {
            vetorA[i] = vetorA[i - 1] * vetorA[i - 1];
        }

        printf("%d ", vetorA[i]);
    }

    return 0;
}