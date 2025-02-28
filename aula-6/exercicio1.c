#include <stdio.h>

int main()
{
    int c = 0;
    int matrizA[3][4];

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         matrizA[i][j] = c;
    //         c++;
    //     }
    // }

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         matrizA[i][j] = i + j;
    //     }
    // }

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         matrizA[i][j] = i * 10 + j;
    //     }
    // }

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         c++;
    //         matrizA[i][j] = c;
    //         c++;
    //     }
    // }

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         if(j % 2 == 0 && i % 2 == 0 || j % 2 != 0 && i % 2 != 0)
    //         {
    //             matrizA[i][j] = 1;
    //         }
    //         else
    //         {
    //             matrizA[i][j] = 2;
    //         }
    //     }
    // }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", matrizA[i][j]);
        }
        printf("\n");
    }

    return 0;
}