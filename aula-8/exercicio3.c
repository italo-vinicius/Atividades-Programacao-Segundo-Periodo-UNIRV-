#include <stdio.h>

/*
 Crie um programa que, utilizando laços de repetições, recrie as tabelas abaixo:
    0 0 0 0	0 0
    1 1 1 1 1 1
    2 2 2 2 2 2 
    3 3 3 3 3 3
    4 4 4 4 4 4
    5 5 5 5 5 5 
*/
int main()
{
    int matrizA[6][6];

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            matrizA[i][j] = i;
            printf("%d ", matrizA[i][j]);
        }
        printf("\n");
    }

    return 0;
}