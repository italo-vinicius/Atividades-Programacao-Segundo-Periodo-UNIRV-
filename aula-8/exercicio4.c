#include <stdio.h>

/*
 Crie um programa que, utilizando laços de repetições, recrie as tabelas abaixo:
    1 1 1 1 1 1
    0 1 0 1 0 1
    1 1 1 1 1 1 
    0 1 0 1 0 1
    1 1 1 1 1 1
    0 1 0 1 0 1 
*/
int main()
{
    int matrizA[6][6];

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if(i % 2 == 0)
            {
                matrizA[i][j] = 1;
            }
            else
            {
                if(j % 2 == 0)
                {
                    matrizA[i][j] = 0;
                }
                else
                {
                    matrizA[i][j] = 1;
                }
            }

            printf("%d ", matrizA[i][j]);
        }
        printf("\n");
    }

    return 0;
}