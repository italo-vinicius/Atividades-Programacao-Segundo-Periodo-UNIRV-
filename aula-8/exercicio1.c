#include <stdio.h>

/*
 Crie um programa que, utilizando laços de repetições, recrie as tabelas abaixo:
 0 	1 	2 	3 	4 	5 	6 	7 	8 	9
 0 	1 	2 	3 	4 	5 	6 	7 	8 	9
 0 	1 	2 	3 	4 	5 	6 	7 	8 	9
 0 	1 	2 	3 	4 	5 	6 	7 	8 	9
 0 	1 	2 	3 	4 	5 	6 	7 	8 	9
 */
int main()
{
    int matrizA[5][10];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            matrizA[i][j] = j;
            printf("%d ", matrizA[i][j]);
        }
        printf("\n");
    }

    return 0;
}