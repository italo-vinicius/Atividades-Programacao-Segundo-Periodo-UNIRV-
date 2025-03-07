#include <stdio.h>

/*
 Crie um programa que, utilizando laços de repetições, recrie as tabelas abaixo:
    3 1 1 1 1 1
    2 3 1 1 1 1
    2 2 3 1 1 1
    2 2 2 3 1 1
    2 2 2 2 3 1
    2 2 2 2 2 3
*/
int main()
{
    int matrizA[6][6];

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (i == j)
            {
                matrizA[i][j] = 3;
            }
            else if (i > j)
            {
                matrizA[i][j] = 2;
            }
            else
            {
                matrizA[i][j] = 1;
            }

            printf("%d ", matrizA[i][j]);
        }
        printf("\n");
    }

    return 0;
}