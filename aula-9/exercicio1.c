#include <stdio.h>
#include <stdlib.h>

/*
    Considere um array bidimensional com 100 elementos. Preencha essa matriz com valores aleatórios entre 1 e 100. Após isso, crie um vetor que deverá armazenar todos os elementos da matriz e imprima na tela ambas estruturas. Exemplo:

    Matriz:
    7  5  9  8
    4  2  1  7
    0  3  4  5
    3  7  1  5

    Vetor:
    7 5 9 8 4 2 1 7 0 3 4 5 3 7 1 5

    Ao final, ordene os valores do vetor em ordem crescente, armazene eles na matriz(mantendo a ordenação) e imprima novamente na tela. Exemplo com os mesmos valores acima:

    Vetor:
        0 1 1 2 3 3 4 4 5 5 5 7 7 7 8 9

    Matriz
    0  1  1  2
    3  3  4  4
    5  5  5  7
    7  7  8  9

*/
int main()
{
    int matriz100Elementos[10][10];
    int vetor100Elementos[100];
    int arrayOrdenado[100];
    int auxIsElementoJaVerificado[100] = {0};
    int contPosicaoArrNovo = 0;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            matriz100Elementos[i][j] = rand() % 80;
            vetor100Elementos[i * 10 + j] = matriz100Elementos[i][j];
            printf("%3d ", matriz100Elementos[i][j]);
        }
        printf("\n");
    }

    printf("\n\n--------------------------------------------------\n\n");

    for (int i = 0; i < 100; i++)
    {
        printf("%3d ", vetor100Elementos[i]);
    }

    printf("\n\n--------------------------------------------------\n\n");

    while (contPosicaoArrNovo < 100)
    {
        int menorElemento = 999999;
        int indiceMenorElemento = -1;

        for (int i = 0; i < 100; i++)
        {
            if (!auxIsElementoJaVerificado[i] && vetor100Elementos[i] < menorElemento)
            {
                menorElemento = vetor100Elementos[i];
                indiceMenorElemento = i;
            }
        }

        arrayOrdenado[contPosicaoArrNovo] = menorElemento;
        auxIsElementoJaVerificado[indiceMenorElemento] = 1;
        contPosicaoArrNovo++;
    }

    for (int i = 0; i < 100; i++)
    {
        printf("%3d ", arrayOrdenado[i]);
    }

    printf("\n\n--------------------------------------------------\n\n");

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%3d ", arrayOrdenado[i * 10 + j]);
        }
        printf("\n");
    }

    return 0;
}