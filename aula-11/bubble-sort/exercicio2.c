#include <stdio.h>
#include <stdlib.h>

/*
    Implemente o algoritmo Bubble Sort para ordenar um array de inteiros em ordem crescente.
        - Crie um array de inteiros com pelo menos 50 elementos.
        - Implemente o algoritmo Bubble Sort.
        - Exiba o array antes e depois da ordenação.
*/
int main()
{
    int vetor50Posicoes[50];
    int maiorTemp;

    for (int i = 0; i < 50; i++)
    {
        vetor50Posicoes[i] = rand() % 100;
    }

    printf("Vetor antes da ordenacao:\n");

    for (int i = 0; i < 50; i++)
    {
        printf("%d ", vetor50Posicoes[i]);
    }

    printf("\n\n");

    for (int i = 0; i < 50; i++)
    {
        for (int j = 0; j < 50 - 1; j++)
        {
            if (vetor50Posicoes[j] > vetor50Posicoes[j + 1])
            {
                maiorTemp = vetor50Posicoes[j];
                vetor50Posicoes[j] = vetor50Posicoes[j + 1];
                vetor50Posicoes[j + 1] = maiorTemp;
            }
        }
    }

    printf("Vetor depois da ordenacao:\n");
    for (int i = 0; i < 50; i++)
    {
        printf("%d ", vetor50Posicoes[i]);
    }
    printf("\n");

    return 0;
}