#include <stdio.h>

/*
 Criar uma matriz de não inteiros 3x4 (3 linhas e 4 colunas) e realizar as seguintes análises:
 - O maior valor da matriz
 - O menor valor da matriz
 - A soma de todos os elementos de cada linha
 - A subtração de todos os elementos de cada coluna
*/
int main()
{
    float matrizA[3][4] = {
        {1.4, 2, 3.6, 4.4},
        {5.1, 6, 7.9, 8.2},
        {9.4, 1.1, 11.5, 12.6}};
    float maiorValor = matrizA[0][0];
    float menorValor = matrizA[0][0];
    float somaValoresLinha;
    float subtracaoValoresColuna;

    for (int i = 0; i < 3; i++)
    {
        somaValoresLinha = 0;
        subtracaoValoresColuna = 0;

        for (int j = 0; j < 4; j++)
        {
            if (matrizA[i][j] > maiorValor)
            {
                maiorValor = matrizA[i][j];
            }

            if (matrizA[i][j] < menorValor)
            {
                menorValor = matrizA[i][j];
            }

            somaValoresLinha += matrizA[i][j];
        }

        printf("A Soma dos valores da linha %d foi de %.1f\n", i + 1, somaValoresLinha);
    }

    printf("\n");
    for (int j = 0; j < 4; j++)
    {
        subtracaoValoresColuna = matrizA[0][j];
        for (int i = 1; i < 3; i++)
        {
            subtracaoValoresColuna -= matrizA[i][j];
        }

        printf("A subtracao dos valores da coluna %d foi de %.1f\n", j + 1, subtracaoValoresColuna);
    }

    printf("\nO maior valor da matriz e %.1f", maiorValor);
    printf("\nO menor valor da matriz e %.1f", menorValor);

    return 0;
}