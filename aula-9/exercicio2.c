#include <stdio.h>
#include <stdlib.h>

/*
    Crie um algoritmo que contenha um vetor de 10 posições, preenchidos de forma aleatória.
    Após isso, crie uma matriz de 10x10, onde também será preenchida com valores aleatórios.
    O algoritmo deverá multiplicar cada elemento do vetor com a linha correspondente na matriz e
    armazenar o resultado em outra matriz. Exemplo:

    Vetor:
        3		4		6		1

    Matriz:
        8		7		1		8
        7		6		4		0
        6		5		1		1
        2		4		9		2

    Cálculo da nova matriz:
        8 * 3		7 * 3 		1 * 3 		8 * 3
        7 * 4		6 * 4		4 * 4		0 * 4
        6 * 6		5 * 6		1 * 6		1 * 6
        2 * 1		4 * 1		9 * 1		2 * 1

    Resultado da nova matriz:
        24 		21		3		24
        28		24		16		0
        36		30		6		6
        2		4		9		2
*/

int main()
{
    int vetorValoresAleatorios[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int matrizValoresAleatorios[10][10];

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            matrizValoresAleatorios[i][j] = rand() % 99;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%2d * %2d = %3d |", vetorValoresAleatorios[i], matrizValoresAleatorios[i][j], vetorValoresAleatorios[i] * matrizValoresAleatorios[i][j]);
        }
        printf("\n");
    }

    return 0;
}