#include <stdio.h>
#include <math.h>

/*
 Crie um programa que, utilizando laços de repetições, recrie as tabelas abaixo:
    0	0	0	0	0
    1	1	1	1	1
    4	4	4	4	4
    9	9	9	9	9
    16	16	16	16	16
    25	25	25	25	25
    36	36	36	36	36
    49	49	49	49	49
    64	64	64	64	64
    81	81	81	81	81
 */
int main()
{
    int matrizA[10][5];

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            matrizA[i][j] = pow(i, 2);
            printf("%d ", matrizA[i][j]);
        }
        printf("\n");
    }

    return 0;
}