#include <stdio.h>

/*
 Crie os seguintes vetores:
 - vetorA: 0 4 2 1 5 6 2 8 1 2 1 5 6 3 0
 - vetorB: 1 5 7 3 1 1 5 2 8 4 6 1 4 5 3
 Com os vetores preenchidos, identifique o padrão e crie um algoritmo que tenha o
 seguinte resultado:
 - vetorC: -1 9 9 -2 6 7 -3 10 9 -2 7 6 2 8 3
*/
int main()
{
    int vetorA[15] = {0, 4, 2, 1, 5, 6, 2, 8, 1, 2, 1, 5, 6, 3, 0};
    int vetorB[15] = {1, 5, 7, 3, 1, 1, 5, 2, 8, 4, 6, 1, 4, 5, 3};
    int vetorC[15];

    for (int i = 0; i < 15; i++)
    {
        if (i % 3 == 0)
        {
            vetorC[i] = vetorA[i] - vetorB[i];
        }
        else
        {
            vetorC[i] = vetorA[i] + vetorB[i];
        }
    }

    for (int i = 0; i < 15; i++)
    {
        printf("%d ", vetorC[i]);
    }

    return 0;
}
