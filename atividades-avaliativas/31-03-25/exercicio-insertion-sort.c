#include <stdio.h>
#include <stdlib.h>

/*
    Crie um algoritmo em C para ordenar uma matriz de 4x8 dimensões, onde cada linha da matriz
    deve ser ordenada individualmente. Exemplo:

    Matriz de Entrada:
        | 5 - 3 - 2 - 1 - 0 - 9 - 7 - 7 |
        | 8 - 4 - 2 - 4 - 8 - 6 - 4 - 0 |
        | 9 - 8 - 7 - 6 - 5 - 4 - 3 - 2 |
        | 0 - 3 - 1 - 5 - 9 - 7 - 5 - 7 |

    Matriz de Saída:
        | 0 - 1 - 2 - 3 - 5 - 7 - 7 - 9 |
        | 0 - 2 - 4 - 4 - 4 - 6 - 8 - 8 |
        | 2 - 3 - 4 - 5 - 6 - 7 - 8 - 9 |
        | 0 - 1 - 3 - 5 - 5 - 7 - 7 - 9 |
*/
int main()
{
    int matriz[4][8];
    int elementoMaisADireita, posicaoElementoAnteriorAux;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            matriz[i][j] = rand() % 50;
        }
    }

    printf("Matriz desordenada: \n\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            printf("%3d", matriz[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 4; i++) // i representa cada linha/vetor
    {
        for (int j = 1; j < 8; j++)
        {
            elementoMaisADireita = matriz[i][j];
            posicaoElementoAnteriorAux = j - 1;

            while (
                posicaoElementoAnteriorAux >= 0 &&
                matriz[i][posicaoElementoAnteriorAux] > elementoMaisADireita)
            {
                matriz[i][posicaoElementoAnteriorAux + 1] = matriz[i][posicaoElementoAnteriorAux];
                posicaoElementoAnteriorAux--;
            }

            matriz[i][posicaoElementoAnteriorAux + 1] = elementoMaisADireita;
        }
    }

    printf("\nMatriz ordenada: \n\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            printf("%3d", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}