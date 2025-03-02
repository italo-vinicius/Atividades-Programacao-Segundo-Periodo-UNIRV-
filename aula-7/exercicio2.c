#include <stdio.h>

/*
 Criar uma matriz quadrada de 25 posições com valores aleatórios entre 0 e 100. Após isso:
 - Exibir todos os elementos da matriz
 - Contar quantos números pares existem
 - Contar quantos números ímpares existem
*/
int main()
{
    int matrizQuadrada[5][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}};

    int contPares = 0;
    int contImpares = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", matrizQuadrada[i][j]);

            if (matrizQuadrada[i][j] % 2 == 0)
            {
                contPares++;
            }
            else
            {
                contImpares++;
            }
        }

        printf("\n");
    }

    printf("\nQuantidade de pares %d", contPares);
    printf("\nQuantidade de impares %d", contImpares);

    return 0;
}