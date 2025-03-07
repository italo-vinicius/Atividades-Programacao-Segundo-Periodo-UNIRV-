#include <stdio.h>

/*
 Crie um programa que, utilizando laços de repetições, recrie as tabelas abaixo:
  1 0 0 0 0 0 0 0 0
  0 2 0 0 0 0 0 0 0
  0 0 3 0 0 0 0 0 0
  0 0 0 4 0 0 0 0 0
  0 0 0 0 5 0 0 0 0
  0 0 0 0 0 6 0 0 0
  0 0 0 0 0 0 7 0 0
  0 0 0 0 0 0 0 8 0
  0 0 0 0 0 0 0 0 9
*/
int main()
{
    int matrizA[9][9];

    for (int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 9; j++)
        {
            if(i == j)
            {
                matrizA[i][j] = i + 1;
            }
            else
            {
                matrizA[i][j] = 0;
            }

            printf("%d ", matrizA[i][j]);
        }
        printf("\n");
    }

    return 0;
}