#include <stdio.h>

/*
 Crie um programa que contenha um array bidimensional 16x16 de inteiros.
 O programa deverá imprimir somente os valores das linhas pares e colunas ímpares.
*/
int main()
{
    int matrizQuadrada[16][16];

    for (int i = 0; i < 16; i++)
    {
        for (int j = 0; j < 16; j++)
        {
            matrizQuadrada[i][j] = i * 16 + j;

            if (i % 2 == 0 && j % 2 != 0)
            {
                printf("%d ", matrizQuadrada[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}