#include <stdio.h>
#include <math.h>

/*
 Faça um programa que calcule o desvio padrão de um vetor(v) contendo 10 números(n),
 (onde m é a média do vetor), (v equivale ao vetor) e (n equivale ao tamanho do vetor).
*/

int main()
{
    double vetorA[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    double somaValoresVetor = 0;
    double somaQuadrados = 0;
    double mediaVetor, divisaoNumeroElementos, resultado;

    for (int i = 0; i < 10; i++)
    {
        somaValoresVetor += vetorA[i];
    }

    mediaVetor = somaValoresVetor / 10;

    for (int i = 0; i < 10; i++)
    {
        somaQuadrados += pow(vetorA[i] - mediaVetor, 2);
    }

    divisaoNumeroElementos = somaQuadrados / (10 - 1);

    resultado = sqrt(divisaoNumeroElementos);

    printf("Desvio padrao: %.2lf", resultado);

    return 0;
}