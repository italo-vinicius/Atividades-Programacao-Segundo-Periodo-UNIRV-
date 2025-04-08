#include <stdio.h>

int main()
{
    int posicaoMenor, menorValor;
    int vetor[6] = {2, 4, 6, 1, 3, 10};

    for (int i = 0; i < 5; i++)
    {
        posicaoMenor = i;

        for (int j = i + 1; j < 6; j++)
        {
            if (vetor[j] < vetor[posicaoMenor])
            {
                posicaoMenor = j;
            }
        }

        menorValor = posicaoMenor;
        vetor[posicaoMenor] = vetor[i];
        vetor[i] = menorValor;
    }

    for (int i = 0; i < 6; i++)
    {
        printf("%d ", vetor[i]);
    }

    return 0;
}