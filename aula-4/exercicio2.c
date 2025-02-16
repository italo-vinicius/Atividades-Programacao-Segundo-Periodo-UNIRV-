#include <stdio.h>

/*
 Crie um programa que contenha um vetor de 20 posições de inteiros.
 O algoritmo deverá realizar a média aritmética dos elementos que estão
 nos índices pares e a média aritmética dos elementos dos índices ímpares.
 Mostre ambos na tela.
*/
int main()
{
    int numeros[20] = {10, 5, 8, 3, 12, 7, 14, 2, 9, 6, 15, 4, 11, 1, 20, 18, 16, 19, 13, 17};
    float somaPares = 0, somaImpares = 0;
    int contPares = 0, contImpares = 0;
    float mediaPares = 0, mediaImpares = 0;

    for (int i = 0; i < 20; i++)
    {
        if (i % 2 == 0)
        {
            somaPares += numeros[i];
            contPares++;
        }
        else
        {
            somaImpares += numeros[i];
            contImpares++;
        }
    }

    mediaPares = somaPares / contPares;
    mediaImpares = somaImpares / contImpares;

    printf("Media dos elementos nos indices pares: %.2f\n", mediaPares);
    printf("Media dos elementos nos indices impares: %.2f\n", mediaImpares);

    return 0;
}