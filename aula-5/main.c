#include <stdio.h>

int main()
{
    int matrizA[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matrizA[i][j]);
        }
        printf("\n-----\n");
    }

    printf("\n\n\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", matrizA[i][i]);
    }

    printf("\n\n\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", matrizA[i][2 - i]);
    }


    return 0;
}